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

// get/set ACTIVE_PIN aliases
#define ACTIVE_PIN_TRIS                 TRISAbits.TRISA4
#define ACTIVE_PIN_LAT                  LATAbits.LATA4
#define ACTIVE_PIN_PORT                 PORTAbits.RA4
#define ACTIVE_PIN_WPU                  WPUAbits.WPUA4
#define ACTIVE_PIN_OD                   ODCONAbits.ODA4
#define ACTIVE_PIN_ANS                  ANSELAbits.ANSA4
#define ACTIVE_PIN_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define ACTIVE_PIN_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define ACTIVE_PIN_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define ACTIVE_PIN_GetValue()           PORTAbits.RA4
#define ACTIVE_PIN_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define ACTIVE_PIN_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define ACTIVE_PIN_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define ACTIVE_PIN_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define ACTIVE_PIN_SetPushPull()        do { ODCONAbits.ODA4 = 0; } while(0)
#define ACTIVE_PIN_SetOpenDrain()       do { ODCONAbits.ODA4 = 1; } while(0)
#define ACTIVE_PIN_SetAnalogMode()      do { ANSELAbits.ANSA4 = 1; } while(0)
#define ACTIVE_PIN_SetDigitalMode()     do { ANSELAbits.ANSA4 = 0; } while(0)

// get/set BTN3_PIN aliases
#define BTN3_PIN_TRIS                 TRISCbits.TRISC1
#define BTN3_PIN_LAT                  LATCbits.LATC1
#define BTN3_PIN_PORT                 PORTCbits.RC1
#define BTN3_PIN_WPU                  WPUCbits.WPUC1
#define BTN3_PIN_OD                   ODCONCbits.ODC1
#define BTN3_PIN_ANS                  ANSELCbits.ANSC1
#define BTN3_PIN_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define BTN3_PIN_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define BTN3_PIN_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define BTN3_PIN_GetValue()           PORTCbits.RC1
#define BTN3_PIN_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define BTN3_PIN_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define BTN3_PIN_SetPullup()          do { WPUCbits.WPUC1 = 1; } while(0)
#define BTN3_PIN_ResetPullup()        do { WPUCbits.WPUC1 = 0; } while(0)
#define BTN3_PIN_SetPushPull()        do { ODCONCbits.ODC1 = 0; } while(0)
#define BTN3_PIN_SetOpenDrain()       do { ODCONCbits.ODC1 = 1; } while(0)
#define BTN3_PIN_SetAnalogMode()      do { ANSELCbits.ANSC1 = 1; } while(0)
#define BTN3_PIN_SetDigitalMode()     do { ANSELCbits.ANSC1 = 0; } while(0)

// get/set BTN2_PIN aliases
#define BTN2_PIN_TRIS                 TRISCbits.TRISC2
#define BTN2_PIN_LAT                  LATCbits.LATC2
#define BTN2_PIN_PORT                 PORTCbits.RC2
#define BTN2_PIN_WPU                  WPUCbits.WPUC2
#define BTN2_PIN_OD                   ODCONCbits.ODC2
#define BTN2_PIN_ANS                  ANSELCbits.ANSC2
#define BTN2_PIN_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define BTN2_PIN_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define BTN2_PIN_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define BTN2_PIN_GetValue()           PORTCbits.RC2
#define BTN2_PIN_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define BTN2_PIN_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define BTN2_PIN_SetPullup()          do { WPUCbits.WPUC2 = 1; } while(0)
#define BTN2_PIN_ResetPullup()        do { WPUCbits.WPUC2 = 0; } while(0)
#define BTN2_PIN_SetPushPull()        do { ODCONCbits.ODC2 = 0; } while(0)
#define BTN2_PIN_SetOpenDrain()       do { ODCONCbits.ODC2 = 1; } while(0)
#define BTN2_PIN_SetAnalogMode()      do { ANSELCbits.ANSC2 = 1; } while(0)
#define BTN2_PIN_SetDigitalMode()     do { ANSELCbits.ANSC2 = 0; } while(0)

// get/set BTN1_PIN aliases
#define BTN1_PIN_TRIS                 TRISCbits.TRISC3
#define BTN1_PIN_LAT                  LATCbits.LATC3
#define BTN1_PIN_PORT                 PORTCbits.RC3
#define BTN1_PIN_WPU                  WPUCbits.WPUC3
#define BTN1_PIN_OD                   ODCONCbits.ODC3
#define BTN1_PIN_ANS                  ANSELCbits.ANSC3
#define BTN1_PIN_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define BTN1_PIN_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define BTN1_PIN_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define BTN1_PIN_GetValue()           PORTCbits.RC3
#define BTN1_PIN_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define BTN1_PIN_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define BTN1_PIN_SetPullup()          do { WPUCbits.WPUC3 = 1; } while(0)
#define BTN1_PIN_ResetPullup()        do { WPUCbits.WPUC3 = 0; } while(0)
#define BTN1_PIN_SetPushPull()        do { ODCONCbits.ODC3 = 0; } while(0)
#define BTN1_PIN_SetOpenDrain()       do { ODCONCbits.ODC3 = 1; } while(0)
#define BTN1_PIN_SetAnalogMode()      do { ANSELCbits.ANSC3 = 1; } while(0)
#define BTN1_PIN_SetDigitalMode()     do { ANSELCbits.ANSC3 = 0; } while(0)

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