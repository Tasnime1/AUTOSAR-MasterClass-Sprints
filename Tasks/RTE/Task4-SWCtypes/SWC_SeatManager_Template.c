/**
 *
 * \file SWC_SeatManager_Template.c
 * \brief Rte Component Template for AUTOSAR SWC: SWC_SeatManager
 *
 * \author Sprints AUTOSAR Authoring Tool (SAAT) v1.0.2
 * Generated on 12/25/2023 02:22 PM
 *
 * For any inquiries: hassan.m.farahat@gmail.com
 *
 */

#include "Rte_SWC_SeatManager.h"


/**
 *
 * Runnable SeatManager_AutoHeight
 *
 * Triggered By:
 *  - TimingEventImpl.TE_SeatManager_AutoHeight_200ms
 *
 */

void SeatManager_AutoHeight (void)
{
	Std_ReturnType status;
	SensorPositionType SensorPositionType_position;
	SensorWeightType SensorWeightType_weight;
	StepMotorStepType step;

	/* Server Call Points */
	status = Rte_Call_rpHeightSensor_GetPosition(&SensorPositionType_position);
	status = Rte_Call_rpWeightSensor_GetWeight(&SensorWeightType_weight);
	//status = Rte_Call_rpHeightMotor_Move(step);
	
	
	/*******************************ImpNote*************************
	* A lot of redundant code for the while loops!
	* Wanted to make a static function here to handle this,
	* but I don't know if this violates AUTOSAR reqs,
	* or if it'll work aslun..
	***************************************************************/
	if(SensorWeightType_weight > 100)
	{
		/*Set position to SENSOR_POSITION_STEP_3*/
		while(SensorPositionType_position < SENSOR_POSITION_STEP_3)
		{
			status = Rte_Call_rpHeightMotor_Move(PLUS);
			SensorPositionType_position++;
		}
		while(SensorPositionType_position > SENSOR_POSITION_STEP_3)
		{
			status = Rte_Call_rpHeightMotor_Move(MINUS);
			SensorPositionType_position--;
		}
	}
	else if(SensorWeightType_weight >= 80)
	{
		/*Set position to SENSOR_POSITION_STEP_2*/
		while(SensorPositionType_position < SENSOR_POSITION_STEP_2)
		{
			status = Rte_Call_rpHeightMotor_Move(PLUS);
			SensorPositionType_position++;
		}
		while(SensorPositionType_position > SENSOR_POSITION_STEP_2)
		{
			status = Rte_Call_rpHeightMotor_Move(MINUS);
			SensorPositionType_position--;
		}
	}
	else if(SensorWeightType_weight >= 60)
	{
		/*Set position to SENSOR_POSITION_STEP_1*/
		while(SensorPositionType_position < SENSOR_POSITION_STEP_1)
		{
			status = Rte_Call_rpHeightMotor_Move(PLUS);
			SensorPositionType_position++;
		}
		while(SensorPositionType_position > SENSOR_POSITION_STEP_1)
		{
			status = Rte_Call_rpHeightMotor_Move(MINUS);
			SensorPositionType_position--;
		}
	}
	if(SensorWeightType_weight < 60)
	{
		/*Set position to SENSOR_POSITION_STEP_0*/
		while(SensorPositionType_position < SENSOR_POSITION_STEP_0)
		{
			status = Rte_Call_rpHeightMotor_Move(PLUS);
			SensorPositionType_position++;
		}
		while(SensorPositionType_position > SENSOR_POSITION_STEP_0)
		{
			status = Rte_Call_rpHeightMotor_Move(MINUS);
			SensorPositionType_position--;
		}
	}
}


/**
 *
 * Runnable SeatManager_AutoIncline
 *
 * Triggered By:
 *  - TimingEventImpl.TE_SeatManager_AutoIncline_200ms
 *
 */

