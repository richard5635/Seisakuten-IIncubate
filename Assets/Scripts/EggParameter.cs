using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EggParameter : MonoBehaviour
{
	[HideInInspector]public bool isNew = true;
    GameController gameController;
	EggMovement eggMovement;
    ShaderHandler shaderHandler;
    EggPhysicalAI eggPhysicalAI;
	public int SoundParameter;
    public int KnockParameter;
    public int StareParameter;
    public int TotalParameter;
    public int TotalParPass;

    public int hatchgoodlimit = 25;
    public int hatchbadlimit = 75;

    public int PhaseA = 60;
    public int PhaseB = 110;
    public int PhaseC = 160;
	public int PhaseD = 200;

    [HideInInspector]public Color inhColor;

    //IEnumerator
    [HideInInspector]public IEnumerator ChangeColorVar;

	void Awake()
	{
		gameController = GameObject.Find("IIncubate").GetComponent<GameController>();
        eggPhysicalAI = GetComponent<EggPhysicalAI>();
		eggMovement = GetComponent<EggMovement>();
        shaderHandler = GetComponent<ShaderHandler>();
	}

    public void Initialize()
    {
        SoundParameter = 0;
        KnockParameter = 0;
        StareParameter = 0;
		AddParameter(0,0,0);
		eggMovement.UpdateParameterText();
    }

    public void AddParameter(int sd, int kn, int st)
    {
        // int SoundParameterII;
        // int KnockParameterII;
        // int StareParameterII;

        SoundParameter += sd;
        KnockParameter += kn;
        StareParameter += st;

        // SoundParameterII = (SoundParameter > 25 ? SoundParameter - 25 : 0) + (SoundParameter > 75 ? (int)(SoundParameter * (-0.2f)) : 0);
        // KnockParameterII = (KnockParameter > 25 ? KnockParameter - 25 : 0) + (KnockParameter > 75 ? (int)(SoundParameter * (-0.2f)) : 0);
        // StareParameterII = (StareParameter > 25 ? StareParameter - 25 : 0) + (StareParameter > 75 ? (int)(SoundParameter * (-0.2f)) : 0);


        TotalParameter = SoundParameter + KnockParameter + StareParameter;

        CheckParameter();
    }

    void CheckParameter()
    {
        
        //Case 1 : Just show three different patterns
        if (TotalParameter > PhaseA && TotalParameter <= PhaseB)
        {
            //StartCoroutine("PatternA");
        }
        else if (TotalParameter > PhaseB && TotalParameter <= PhaseC)
        {
            //StartCoroutine("PatternB");
            //Pattern where it is overtreated
            //StartCorouting("PatternD");
			// StartCoroutine(gameController.CountDown());
			// isNew = false;
        }
        else if (TotalParameter <= PhaseA)
        {
            //StartCoroutine("StayQuiet");
        }
        else if (TotalParameter > PhaseC)
        {
            //StartCoroutine("ReadytoHatch");
        }

        //Change MaterialParameter
        //ChangeColorVar = shaderHandler.GradualChangeColor(SoundParameter * 0.01f, KnockParameter * 0.01f, StareParameter * 0.01f, 1);
        //shaderHandler.changeColor(SoundParameter * 0.01f, KnockParameter * 0.01f, StareParameter * 0.01f, 1);
        
        // ChangeColorVar = shaderHandler.GradualChangeColor(
        //     ParameterColor(TotalParameter)[0],
        //     ParameterColor(TotalParameter)[1],
        //     ParameterColor(TotalParameter)[2],
        //      1);
        // StartCoroutine(ChangeColorVar);

        ChangeColorVar = shaderHandler.GradualChangeColor(
            ParSpecColor(SoundParameter),
            ParSpecColor(KnockParameter),
            ParSpecColor(StareParameter),
             1);
        StartCoroutine(ChangeColorVar);

        
    }

    public float ParSpecColor(int par)
    {
        float colorPar = 0.55f + eggPhysicalAI.map(Mathf.Clamp(par, 0, 150), 0, 150, 0, 0.3f) ;
        return colorPar;
    }

    public float[] ParameterColor(int TotalParameter)
    {
        float[] colors = new float[3];

        int pColor = TotalParameter % 90;
        //
        float addR = 0;
        if(pColor < 15 || pColor >=75) addR = 0.2f;
        else if(pColor >= 15 && pColor < 30) addR = 0.2f - (0.2f * (pColor - 15)/15);
        else if(pColor >= 60 && pColor < 75) addR = (0.2f * (pColor - 60)/15);
        else addR = 0;

        float addG = 0;
        if(pColor >= 45 && pColor < 75) addG = 0.2f;
        else if(pColor >= 75 && pColor < 90) addG = 0.2f - (0.2f * (pColor - 75)/15);
        else if(pColor >= 30 && pColor < 45) addG = (0.2f * (pColor - 30)/15);
        else addG = 0;

        float addB = 0;
        if(pColor >=15 && pColor < 45) addB = 0.2f;
        else if(pColor >= 45 && pColor < 60) addB = 0.2f - (0.2f * (pColor - 45)/15);
        else if(pColor >= 0 && pColor < 15) addB = (0.2f * (pColor)/15);
        else addB = 0;

        colors[0] = 0.55f + addR;
        colors[1] = 0.55f + addG;
        colors[2] = 0.55f + addB;

        return colors;
    }

    public void DetermineHatch()
    {
        if (TotalParameter >= 135)
        {
            //Successful
        }
        else
        {
            //Fail
        }
    }

    public void ResetParameter()
    {
        SoundParameter = 0;
        KnockParameter = 0;
        StareParameter = 0;
        TotalParameter = 0;
        CheckParameter();
    }
}
