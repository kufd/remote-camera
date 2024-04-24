#include "app.h"
#include "circular_buffer.class.h"
#include "main.h"

extern DCMI_HandleTypeDef hdcmi;
extern DMA_HandleTypeDef hdma_dcmi;
extern I2C_HandleTypeDef hi2c1;

//CircularBuffer cameraCircularBuffer("camera", 100*1024);



void appMain()
{

	uint8_t counter = 0;
	while (1)
	{
		counter++;
	}
}

