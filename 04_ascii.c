/*
*******************************************************************
Author Name: Karthik J
Date: 19/02/2021
Description: WAP To Print all ascii characters
Sample execution: -
Dec  Hex  Oct     Char
000  000  000   Non-Printable
001  001  001   Non-Printable
002  002  002   Non-Printable
003  003  003   Non-Printable
004  004  004   Non-Printable
.
.
.
*******************************************************************
*/
#include<stdio.h>	/*Header file */

int main()	/* Main function */
{
		printf("Dec  Hex  Oct     Char\n"); /* prints header */

		for(int i=0; i<=127; i++)	/* iterates from 0 to 127 */ 
		{
				if ( i <= 32)	/*for non-printable character */
				{
						printf("%03d  %03x  %03o   Non-Printable\n", i,i,i);
				}
				else	/*for printable character */
				{
						printf("%03d  %03x  %03o   %c\n", i,i,i,i);
				}
		}
}

