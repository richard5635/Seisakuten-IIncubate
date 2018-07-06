using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TouchManager : MonoBehaviour
{
    EggParameter eggParameter;
    EggMovement eggMovement;
    EggPhysicalAI eggPhysicalAI;
	expressionHandler exHandler;
    FaceExpressionHandler faceHandler;
	public Text tCount;
	//GameObject
	GameObject egg;
    GameObject gObj = null;
    Plane objPlane;
    Vector3 m0;
    public GameObject Indicator;
    float distance = 50f;
    [HideInInspector] public Vector3 touchPoint;
    bool isTouchDelay = false;

    Ray GenerateMouseRay(Vector3 touchPos)
    {
        Vector3 mousePosFar = new Vector3(touchPos.x, touchPos.y, Camera.main.farClipPlane);
        Vector3 mousePosNear = new Vector3(touchPos.x, touchPos.y, Camera.main.nearClipPlane);

        Vector3 mousePosF = Camera.main.ScreenToWorldPoint(mousePosFar);
        Vector3 mousePosN = Camera.main.ScreenToWorldPoint(mousePosNear);

        Ray mr = new Ray(mousePosN, mousePosF - mousePosN);
        return mr;
    }

    void Awake()
    {
		egg = GameObject.Find("Egg");
        eggParameter = egg.transform.Find("clean").gameObject.GetComponent<EggParameter>();
        eggMovement = egg.transform.Find("clean").gameObject.GetComponent<EggMovement>();
        eggPhysicalAI = egg.transform.Find("clean").gameObject.GetComponent<EggPhysicalAI>();
		exHandler = GameObject.Find("IIncubate").transform.Find("EggExpression").gameObject.GetComponent<expressionHandler>();
        faceHandler = egg.transform.Find("clean").GetComponent<FaceExpressionHandler>();


    }


    // Use this for initialization
    void Update()
    {
		// Bit shift the index of the layer (8) to get a bit mask
        int layerMask = 1 << 8;

        // This would cast rays only against colliders in layer 8.
        // But instead we want to collide against everything except layer 8. The ~ operator does this, it inverts a bitmask.
        layerMask = ~layerMask;

		//Mouse Click
        if (Input.GetMouseButtonDown(0))
        {
            //create a ray cast and set it to the mouses cursor position in game
            Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
            RaycastHit hit2;
            if (Physics.Raycast(ray, out hit2, distance))
            {
                eggMovement.touchCount++;
                eggMovement.touchPosition = hit2.point;
                if (!isTouchDelay)
                {
                    eggMovement.ProcessInput();
                    eggMovement.UpdateParameterText();
                }
                touchPoint = hit2.point;
                Instantiate(Indicator, hit2.point, Quaternion.identity);
                StartCoroutine(Delay(1));
            }
        }

		//Screen Touch
        tCount.text = Input.touchCount.ToString();

        if (Input.touchCount > 0)
        {
            if (Input.GetTouch(0).phase == TouchPhase.Began)
            {
                Ray mouseRay = GenerateMouseRay(Input.GetTouch(0).position);
                RaycastHit hit;

                if (Physics.Raycast(mouseRay.origin, mouseRay.direction, out hit))
                {
                    gObj = hit.transform.gameObject;
                    objPlane = new Plane(Camera.main.transform.forward * -1, gObj.transform.position);

                    //calc touch offset
                    Ray mRay = Camera.main.ScreenPointToRay(Input.GetTouch(0).position);
                    float rayDistance;
                    objPlane.Raycast(mRay, out rayDistance);
                    m0 = gObj.transform.position - mRay.GetPoint(rayDistance);
                }
            }
            else if (Input.GetTouch(0).phase == TouchPhase.Moved && gObj)
            {
                Ray mRay = Camera.main.ScreenPointToRay(Input.GetTouch(0).position);
                float rayDistance;
                if (objPlane.Raycast(mRay, out rayDistance))
                {
                    gObj.transform.position = mRay.GetPoint(rayDistance) + m0;
                }
            }
            else if (Input.GetTouch(0).phase == TouchPhase.Ended && gObj)
            {
                gObj = null;
            }
        }
    }

	IEnumerator Delay(float time)
    {
        Debug.Log("Started touch delay");
        isTouchDelay = true;
        yield return new WaitForSeconds(time);
        isTouchDelay = false;
        yield return null;
    }
}
