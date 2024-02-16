/**
 *
 * \file SWC_HeightMotor_Template.c
 * \brief Rte Component Template for AUTOSAR SWC: SWC_HeightMotor
 *
 * \author Sprints AUTOSAR Authoring Tool (SAAT) v1.0.2
 * Generated on 12/24/2023 11:02 PM
 *
 * For any inquiries: hassan.m.farahat@gmail.com
 *
 * Code Editor: Tasneem Mansour.
 * Date: 24.12.2023
 */

#include "Rte_SWC_HeightMotor.h"


/**
 *
 * Runnable HeightMotor_Move
 *
 * Triggered By:
 *  - OperationInvokedEventImpl.OIE_ppHeightMotor_Move
 *
 */

void HeightMotor_Move (StepMotorStepType step)
{
	Std_ReturnType status;
	
	/*ToDo: Drive the motor through DIO Module */
	/*
	*Some logic to be performed here*
	Dio_WriteChannel (Dio_ChannelType ChannelId, Dio_LevelType Level);
	*/

}

