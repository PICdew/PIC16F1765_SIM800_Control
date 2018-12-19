/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.65.2
        Device            :  PIC16F1765
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.45
        MPLAB 	          :  MPLAB X 4.15	
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

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set ERROR_PIN aliases
#define ERROR_PIN_TRIS                 TRISCbits.TRISC0
#define ERROR_PIN_LAT                  LATCbits.LATC0
#define ERROR_PIN_PORT                 PORTCbits.RC0
#define ERROR_PIN_WPU                  WPUCbits.WPUC0
#define ERROR_PIN_OD                   ODCONCbits.ODC0
#define ERROR_PIN_ANS                  ANSELCbits.ANSC0
#define ERROR_PIN_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define ERROR_PIN_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define ERROR_PIN_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define ERROR_PIN_GetValue()           PORTCbits.RC0
#define ERROR_PIN_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define ERROR_PIN_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define ERROR_PIN_SetPullup()          do { WPUCbits.WPUC0 = 1; } while(0)
#define ERROR_PIN_ResetPullup()        do { WPUCbits.WPUC0 = 0; } while(0)
#define ERROR_PIN_SetPushPull()        do { ODCONCbits.ODC0 = 0; } while(0)
#define ERROR_PIN_SetOpenDrain()       do { ODCONCbits.ODC0 = 1; } while(0)
#define ERROR_PIN_SetAnalogMode()      do { ANSELCbits.ANSC0 = 1; } while(0)
#define ERROR_PIN_SetDigitalMode()     do { ANSELCbits.ANSC0 = 0; } while(0)

// get/set LED_PIN aliases
#define LED_PIN_TRIS                 TRISCbits.TRISC2
#define LED_PIN_LAT                  LATCbits.LATC2
#define LED_PIN_PORT                 PORTCbits.RC2
#define LED_PIN_WPU                  WPUCbits.WPUC2
#define LED_PIN_OD                   ODCONCbits.ODC2
#define LED_PIN_ANS                  ANSELCbits.ANSC2
#define LED_PIN_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define LED_PIN_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define LED_PIN_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define LED_PIN_GetValue()           PORTCbits.RC2
#define LED_PIN_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define LED_PIN_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define LED_PIN_SetPullup()          do { WPUCbits.WPUC2 = 1; } while(0)
#define LED_PIN_ResetPullup()        do { WPUCbits.WPUC2 = 0; } while(0)
#define LED_PIN_SetPushPull()        do { ODCONCbits.ODC2 = 0; } while(0)
#define LED_PIN_SetOpenDrain()       do { ODCONCbits.ODC2 = 1; } while(0)
#define LED_PIN_SetAnalogMode()      do { ANSELCbits.ANSC2 = 1; } while(0)
#define LED_PIN_SetDigitalMode()     do { ANSELCbits.ANSC2 = 0; } while(0)

// get/set TX_PIN aliases
#define TX_PIN_TRIS                 TRISCbits.TRISC4
#define TX_PIN_LAT                  LATCbits.LATC4
#define TX_PIN_PORT                 PORTCbits.RC4
#define TX_PIN_WPU                  WPUCbits.WPUC4
#define TX_PIN_OD                   ODCONCbits.ODC4
#define TX_PIN_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define TX_PIN_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define TX_PIN_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define TX_PIN_GetValue()           PORTCbits.RC4
#define TX_PIN_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define TX_PIN_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define TX_PIN_SetPullup()          do { WPUCbits.WPUC4 = 1; } while(0)
#define TX_PIN_ResetPullup()        do { WPUCbits.WPUC4 = 0; } while(0)
#define TX_PIN_SetPushPull()        do { ODCONCbits.ODC4 = 0; } while(0)
#define TX_PIN_SetOpenDrain()       do { ODCONCbits.ODC4 = 1; } while(0)

// get/set RX_PIN aliases
#define RX_PIN_TRIS                 TRISCbits.TRISC5
#define RX_PIN_LAT                  LATCbits.LATC5
#define RX_PIN_PORT                 PORTCbits.RC5
#define RX_PIN_WPU                  WPUCbits.WPUC5
#define RX_PIN_OD                   ODCONCbits.ODC5
#define RX_PIN_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define RX_PIN_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define RX_PIN_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define RX_PIN_GetValue()           PORTCbits.RC5
#define RX_PIN_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define RX_PIN_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define RX_PIN_SetPullup()          do { WPUCbits.WPUC5 = 1; } while(0)
#define RX_PIN_ResetPullup()        do { WPUCbits.WPUC5 = 0; } while(0)
#define RX_PIN_SetPushPull()        do { ODCONCbits.ODC5 = 0; } while(0)
#define RX_PIN_SetOpenDrain()       do { ODCONCbits.ODC5 = 1; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/