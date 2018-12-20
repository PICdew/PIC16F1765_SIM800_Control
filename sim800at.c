/*
 * File:   sim800at.c
 * Author: plj
 *
 * Created on 20 December 2018, 10:12
 */

#include <xc.h>
#include <string.h>
#include "sim800at.h"
#include "mcc_generated_files/mcc.h"

/*
 * Summary:
 *      Sends the AT command and collates response into parameter
 * 
 * Description:
 *      Expect response
 *          AT\r\n  <-- just \r\n if ATE0 set
 *          OK\r\n
 * Returns:
 *      Number of characters collected into response buffer.
 *      reponse parameter modified as side-effect
 */
int SendAT(char *response)
{
    int totalRead = 0;
    int charsRead = 0;
    char line[MAX_SIZE] = "";
    
    EUSART_Write_String("AT\r\n");                      // send AT\r\n        
    charsRead = EUSART_Read_String(line, MAX_SIZE);     // wait for AT\r\n
    strncpy(response, line, charsRead);                 // copy line to response 
    totalRead += charsRead;                             // increment read count
    charsRead = EUSART_Read_String(line, MAX_SIZE);     // wait for OK\r\n
    strncat(response,line,charsRead);                   // copy line to response
    totalRead += charsRead;                             // increment read count
    
    return totalRead;
}

/*
 * Summary:
 *      Sends the AT+CMGF=1 command and collates response into parameter
 * 
 * Description:
 *      Expect response
 *          AT+CMGF=1\r\n  <-- just \r\n if ATE0 set
 *          OK\r\n
 * Returns:
 *      Number of characters collected into response buffer.
 *      reponse parameter modified as side-effect
 */
int SendCMGF(char *response)
{
    int totalRead = 0;
    int charsRead = 0;
    char line[MAX_SIZE] = "";
    
    EUSART_Write_String("AT+CMGF=1\r\n");               // send AT+CMGF=1\r\n        
    charsRead = EUSART_Read_String(line, MAX_SIZE);     // wait AT+CMGF=1\r\n
    strncpy(response, line, charsRead);                 // copy to response 
    totalRead += charsRead;                             // increment read count
    charsRead = EUSART_Read_String(line, MAX_SIZE);     // wait OK\r\n
    strncat(response,line,charsRead);                   // copy to response
    totalRead += charsRead;                             // increment read count
    
    return totalRead;
}

/*
 * Summary:
 *      Sends the AT+CSCS="GSM" command and collates response into parameter
 * 
 * Description:
 *      Expect response
 *          AT+CSCS="GSM"\r\n  <-- just \r\n if ATE0 set
 *          OK\r\n
 * Returns:
 *      Number of characters collected into response buffer.
 *      reponse parameter modified as side-effect
 */
int SendCSCS(char *response)
{
    int totalRead = 0;
    int charsRead = 0;
    char line[MAX_SIZE] = "";
    
    EUSART_Write_String("AT+CSCS=\"GSM\"\r\n");         // AT+CSCS="GSM"\r\n        
    charsRead = EUSART_Read_String(line, MAX_SIZE);     // AT+CSCS="GSM"\r\n
    strncpy(response, line, charsRead);                 // copy to response 
    totalRead += charsRead;                             // increment read count
    charsRead = EUSART_Read_String(line, MAX_SIZE);     // wait OK\r\n
    strncat(response,line,charsRead);                   // copy to response
    totalRead += charsRead;                             // increment read count
    
    return totalRead;
}

/*
 * Summary:
 *      Sends the AT+CMGS="<number>\r\n<message>Ctrl-Z\r\n" command and 
 *      collates response into parameter
 * 
 * Description:
 *      Expect response
 *          AT+CMGS\r\n  <-- just \r\n if ATE0 set
 *          +CMGS:1\r\n
 *          OK\r\n
 * Returns:
 *      Number of characters collected into response buffer.
 *      reponse parameter modified as side-effect
 */
int SendTestMessage(char *response, char *message)
{
    int totalRead = 0;
    int charsRead = 0;
    char line[MAX_SIZE] = "";
    
    EUSART_Write_String("AT+CMGS=\"2936\"\r\n");    
    __delay_ms(500);
    charsRead = EUSART_Read_String(line, MAX_SIZE);     
    strncpy(response, line, charsRead);                  
    totalRead += charsRead;
    EUSART_Write_String("COOKIES\x1A");
    charsRead = EUSART_Read_String(line, MAX_SIZE);     
    strncpy(response, line, charsRead);                  
    totalRead += charsRead;
    charsRead = EUSART_Read_String(line, MAX_SIZE);     
    strncpy(response, line, charsRead);                  
    totalRead += charsRead;
    
    return totalRead;
}
