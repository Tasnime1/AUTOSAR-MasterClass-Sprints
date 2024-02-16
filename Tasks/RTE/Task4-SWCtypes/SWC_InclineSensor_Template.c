/**
 *
 * \file SWC_InclineSensor_Template.c
 * \brief Rte Component Template for AUTOSAR SWC: SWC_InclineSensor
 *
 * \author Sprints AUTOSAR Authoring Tool (SAAT) v1.0.2
 * Generated on 12/25/2023 01:45 PM
 *
 * For any inquiries: hassan.m.farahat@gmail.com
 *
 */

#include "Rte_SWC_InclineSensor.h"


/**
 *
 * Runnable InclineSensor_GetPosition
 *
 * Triggered By:
 *  - OperationInvokedEventImpl.OIE_ppInclineSensor_GetPosition
 *
 */

void InclineSensor_GetPosition (SensorPositionType* SensorPositionType_position)
{
	Std_ReturnType status;
	IoPositionSensorReadingType IoWeightPositionReadingType_position;

	/* Server Call Points */
	status = Rte_Call_rpIOGetInlcine_IOGet(&IoWeightPositionReadingType_position);
	
	if(IoWeightPositionReadingType_position == 0)
	{
		SensorPositionType_position = SENSOR_POSITION_0;
	}
	else if((IoWeightPositionReadingType_position > 0) &&
		IoWeightPositionReadingType_position<=64)
	{
		SensorPositionType_position = SENSOR_POSITION_1;
	}
	else if((IoWeightPositionReadingType_position > 64) &&
		IoWeightPositionReadingType_position<=192)
	{
		SensorPositionType_position = SENSOR_POSITION_2;
	}
	else if((IoWeightPositionReadingType_position > 192) &&
		IoWeightPositionReadingType_position<=255)
	{
		SensorPositionType_position = SENSOR_POSITION_3;
	}
	
	/*TO-DO: Integrate ADC module to the project and complete the logic here*/
	/*
		Adc_ReadGroup(Group, DataBufferPtr);
	*/
}

