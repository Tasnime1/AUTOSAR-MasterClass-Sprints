/**
 *
 * \file SWC_SlideMotor_Template.c
 * \brief Rte Component Template for AUTOSAR SWC: SWC_SlideMotor
 *
 * \author Sprints AUTOSAR Authoring Tool (SAAT) v1.0.2
 * Generated on 1/22/2024 06:04 PM
 *
 * For any inquiries: hassan.m.farahat@gmail.com
 *
 */

#include "Rte_SWC_SlideMotor.h"


/**
 *
 * Runnable SlideMotor_Move
 *
 * Triggered By:
 *  - OperationInvokedEventImpl.OIE_ppSlideMotor_Move
 *
 */

void SlideMotor_Move (StepMotorStepType step)
{
	Std_ReturnType status;

	/* Server Call Points */
	if(step == PLUS)
	{
		status = Rte_Call_rpIOSetSlide_IOSetForward();	
	}
	else if(step == MINUS)
	{
		status = Rte_Call_rpIOSetSlide_IOSetReverse();
	}
	
}

