/*
 *  soilMoisture.c
 *
 *  Created on: Feb 05, 2016
 *  Author: Teja Chintalapati
 *	Contact: teja.chintalapati@gmail.com
 *	Phone: +91-8792-355-512
 *	Description: Contains code to read data from soil moisture sensor
 *
 */

/******************************************************************************
 * INCLUDES
 */

#include "mainApp.h"

/******************************************************************************
 * FUNCTION DEFINITIONS
 */

uint16_t getSoilMoisture(void)
{
	ADC12_B_startConversion(ADC12_B_BASE, ADCSTARTMEMORY, ADC12_B_SINGLECHANNEL);

	__low_power_mode_3();   											// LPM3, ADC12_B_ISR will force exit

	return ADC12_B_getResults(ADC12_B_BASE, ADCMEMORY);
}
