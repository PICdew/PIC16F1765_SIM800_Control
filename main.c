/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.65.2
        Device            :  PIC16F1765
        Driver Version    :  2.00
 */

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
 */

#include "mcc_generated_files/mcc.h"
#include <stdio.h>
#include <string.h>

#define MAX_SIZE 32

/*
                         Main application
 */
void main(void) {
    // initialize the device
    SYSTEM_Initialize();

    char read1[MAX_SIZE] = "";
    char read2[MAX_SIZE] = "";
    int charsRead = 0;

    //unsigned int regClear = 0;

    while (1) {
        EUSART_Write_String("AT\r\n");        
        charsRead = EUSART_Read_String(read1, MAX_SIZE);
        charsRead = EUSART_Read_String(read1, MAX_SIZE);
        
        if (strcmp(read1, "OK\r\n") == 0)
        {
            LED_PIN_SetHigh();
        } else {
            ERROR_PIN_SetHigh();
        }
        
        EUSART_Write_String("AT+CBC\r\n");
        charsRead = EUSART_Read_String(read1, MAX_SIZE);
        charsRead = EUSART_Read_String(read1, MAX_SIZE);
        charsRead = EUSART_Read_String(read2, MAX_SIZE); 
        charsRead = EUSART_Read_String(read2, MAX_SIZE);
        
        charsRead = 0;
        
//        EUSART_Write_String("ATE0&W\n");      
//        charsRead = EUSART_Read_String(read1, 16);
//        charsRead = EUSART_Read_String(read2, 16);
        
//        do {
//            EUSART_Write_String("AT\n");
//            ch1 = EUSART_Read();
//            ch2 = EUSART_Read();
//        } while (ch1 != 'O' && ch2 != 'K');
//
//        LED_PIN_SetHigh();
//
//        while (!EUSART_is_rx_ready())
//            continue;
//        ch3 = EUSART_Read();
//        
//        while (!EUSART_is_rx_ready())
//            continue;
//        ch4 = EUSART_Read();
//
//        ch1 = 4;
//        ch2 = 4;
//        ch3 = 4;
//        ch4 = 4;
//
//        do {
//            EUSART_Write_String("AT+IPR=9600\n");
//            ch1 = EUSART_Read();
//            ch2 = EUSART_Read();
//        } while (ch1 != 'O' && ch2 != 'K');
//
//        ERROR_PIN_SetHigh();
//        
//        while (!EUSART_is_rx_ready())
//            continue;
//        ch3 = EUSART_Read();
//        
//        while (!EUSART_is_rx_ready())
//            continue;
//        ch4 = EUSART_Read();
//        
//        ch1 = 4;
//        ch2 = 4;
//        ch3 = 4;
//        ch4 = 4;
//        
//        do {
//            EUSART_Write_String("AT&W\n");
//            ch1 = EUSART_Read();
//            ch2 = EUSART_Read();
//        } while (ch1 != 'O' && ch2 != 'K');
//        
//        while (!EUSART_is_rx_ready())
//            continue;
//        ch3 = EUSART_Read();
//        
//        while (!EUSART_is_rx_ready())
//            continue;
//        ch4 = EUSART_Read();
//        
//        ch1 = 4;
//        ch2 = 4;
//        ch3 = 4;
//        ch4 = 4;
    }
}

/**
 End of File
 */
