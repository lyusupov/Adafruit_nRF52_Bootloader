/*
 * The MIT License (MIT)
 *
 * Copyright (c) 2020 Yihui Xiong for Makerdiary
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef _MESH_TRACKER_X1_H
#define _MESH_TRACKER_X1_H

/*------------------------------------------------------------------*/
/* LED
 *------------------------------------------------------------------*/
#define LEDS_NUMBER     0
#define LED_RED_PIN     PINNUM(0, 3) // Red
#define LED_GREEN_PIN   PINNUM(0, 24) // Green
#define LED_BLUE_PIN    PINNUM(0, 28) // Blue
#define LED_STATE_ON    1

/*------------------------------------------------------------------*/
/* BUTTON
 *------------------------------------------------------------------*/
// #define BUTTON_DFU     PINNUM(0, 6)  // Primary Button
// #define BUTTON_DFU_OTA PINNUM(0, 18) // unusable: RESET
// #define BUTTON_PULL    NRF_GPIO_PIN_PULLDOWN

//--------------------------------------------------------------------+
// BLE OTA
//--------------------------------------------------------------------+
#define BLEDIS_MANUFACTURER "Seeed Studio"
#define BLEDIS_MODEL        "MeshTracker-X1"

//--------------------------------------------------------------------+
// USB
//--------------------------------------------------------------------+
#define USB_DESC_VID          0x2886
#define USB_DESC_UF2_PID      0x0057
#define USB_DESC_CDC_ONLY_PID 0x0057

//--------------------------------------------------------------------+
// UF2
//--------------------------------------------------------------------+
#define UF2_PRODUCT_NAME "Seeed MeshTracker-X1 for Meshtastic"
#define UF2_VOLUME_LABEL "X1"
#define UF2_BOARD_ID     "nRF52840-MeshTracker-X1-v1"
#define UF2_INDEX_URL    "https://www.seeedstudio.com/SenseCAP-MeshTracker-X1-for-Meshtastic-p-6793.html"


#endif /* _MESH_TRACKER_X1_H */