void SeatManager_AutoIncline (void)
{
	Std_ReturnType status;
	SensorPositionType SensorPositionType_position;
	SensorWeightType SensorWeightType_weight;
	StepMotorStepType step;

	/* Server Call Points */
	status = Rte_Call_rpInclineSensor_GetPosition(&SensorPositionType_position);
	status = Rte_Call_rpWeightSensor_GetWeight(&SensorWeightType_weight);
	//status = Rte_Call_rpInclineMotor_Move(step);
	
	if(SensorWeightType_weight > 100)
	{
		/*Set position to SENSOR_POSITION_STEP_3*/
		while(SensorPositionType_position < SENSOR_POSITION_STEP_3)
		{
			status = Rte_Call_rpInclineMotor_Move(PLUS);
			SensorPositionType_position++;
		}
		while(SensorPositionType_position > SENSOR_POSITION_STEP_3)
		{
			status = Rte_Call_rpInclineMotor_Move(MINUS);
			SensorPositionType_position--;
		}
	}
	else if(SensorWeightType_weight >= 80)
	{
		/*Set position to SENSOR_POSITION_STEP_2*/
		while(SensorPositionType_position < SENSOR_POSITION_STEP_2)
		{
			status = Rte_Call_rpInclineMotor_Move(PLUS);
			SensorPositionType_position++;
		}
		while(SensorPositionType_position > SENSOR_POSITION_STEP_2)
		{
			status = Rte_Call_rpInclineMotor_Move(MINUS);
			SensorPositionType_position--;
		}		
	}
	else if(SensorWeightType_weight >= 60)
	{
		/*Set position to SENSOR_POSITION_STEP_1*/
		while(SensorPositionType_position < SENSOR_POSITION_STEP_1)
		{
			status = Rte_Call_rpInclineMotor_Move(PLUS);
			SensorPositionType_position++;
		}
		while(SensorPositionType_position > SENSOR_POSITION_STEP_1)
		{
			status = Rte_Call_rpInclineMotor_Move(MINUS);
			SensorPositionType_position--;
		}		
	}
	if(SensorWeightType_weight < 60)
	{
		/*Set position to SENSOR_POSITION_STEP_0*/
		while(SensorPositionType_position < SENSOR_POSITION_STEP_0)
		{
			status = Rte_Call_rpInclineMotor_Move(PLUS);
			SensorPositionType_position++;
		}
		while(SensorPositionType_position > SENSOR_POSITION_STEP_0)
		{
			status = Rte_Call_rpInclineMotor_Move(MINUS);
			SensorPositionType_position--;
		}		
	}
}


/**
 *
 * Runnable SeatManager_AutoSlide
 *
 * Triggered By:
 *  - TimingEventImpl.TE_SeatManager_AutoSlide_200ms
 *
 */

void SeatManager_AutoSlide (void)
{
	Std_ReturnType status;
	SensorPositionType SensorPositionType_position;
	SensorWeightType SensorWeightType_weight;
	StepMotorStepType step;

	/* Server Call Points */
	status = Rte_Call_rpSlideSensor_GetPosition(&SensorPositionType_position);
	status = Rte_Call_rpWeightSensor_GetWeight(&SensorWeightType_weight);
	//status = Rte_Call_rpSlideMotor_Move(step);

	if(SensorWeightType_weight > 100)
	{
		/*Set position to SENSOR_POSITION_STEP_3*/
		while(SensorPositionType_position < SENSOR_POSITION_STEP_3)
		{
			status = Rte_Call_rpSlideMotor_Move(PLUS);
			SensorPositionType_position++;
		}
		while(SensorPositionType_position > SENSOR_POSITION_STEP_3)
		{
			status = Rte_Call_rpSlideMotor_Move(MINUS);
			SensorPositionType_position--;
		}
	}
	else if(SensorWeightType_weight >= 80)
	{
		/*Set position to SENSOR_POSITION_STEP_2*/
		while(SensorPositionType_position < SENSOR_POSITION_STEP_2)
		{
			status = Rte_Call_rpSlideMotor_Move(PLUS);
			SensorPositionType_position++;
		}
		while(SensorPositionType_position > SENSOR_POSITION_STEP_2)
		{
			status = Rte_Call_rpSlideMotor_Move(MINUS);
			SensorPositionType_position--;
		}
	}
	else if(SensorWeightType_weight >= 60)
	{
		/*Set position to SENSOR_POSITION_STEP_1*/
		while(SensorPositionType_position < SENSOR_POSITION_STEP_1)
		{
			status = Rte_Call_rpSlideMotor_Move(PLUS);
			SensorPositionType_position++;
		}
		while(SensorPositionType_position > SENSOR_POSITION_STEP_1)
		{
			status = Rte_Call_rpSlideMotor_Move(MINUS);
			SensorPositionType_position--;
		}
	}
	if(SensorWeightType_weight < 60)
	{
		/*Set position to SENSOR_POSITION_STEP_0*/
		while(SensorPositionType_position < SENSOR_POSITION_STEP_0)
		{
			status = Rte_Call_rpSlideMotor_Move(PLUS);
			SensorPositionType_position++;
		}
		while(SensorPositionType_position > SENSOR_POSITION_STEP_0)
		{
			status = Rte_Call_rpSlideMotor_Move(MINUS);
			SensorPositionType_position--;
		}
	}	
}


