/*
*******************************************************************
Author Name: Karthik J
Date: 19/02/2021
Description: WAP to generate fibbonacci numbers <= 'n' 
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
#include<stdio.h> 	/* Header file */

char ch; 	/* Declaration */

int main()	/* Main function */
{
		do
		{
				int a=0,b=1,iter,num,sum;	/*local declartions */

				printf("Enter a number: ");
				scanf("%d",&num);	/* input will be stored in num */

				if ( num == 0 )	/* if input is 0 */
				{
						printf("%d", a);
				}
				else if (num == 1 )	/* if input is 1 */
				{
						printf("%d %d %d", a,b,b);
				}

				else if ( num < 0 )	/* Condition if num is negative */
				{
						printf("%d %d ", a,b);	/* print 0 1 by default if input <= -1 */

						for(iter=0; iter>num; iter--)	/*for continues iteration*/
						{
								sum=a-b; /*subtracting numbers */

								/* condition to print fib series with in the limit */
								if(sum>=num && sum<=-num) 
								{

										printf("%d ", sum);	/*prints fib series */
								}
								a=b;	/*swapping */
								b=sum;
						}
						printf("\n"); //new line
				}
				else	/* Condition if num is positive */
				{

						printf("%d %d ", a,b);	/* print 0 1 by default if input >= 1 */

						for(iter=0; iter<num; iter++)	/* for continues iteration */
						{
								sum=a+b;	/* adding numbers */
								if(sum <= num) /* limiting fib num <= input */
								{

										printf("%d ", sum); /* prints fib series */
								}
								a=b;	/*swapping */
								b=sum;
						}
						printf("\n");	//new line
				}
				/* will prompt the user to choose the option */
				printf("\nDo you want to Continue(y/n):");
				scanf(" %c", &ch);

		}while(ch == 'y' || ch == 'Y' );
}
