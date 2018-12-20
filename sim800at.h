#define MAX_SIZE 64

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
int SendAT(char *response);

/*
 * Summary:
 *      Sends the AT+CBC command and collates response into parameter
 * 
 * Description:
 *      Expect response
 *          AT+CBC\r\n  <-- just \r\n if ATE0 set
 *          +CBC: 0,100,4444\r\n
 *          \r\n
 *          OK\r\n
 * Returns:
 *      Number of characters collected into response buffer.
 *      reponse parameter modified as side-effect
 */
int SendCBC(char *response);

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
int SendCMGF(char *response);

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
int SendCSCS(char *response);

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
int SendTestMessage(char *response, char *message);

int SendBtn1Message(char *response);

int SendBtn2Message(char *response);

int SendBtn3Message(char *response);
