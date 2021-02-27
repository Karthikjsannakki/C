/*
*******************************************************************
Author Name: Karthik J
Date: 22/02/2021
Description: Given the number from 1 to 365, WAP to find which day 
of the year
Sample execution: -
Test Case 1:
./day_of_the_year
Enter the value of 'n' : 9
Choose First Day :
1. Sunday
2. Monday
3. Tuesday
4. Wednesday
5. Thursday
6. Friday
7. Saturday
Enter the option to set the first day : 2
The 9 th day is Tuesday
Do you want to continue(y/n): y
Enter the value of 'n' : 9
Enter the option to set the first day : 3
The 9 th day is Wednesday
Enter the value of 'n' : 9
Enter the option to set the first day : 8
Invalid input
*******************************************************************
*/
#include<stdio.h>	/*Header file*/


int main()	/* Main function*/
{
		int nth_day,first_day,Day;	/* Declarations*/
		char ch;
		do 
		{
				printf("Enter the nth Day: ");
				scanf("%d", &nth_day);	/*n value will be stored in nth_day*/

				if ( nth_day > 0 && nth_day < 366 )	/*limitation condition*/
				{
						/*Options will be displayed to choose the first day*/
						printf("\nChoose the first day:\n1. Sunday\n2. Monday\n3. Tuesday\n4. Wednesday\n5. Thursday\n6. Friday\n7. Saturday\n");	

						printf("\nEnter the Option to set the first day: ");
						scanf("%d",&first_day); /*option will be stored in first_day*/

						if ( first_day < 8 )	/*To validate the input because 1week = 7 days*/
						{
								/*Main logic*/
								Day=((first_day + nth_day) % 7 ) - 1 ;

								/*Cases will switched based on output of logic i.e Day*/
								switch(Day)
								{
										case 1: printf("\nThe %dth day is Sunday\n", nth_day);
												break;
										case 2: printf("\nThe %dth day is Monday\n", nth_day);
												break;
										case 3: printf("\nThe %dth day is Tuesday\n", nth_day);
												break;
										case 4: printf("\nThe %dth day is Wednesday\n", nth_day);
												break;
										case 5: printf("\nThe %dth day is Thursday\n", nth_day);
												break;
										case 6: printf("\nThe %dth day is Friday\n", nth_day);
												break;
										case 7: printf("\nThe %dth day is Saturday\n", nth_day);
												break;
										case 0: printf("\nThe %dth day is Saturday\n", nth_day);
												break;
										case -1: printf("\nThe %dth day is Friday\n", nth_day);
												break;
								}
						}
						else /*if first day is > 7*/
						{
								printf("\nInvalid input\n");
						}
				}
				else /*if nth day is < 365 and > 0 */
				{
						printf("\nInvalid input\n");
				}

				/*will prompt the user to continue...*/
				printf("\nDo you want to Continue(y/n):");
				scanf(" %c", &ch);

		}while( ch == 'y' || ch == 'Y' );
}
