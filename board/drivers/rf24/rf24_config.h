/*
 * bsp/board/drivers/rf24/rf24_config.h -- rf24-qmsi
 *
 * Copyright (C) 2011 J. Coliz <maniacbug@ymail.com>
 * Portions Copyright (C) TMRh20
 *
 * Intel QMSI port: Copyright (C) 2016 Sergey Kiselev <skiselev@gmail.com>
 * Portions Copyright (C) 2016 Gerad Munsch <gmunsch@unforgivendevelopment.com>
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without
 * restriction, including without limitation the rights to use, copy,
 * modify, merge, publish, distribute, sublicense, and/or sell copies
 * of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
 * HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 * WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */

#ifndef __RF24_CONFIG_H__
#define __RF24_CONFIG_H__

#include <qm_common.h>
#include <qm_gpio.h>
#include <qm_spi.h>
#include <qm_pinmux.h>
#include <clk.h>
#include <string.h>

/**
 * Intel Quark D2000 / QMSI specific defines
 */
#define RF24_SPI_BUS		QM_SPI_MST_0
#define RF24_SPI_SS			QM_SPI_SS_0
#define RF24_SPI_CLOCK_DIV	(32)	// 1 MHz using 32 MHz system clock

/**
 * PIN DEFINITIONS:
 *
 * CE	- F9 / Arduino header D8
 * CSN	- F0 / Arduino header D10
 * MOSI - Arduino header D11
 * MISO - Arduino header D12
 * SCK	- Arduino header D13
 */
#define RF24_GPIO_CSN	0	// Arduino header 10
#define RF24_GPIO_CE	9	// Arduino header 8

/**
 * RF24 library configuration
 */
#define RF24_FAILURE_HANDLING
//#define RF24_SERIAL_DEBUG
#define RF24_MINIMAL
//#define RF24_SPI_MULTIBYTE

#define rf24_min(a,b) (a<b?a:b)

#endif // __RF24_CONFIG_H__