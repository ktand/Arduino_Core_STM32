/*
  Copyright (c) 2011 Arduino.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#ifndef _VARIANT_ARDUINO_STM32_
#define _VARIANT_ARDUINO_STM32_

/*----------------------------------------------------------------------------
 *        Headers
 *----------------------------------------------------------------------------*/
#include "PeripheralPins.h"

#ifdef __cplusplus
extern "C"{
#endif // __cplusplus

/*----------------------------------------------------------------------------
 *        Pins
 *----------------------------------------------------------------------------*/
extern const PinName digitalPin[];

enum {
  PA0,  //D0
  PA1,  //D1
  PA2,  //D2
  PA3,  //D3
  PA4,  //D4
  PA5,  //D5
  PA6,  //D6
  PA7,  //D7
  PA8,  //D8
  PA9,  //D9
  PA10, //D10
  PA11, //D11
  PA12, //D12
  PA13, //D13
  PA14, //D14
  PA15, //D15
  PB0,  //D16
  PB1, //D17
  PB2, //D18
  PB3, //D19
  PB4,  //D20
  PB5, //D21
  PB6,  //D22
  PB7,  //D23
  PB8,  //D24
  PB9,  //D25
  PB10,  //D26
  PB11,  //D27
  PB12,  //D28
  PB13,  //D29
  PB14,  //D30
  PB15,  //D31
  PC0,  //D32
  PC1, //D33
  PC2, //D34
  PC3, //D35
  PC4,  //D36
  PC5,  //D37
  PC6,  //D38
  PC7,  //D39
  PC8,  //D40
  PC9,  //D41
  PC10,  //D42
  PC11,  //D43
  PC12,  //D44
  PC13,  //D45
  PC14,  //D46
  PC15,  //D47
  PD0,  //D48
  PD1, //D49
  PD2, //D50
  PD3, //D51
  PD4, //D52
  PD5, //D53
  PD6, //D54
  PD7,  //D55
  PD8, //D56
  PD9, //D57
  PD10, //D58
  PD11,  //D59
  PD12, //D60
  PD13, //D61
  PD14,  //D62
  PD15,  //D63
  PE0,  //D64
  PE1,  //D65
  PE2,  //D66
  PE3,  //D67
  PE4,  //D68
  PE5,  //D69
  PE6,  //D70
  PE7,  //D71
  PE8,  //D72
  PE9,  //D73
  PE10, //D74
  PE11, //D75
  PE12, //D76
  PE13, //D77
  PE14, //D78
  PE15, //D79
//Duplicated to have A0-A2 as F407 do not have Uno like connector
// and to be aligned with PinMap_ADC
  PC0_2, //D80/A0 = D32
  PC1_2, //D81/A1 = D33
  PC2_2, //D82/A2 = D34
  PEND
};

// This must be a literal with the same value as PEND
#define NUM_DIGITAL_PINS        83
// This must be a literal with a value less than or equal to to MAX_ANALOG_INPUTS
#define NUM_ANALOG_INPUTS       3
#define NUM_ANALOG_FIRST        80

// On-board LED pin number
#define LED_BUILTIN             PB7
#define LED_HEARTBEAT           LED_BUILTIN

// On-board user button
// #define USER_BTN                2

// SPI Definitions
#define PIN_SPI_SS2             PE7
#define PIN_SPI_MOSI            PA7
#define PIN_SPI_MISO            PA6
#define PIN_SPI_SCK             PA5

// I2C Definitions
#define PIN_WIRE_SDA            PB9
#define PIN_WIRE_SCL            PB8

// Timer Definitions
// Do not use timer used by PWM pin. See PinMap_PWM.
#define TIMER_TONE              TIM6
#define TIMER_SERVO             TIM7

// UART Definitions
#define SERIAL_UART_INSTANCE    4 //Connected to ST-Link

// Default pin used for 'Serial' instance (ex: ST-Link)
// Mandatory for Firmata
#define PIN_SERIAL_RX           PC11
#define PIN_SERIAL_TX           PC10

#ifdef __cplusplus
} // extern "C"
#endif
/*----------------------------------------------------------------------------
 *        Arduino objects - C++ only
 *----------------------------------------------------------------------------*/

#ifdef __cplusplus
// These serial port names are intended to allow libraries and architecture-neutral
// sketches to automatically default to the correct port name for a particular type
// of use.  For example, a GPS module would normally connect to SERIAL_PORT_HARDWARE_OPEN,
// the first hardware serial port whose RX/TX pins are not dedicated to another use.
//
// SERIAL_PORT_MONITOR        Port which normally prints to the Arduino Serial Monitor
//
// SERIAL_PORT_USBVIRTUAL     Port which is USB virtual serial
//
// SERIAL_PORT_LINUXBRIDGE    Port which connects to a Linux system via Bridge library
//
// SERIAL_PORT_HARDWARE       Hardware serial port, physical RX & TX pins.
//
// SERIAL_PORT_HARDWARE_OPEN  Hardware serial ports which are open for use.  Their RX & TX
//                            pins are NOT connected to anything by default.
#define SERIAL_PORT_MONITOR     Serial // Require connections for ST-LINK VCP on U2 pin 12 and 13.
                                   // See UM �6.1.3 ST-LINK/V2-A VCP configuration)
#define SERIAL_PORT_HARDWARE_OPEN  Serial
#endif

#endif /* _VARIANT_ARDUINO_STM32_ */
