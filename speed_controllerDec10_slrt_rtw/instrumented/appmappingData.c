#include "slrtappmapping.h"
#include "./maps/speed_controllerDec10.map"



const AppMapInfo appInfo[] = 
{
	{ /* Idx 0, <speed_controllerDec10> */
		{ /* SignalMapInfo */
			speed_controllerDec10_BIOMAP,
			speed_controllerDec10_LBLMAP,
			speed_controllerDec10_SIDMAP,
			speed_controllerDec10_SBIO,
			speed_controllerDec10_SLBL,
			{0,99},
			46,
		},
		{ /* ParamMapInfo */
			speed_controllerDec10_PTIDSMAP,
			speed_controllerDec10_PTNAMESMAP,
			speed_controllerDec10_SPTMAP,
			{0,83},
			84,
		},
		"speed_controllerDec10",
		"",
		"speed_controllerDec10",
		1,
		speed_controllerDec10_dtmap,
	},
};
int getNumRef(void){
	 return(sizeof(appInfo) / sizeof(AppMapInfo));
}