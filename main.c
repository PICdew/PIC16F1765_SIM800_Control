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
#include "sim800at.h"

/*
                         Main application
 */

void CookiesTest(char *responseArray, int charsRead);
void Button1Message(char *responseArray, int charsRead, char *line);
void Button2Message(char *responseArray, int charsRead, char *line);
void Button3Message(char *responseArray, int charsRead, char *line);
void FirstTimeSync(void);

void FlashPin() {
    ACTIVE_PIN_SetHigh();
    __delay_ms(200);
    ACTIVE_PIN_SetLow();
    __delay_ms(200);
}

void WarningFlash(void);

void main(void) {
    char responseArray[MAX_SIZE] = "";
    char lineArray[MAX_SIZE] = "";
    int charsRead = 0;

    // initialize the device
    SYSTEM_Initialize();

    while (1) {
        if (BTN1_PIN_GetValue() == 1) {
            //WarningFlash();
            ACTIVE_PIN_SetHigh();
            Button1Message(responseArray, charsRead, lineArray);
            
            //FirstTimeSync();
            
            //EUSART_Write_String("AT+IPR?\r\n");
            //charsRead = EUSART_Read_String(responseArray, MAX_SIZE);
            //charsRead = EUSART_Read_String(responseArray, MAX_SIZE);
            //charsRead = 0;
        }

        if (BTN2_PIN_GetValue() == 1) {
            //WarningFlash();
            //WarningFlash();
            ACTIVE_PIN_SetHigh();
            Button2Message(responseArray, charsRead, lineArray);
        }

        if (BTN3_PIN_GetValue() == 1) {
            //WarningFlash();
            //WarningFlash();
            //WarningFlash();
            ACTIVE_PIN_SetHigh();
            Button3Message(responseArray, charsRead, lineArray);
        }

        ACTIVE_PIN_SetLow();
    }
}

void WarningFlash() {
    FlashPin();
    FlashPin();
    FlashPin();
}

void PreMessageSetup(char *responseArray, int charsRead) {
    char intArr[8] = "";
    charsRead = SendAT(intArr);
    
    if (strstr(intArr, "OK\r\n") != NULL) {
        __delay_ms(200);
    } else {
        WarningFlash();
    }

    memset(intArr, 0, sizeof (char) * MAX_SIZE);

    charsRead = SendCMGF(intArr);

    if (strstr(intArr, "OK\r\n") != NULL) {
        __delay_ms(200);
    } else {
        WarningFlash();
    }

    memset(intArr, 0, sizeof (char) * MAX_SIZE);

    charsRead = SendCSCS(intArr);

    if (strstr(intArr, "OK\r\n") != NULL) {
        __delay_ms(200);
    } else {
        WarningFlash();
    }

    memset(intArr, 0, sizeof (char) * MAX_SIZE);
}

void Button1Message(char *responseArray, int charsRead, char *line) {
    PreMessageSetup(responseArray, charsRead);

    char intArr[32] = "";
    
    charsRead = SendBtn1Message(intArr);

    if (strstr(intArr, "MGS") != NULL) {
    } else {
        WarningFlash();
    }

    memset(responseArray, 0, sizeof (char) * MAX_SIZE);
}

void Button2Message(char *responseArray, int charsRead, char *line) {
    PreMessageSetup(responseArray, charsRead);

    charsRead = SendBtn2Message(responseArray);

    if (strstr(responseArray, "MGS") != NULL) {
    } else {
        WarningFlash();
    }

    memset(responseArray, 0, sizeof (char) * MAX_SIZE);
}

void Button3Message(char *responseArray, int charsRead, char *line) {
    PreMessageSetup(responseArray, charsRead);

    charsRead = SendBtn3Message(responseArray);

    if (strstr(responseArray, "MGS") != NULL) {
    } else {
        WarningFlash();
    }

    memset(responseArray, 0, sizeof (char) * MAX_SIZE);
}

//void CookiesTest(char *responseArray, int charsRead) {
//    PreMessageSetup(responseArray, charsRead);
//
//    charsRead = SendTestMessage(responseArray, "COOKIES\x1A");
//
//    if (strcmp(responseArray, "\r\n") == 0) {
//    } else {
//        WarningFlash();
//    }
//
//    memset(responseArray, 0, sizeof (char) * MAX_SIZE);
//}

//void FirstTimeSync() {        
//    char ch1 = 4;
//    char ch2 = 4;
//    char ch3 = 4;
//    char ch4 = 4;
//
//    do {
//        EUSART_Write_String("AT\n");
//        ch1 = EUSART_Read();
//        ch2 = EUSART_Read();
//    } while (ch1 != 'O' && ch2 != 'K');
//
//    while (!EUSART_is_rx_ready())
//        continue;
//    ch3 = EUSART_Read();
//
//    while (!EUSART_is_rx_ready())
//        continue;
//    ch4 = EUSART_Read();
//
//    ch1 = 4;
//    ch2 = 4;
//    ch3 = 4;
//    ch4 = 4;
//
//    do {
//        EUSART_Write_String("AT+IPR=9600\n");
//        ch1 = EUSART_Read();
//        ch2 = EUSART_Read();
//    } while (ch1 != 'O' && ch2 != 'K');
//
//    while (!EUSART_is_rx_ready())
//        continue;
//    ch3 = EUSART_Read();
//
//    while (!EUSART_is_rx_ready())
//        continue;
//    ch4 = EUSART_Read();
//
//    ch1 = 4;
//    ch2 = 4;
//    ch3 = 4;
//    ch4 = 4;
//
//    do {
//        EUSART_Write_String("ATE0&W\n");
//        ch1 = EUSART_Read();
//        ch2 = EUSART_Read();
//    } while (ch1 != 'O' && ch2 != 'K');
//
//    while (!EUSART_is_rx_ready())
//        continue;
//    ch3 = EUSART_Read();
//
//    while (!EUSART_is_rx_ready())
//        continue;
//    ch4 = EUSART_Read();
//
//    ch1 = 4;
//    ch2 = 4;
//    ch3 = 4;
//    ch4 = 4;
//    
//    do {
//        EUSART_Write_String("AT&W\n");
//        ch1 = EUSART_Read();
//        ch2 = EUSART_Read();
//    } while (ch1 != 'O' && ch2 != 'K');
//
//    while (!EUSART_is_rx_ready())
//        continue;
//    ch3 = EUSART_Read();
//
//    while (!EUSART_is_rx_ready())
//        continue;
//    ch4 = EUSART_Read();
//
//    ch1 = 4;
//    ch2 = 4;
//    ch3 = 4;
//    ch4 = 4;
//}

/**
 End of File
 */
