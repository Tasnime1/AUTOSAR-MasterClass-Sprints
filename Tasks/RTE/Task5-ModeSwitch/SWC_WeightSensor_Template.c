/**
 *
 * \file SWC_WeightSensor_Template.c
 * \brief Rte Component Template for AUTOSAR SWC: SWC_WeightSensor
 *
 * \author Sprints AUTOSAR Authoring Tool (SAAT) v1.0.2
 * Generated on 12/25/2023 01:46 PM
 *
 * For any inquiries: hassan.m.farahat@gmail.com
 *
 */

#include "Rte_SWC_WeightSensor.h"


/**
 *
 * Runnable WeightSensor_GetPosition
 *
 * Triggered By:
 *  - OperationInvokedEventImpl.OIE_ppWeightSensor_GetWeight
 *
 */

void WeightSensor_GetPosition (SensorWeightType* SensorWeightType_weight)
{
	Std_ReturnType status;
	IoWeightSensorReadingType IoWeightSensorReadingType_weight;

	/* Server Call Points */
	status = Rte_Call_rpIOGetWeight_IOGet(&IoWeightSensorReadingType_weight);
	
	/*Return weight/100*/
	*SensorWeightType_weight = IoWeightSensorReadingType_weight/100;
	
}

