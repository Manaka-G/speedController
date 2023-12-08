#include "slrtappmapping.h"
#include "./maps/speed_controller_copy.map"



const AppMapInfo appInfo[] = 
{
	{ /* Idx 0, <speed_controller_copy> */
		{ /* SignalMapInfo */
			speed_controller_copy_BIOMAP,
			speed_controller_copy_LBLMAP,
			speed_controller_copy_SIDMAP,
			speed_controller_copy_SBIO,
			speed_controller_copy_SLBL,
			{0,97},
			44,
		},
		{ /* ParamMapInfo */
			speed_controller_copy_PTIDSMAP,
			speed_controller_copy_PTNAMESMAP,
			speed_controller_copy_SPTMAP,
			{0,72},
			73,
		},
		"speed_controller_copy",
		"",
		"speed_controller_copy",
		1,
		speed_controller_copy_dtmap,
	},
};
int getNumRef(void){
	 return(sizeof(appInfo) / sizeof(AppMapInfo));
}