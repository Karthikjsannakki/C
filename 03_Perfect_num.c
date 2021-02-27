/*
*******************************************************************
Author Name: Karthik J
Date: 17/02/2021
Description: WAP to check whether a given number is perfect or not
Sample execution: -
Test Case 1: Positive Numbers
./perfect_number
Enter a number: 6
Yes, entered number is perfect number
Do you want to Continue(y/n):y
Test Case 2: Positive Numbers
Enter a number: 10
No, entered number is not a perfect number
Do you want to Continue(y/n):y
Test Case 3: Negative Number
Enter a number: -1
Invalid Input
Do you want to Continue(y/n):y
Test Case 4: N > 2^20
Enter a number: 2000000
Number out of range.
Do you want to Continue(y/n):n
*******************************************************************
*/
//Header file
#include<stdio.h>


int num,rem,sum,i; 	/* Declarations*/
char ch;

/*Main function*/
int main()
{
		/*Will prompt the user*/
		do{
				sum=0;		/* pre-initialization */
				
				printf("Enter the Number: "); /*prints statement*/
				/* reads input & stores to num*/
				scanf("%d", &num);

				/*Condition to allow only 0>num=<1048576 */
				if ( num > 0 && num <= 1048576 )
				{
						/* Iteration from 1 to end */
						for(i=1; i<num; i++)
						{
								rem=num%i;	/* To fetch numbers which are completly divisible */
								/* Will allow numbers which is completly divided 
								i.e which remainder should be equal to 0 */
								if(rem == 0 )
								{
									/* Added numbers will be stored in sum */
										sum+=i; 	
								}
						}
						/*If input Number is equal to sum is a perfect number */
						if(sum == num)
						{
								printf("\nYes, %d is a perfect number\n", num);
						}
						else{
								printf("\nNo, %d is not a perfect number\n",num);
						}
				}
				/* Special case if input is equal to 0 */
				else if(num == 0)
				{
						printf("\nNo, 0 is not a perfect number\n");
				}
				/* If input is negative */
				else if ( num < 0 )
				{
						printf("\nInvalid Input\n");
				}
				/* If input Out of range */
				else
				{
						printf("\nNumber Out of range\n");
				}
				printf("\nDo you want to Continue(y/n):"); /* Will prompt the user */
				scanf(" %c", &ch);
		}while(ch == 'y' || ch == 'Y');
}

