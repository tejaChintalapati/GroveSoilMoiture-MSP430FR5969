/*
 * mainApp.h
 *
 * Created on: Feb 05, 2016
 * Author: Teja Chintalapati
 * Phone: +91-8792-355-512
 * Contact: teja.chintalapati@gmail.com
 *
 */

#ifndef SOURCE_MAINAPP_H_
#define SOURCE_MAINAPP_H_

/******************************************************************************
 * INCLUDES
 */

#include <driverlib.h>
#include "ADCInitialisation.h"
#include "clockInitialisation.h"
#include "pinInitialisation.h"
#include "portInitialisation.h"
#include "timerInitialisation.h"
#include "soilMoisture.h"

/******************************************************************************
 * DEFINITIONS
 */

//Used in soilMoisture.c
#define ADCSTARTMEMORY														   ADC12_B_START_AT_ADC12MEM12
//Used in pinInitialisation.c
#define ADCPORT																   GPIO_PORT_P3 //Port on which ADC pin is attached
#define ADCPIN																   GPIO_PIN0    //Pin to which LM35 is attached
//Used in ADCInitialisation.c
#define ADCMEMORY															   ADC12_B_MEMORY_12
#define ADCINPUTSOURCESELECT												   ADC12_B_INPUT_A12
#define ADCIFG																   ADC12_B_IFG12
#define ADCIE																   ADC12_B_IE12

//TODO: If you change above values, please make appropriate changes in ADC ISR

//Used in clockInitiaisation.c
#define LF_CRYSTAL_FREQUENCY_IN_HZ     										   32768
#define HF_CRYSTAL_FREQUENCY_IN_HZ											   0            // FR5969 Launchpad does not have 16MHz crystal

//Used in portInitialisation.c
#define allPins																   GPIO_PIN0 + GPIO_PIN1 + GPIO_PIN2 + GPIO_PIN3 + GPIO_PIN4 + GPIO_PIN5 + GPIO_PIN6 + GPIO_PIN7

/******************************************************************************
 * FUNCTION DECLARATION
 */

void boardInitialisation(void);

#endif /* SOURCE_MAINAPP_H_ */
