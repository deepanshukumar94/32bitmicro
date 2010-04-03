#include "interfaces/if_lpc17xx.h"
#include "interfaces/lpc17xx_spi.h"
#include "interfaces/lpc17xx_sd.h"

#ifdef HW_ENDPOINT_LPC17xx_SD
	#include "interfaces/lpc17xx_sd.h"
#else
	#error HW_ENDPOINT_LPC17xx_SD is not defined, check types.h.
#endif

/* 
	This function will be called one time, when the hardware object is 
	initialized by efs init(). 
	This code should bring the hardware in a ready to use state.

	Optionally but recommended you should fill in the file->sectorCount feld 
	with the number of sectors. This field is used to validate sectorrequests.
*/
esint8 if_initInterface(hwInterface* file, eint8* opts)
{
	SDCFG SDCfg;
	
	if (LPC17xx_SD_Init() == false)
		return (-1);
	if 	(LPC17xx_SD_ReadCfg(&SDCfg) == false)
		return (-2);

#if 0
	file->sectorCount = SDCfg.size/512;	
	if( (SDCfg.size%512) != 0) {
		file->sectorCount--;
	}
#else
	file->sectorCount = SDCfg.sectorcnt;
#endif

	return 0;
}


/*
	read a sector from the disc and store it in a user supplied buffer.

	note that there is no support for sectors that are not 512 bytes large
*/

esint8 if_readBuf(hwInterface* file,euint32 address,euint8* buf)
{
	if (LPC17xx_SD_ReadSector (address, buf, 1) == true)
		return 0;
	else
		return (-1);
}

/*
	write a sector.

	note that there is no support for sectors that are not 512 bytes large.
*/

esint8 if_writeBuf(hwInterface* file,euint32 address,euint8* buf)
{
	if ( LPC17xx_SD_WriteSector(address, buf, 1) == true)
		return 0;
	else
		return (-1);
}
/*****************************************************************************/ 
