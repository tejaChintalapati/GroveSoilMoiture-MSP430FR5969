/*
 *  soilMoisture_main.c
 *	Created on: Jan 27, 2016
 *  Author: Teja Chintalapati
 *	Contact: teja.chintalapati@gmail.com
 *	Description: This program will read soil moisture reading from soil moisture Sensor once every 8 seconds
 *	Modules used: TimerA, ADC
 *
 */

/******************************************************************************
 * INCLUDES
 */

#include "mainApp.h"

/******************************************************************************
 * GLOBAL VARIABLES
 */
uint16_t ADCValue;

/******************************************************************************
 * MAIN
 */

void main(void)
{
	boardInitialisation();

	while(1)
	{
		ADCValue = getSoilMoisture();
		__low_power_mode_3();																//LPM3, TimerA ISR wake MCU after 8 seconds
	}
}
