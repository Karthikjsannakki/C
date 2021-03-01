/*
*******************************************************************
Author Name: Karthik J
Date: 20/02/2021
Description: WAP to print “Hello” in X format
Sample execution: -
Test Case 1:
./x_pattern
Enter a number lines: 5
Hello       Hello
  Hello   Hello
    HelloHello
  Hello   Hello
Hello       Hello

Do you want to continue(y/n): y
Test Case 2:
./x_pattern
Enter a number lines: 32
Number out of range

Do you want to continue(y/n): n
*******************************************************************
*/
#include<stdio.h>	/*Header File*/

int main()	/*Main Function*/
{
		int row,column,num;	/*Declarations*/
		char ch;

		do	/*To prompt*/
		{
				printf("Enter number of lines: ");
				scanf("%d",&num);	/*No of rows will be stored in num*/

				printf("\n");	/*new line*/

				if ( num >= 3 && num < 32 )	/*input range*/
				{
						if ( num%2 != 0)	/*for odd conditions*/
						{
								for(row=0; row < num ;row++)	/*Iteration for rows*/
								{
										for(column=0; column < num ;column++)	/*Iteration for columns*/
										{
												/*Condition to print hello in the shape of x*/
												if((row==column || column==(num-row-1)) && row!=num/2)
												{
														printf(" Hello");
												}
												/*To print hello two times in the middle*/
												else if(row==num/2 && column==(num/2)+1)
												{
														printf("HelloHello");
												}
												/*will prints spaces if above condition not satisfies*/
												else
												{
														printf(" ");
												}

										}
										printf("\n");	/*New line*/
								}
						}
						else	/*For even condition*/
						{
								for(row=0; row < num ;row++)	/*for row iteration*/
								{
										for(column=0; column < num ;column++)	/*for column iteration*/
										{
												/*will prints hello in the shape of x*/
												if(row==column || column==(num-row-1))
												{
														printf("Hello");
												}
												/*will prints spaces if above condition not satisfies*/
												else
												{
														printf(" ");
												}
										}

										printf("\n");	/*new line*/
								}
						}
				}
				else	/*if input is not with in the range*/
				{
						printf("Number Out of Range/Not With in the limit\n");
				}
				printf("\nDo you want to Continue(y/n):");	/*will prompt the user to continue*/
				scanf(" %c", &ch);
		}while( ch == 'y' || ch == 'Y' );
}
