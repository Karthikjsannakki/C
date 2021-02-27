/*
*******************************************************************
Author Name: Karthik J
Date: 15/02/2021
Description: WAP to check whether a given number is odd or even and 
its signedness
Sample execution: -
./even_odd
Enter the value of 'n' : -4
-4 is -ve even number
Do you want to continue(y/n): y
Enter the value of 'n' : 4
4 is +ve even number
Do you want to continue(y/n): y
Enter the value of 'n' : 2000000
Number out of range
Do you want to continue(y/n): n
*******************************************************************
*/

#include<stdio.h> /* Header file */

/* main function */
int main()
{
		
		int num;	/* Declaration */
		char ch;
		do{				
				
				printf ("Enter the value of 'n' : ");	/* prints statement */
				/*reads input & stores it to num */
				scanf ("%d", &num);
				
				/* Condition to restrict num > 2^20 */
				if ( num > 1048576 )
				{
						printf("Number is out of range\n");
				}
				/* Condition to check Positive even number */
				else if ( num%2 == 0 && num > 0 )
				{
						printf("%d is a Positive Even number\n", num);
				}
				/* Condition to check Negative even number */
				else if ( num%2 == 0 && num < 0 )
				{
						printf("%d is a Negative Even number\n", num);
				}
				/* Condition to check Negative odd number */
				else if ( num%2 != 0 && num < 0 )
				{
						printf("%d is a Negative Odd number\n", num);
				}
				/* Condition to check Positive odd number */
				else if ( num%2 != 0 && num > 0 )
				{
						printf("%d is a Positive Odd number\n", num);
				}
				/* If input is equal to 0 */
				else
				{
						printf("%d is a either Positive nor Negative Even/Odd number\n", num);
				}
				/* Will prompt the user */
				printf("\nDo you want to continue(y/n):");
				scanf(" %c", &ch);

		}while( ch == 'y' || ch == 'Y');


}