/**
 *
 * Runnable SeatManager_SetHeight
 *
 * Triggered By:
 *  - DataReceivedEventImpl.DRE_rpSeatCtrlBtns_DE_HeightBtnState
 *
 */

void SeatManager_SetHeight (void)
{
	Std_ReturnType status;
	MultiStateBtnType HeightBtnState;
	StepMotorStepType step;

	/* Data Receive Points */
	status = Rte_Read_rpSeatCtrlBtns_HeightBtnState(&HeightBtnState);
	
	if(HeightBtnState == MULTI_STATE_BTN_MINUS)
	{
		Rte_Call_rpHeightMotor_Move(MOTOR_STEP_MINUS);
	}
	
	else if(HeightBtnState == MULTI_STATE_BTN_PLUS)
	{
		Rte_Call_rpHeightMotor_Move(MOTOR_STEP_PLUS);
	}
	
	/* Server Call Points */
	status = Rte_Call_rpHeightMotor_Move(step);
	
}


/**
 *
 * Runnable SeatManager_SetIncline
 *
 * Triggered By:
 *  - DataReceivedEventImpl.DRE_rpSeatCtrlBtns_DE_InclineBtnState
 *
 */

void SeatManager_SetIncline (void)
{
	Std_ReturnType status;
	MultiStateBtnType InclineBtnState;
	StepMotorStepType step;

	/* Data Receive Points */
	status = Rte_Read_rpSeatCtrlBtns_InclineBtnState(&InclineBtnState);
	
	if(InclineBtnState == MULTI_STATE_BTN_MINUS)
	{
		Rte_Call_rpInclineMotor_Move(MOTOR_STEP_MINUS);
	}
	
	else if(InclineBtnState == MULTI_STATE_BTN_PLUS)
	{
		Rte_Call_rpInclineMotor_Move(MOTOR_STEP_PLUS);
	}
	
	/* Server Call Points */
	status = Rte_Call_rpInclineMotor_Move(step);
	
}


/**
 *
 * Runnable SeatManager_SetSlide
 *
 * Triggered By:
 *  - DataReceivedEventImpl.DRE_rpSeatCtrlBtns_DE_SlideBtnState
 *
 */

void SeatManager_SetSlide (void)
{
	Std_ReturnType status;
	MultiStateBtnType SlideBtnState;
	StepMotorStepType step;

	/* Data Receive Points */
	status = Rte_Read_rpSeatCtrlBtns_SlideBtnState(&SlideBtnState);
	
	if(SlideBtnState == MULTI_STATE_BTN_MINUS)
	{
		Rte_Call_rpSlideMotor_Move(MOTOR_STEP_MINUS);
	}
	
	else if(SlideBtnState == MULTI_STATE_BTN_PLUS)
	{
		Rte_Call_rpSlideMotor_Move(MOTOR_STEP_PLUS);
	}
	
	/* Server Call Points */
	status = Rte_Call_rpSlideMotor_Move(step);
	
}


