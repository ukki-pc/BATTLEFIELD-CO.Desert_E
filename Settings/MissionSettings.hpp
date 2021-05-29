DAP_BF_SCORESRATIOTIME=60;
DAP_BF_CAPTURETIME=1;

DAP_BF_EASTFLAG="\ca\ca_e\data\flag_tka_co.paa";
DAP_BF_WESTFLAG="\ca\ca_e\data\flag_us_co.paa";

DAP_BF_MAXFOOTRANGE=2500;
DAP_BF_ASSAULTMODE=1;

DAP_BF_CARGOSEARCHRANGE=150;
DAP_BF_CARGODROPRANGE=150;

DAP_BF_UAVVEHICLE_EAST="Pchela1T";
DAP_BF_UAVVEHICLE_WEST="Pchela1T";
DAP_BF_UAVPILOT_EAST="TK_Soldier_Pilot_EP1";
DAP_BF_UAVPILOT_WEST="US_Soldier_Pilot_EP1";
DAP_BF_UAVRANGE=500;
DAP_BF_UAVDELAY=120;

DAP_BF_SUPPLIESDROPSOURCEEAST="An2_TK_EP1";
DAP_BF_SUPPLIESDROPSOURCEWEST="C130J";
DAP_BF_SUPPLIESTRANSPORTEASTCREW="TK_Soldier_Pilot_EP1";
DAP_BF_SUPPLIESTRANSPORTWESTCREW="US_Soldier_Pilot_EP1";
DAP_BF_SUPPLYCRATE_EAST="TKVehicleBox_EP1";
DAP_BF_SUPPLYCRATE_WEST="USVehicleBox_EP1";
DAP_BF_SUPPLIESDROPHEIGHT=250;
DAP_BF_SUPDELAY=180;

DAP_BF_EASTARTILLERY=[EASTARTA,EASTARTB,EASTARTC];
DAP_BF_WESTARTILLERY=[WESTARTA,WESTARTB,WESTARTC];
DAP_BF_EASTARTILLERYROUND ="ARTY_Sh_122_HE";
DAP_BF_WESTARTILLERYROUND ="ARTY_Sh_122_HE";
DAP_BF_ARTYMAXRANGE=1450;
DAP_BF_ARTYMINRANGE=150;
DAP_BF_ARTILLERYSHOTCOUNT=10;
DAP_BF_ARTILLERYEASTCREW="TK_Soldier_EP1";
DAP_BF_ARTILLERYWESTCREW="US_Soldier_EP1";
DAP_BF_ARTDELAY=300;

DAP_BF_TRANSPORT_MINDISTANCE=250;
DAP_BF_TRANSPORT_TIME=180;

DAP_BF_PLAYERSMARKERS=0;
DAP_BF_AI_ENABLED=1;

DAP_BF_AI_UNLIMITEDAMMO=1;
DAP_BF_AI_OVERALLSKILL=1;
DAP_BF_AI_AIMINGSKILL=0.5;
DAP_BF_AI_SPOTSKILL=1;

DAP_BF_SPAWNDEFENCESQUAD=0;
DAP_BF_EAST_DEFENSESQUAD=["TK_Soldier_SL_EP1","TK_Soldier_HAT_EP1","TK_Soldier_MG_EP1","TK_Soldier_AT_EP1","TK_Soldier_AA_EP1","TK_Soldier_EP1","TK_Soldier_EP1"];
DAP_BF_WEST_DEFENSESQUAD=["US_Soldier_SL_EP1","US_Soldier_HAT_EP1","US_Soldier_AR_EP1","US_Soldier_LAT_EP1","US_Soldier_AA_EP1","US_Soldier_EP1","US_Soldier_EP1"]; 

DAP_BF_CUSTOMLOADOUT=1;

DAP_CREWALLOWEDWEAPONS = ["AKS_74_U","AKS_74_UN_kobra","bizon","bizon_silenced","BAF_L85A2_RIS_Holo","BAF_L85A2_RIS_SUSAT","BAF_L85A2_RIS_ACOG","M4A1","M4A1_Aim","M4A1_Aim_camo","M4A3_CCO_EP1","G36C","G36C_camo","MP5A5","MP5SD",""];
DAP_PILOTCLASS = "CAManBase";

SETWIND [-1,1,true];

if ((isServer) or (isDedicated)) then
{

DAP_BF_EAST_TRANSPORT=[];
PublicVariable "DAP_BF_EAST_TRANSPORT";
DAP_BF_WEST_TRANSPORT=[];	
PublicVariable "DAP_BF_WEST_TRANSPORT";
	
[AllUnits] execVM "DAPMAN\Init.sqf";

[] execVM "Scripts\SUPPORT\Artillery\ArtillerySetup.sqf";
[] execVM "Scripts\SP\InitVariables.sqf";

};

DAP_AIFAS_PLAYERSONLY=1;