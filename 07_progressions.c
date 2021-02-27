/*
*******************************************************************
 Author Name: Karthik J
Date: 21/02/2021
Description: WAP to read 3 numbers a, r, n. Generate AP, GP, HP
Sample execution: -
Test Case 1: Positive Inputs
./progressions
Enter the First Number 'A': 2
Enter the Common Difference / Ratio 'R': 3
Enter the number of terms 'N': 5
AP = 2, 5, 8, 11, 14
GP = 2, 6, 18, 54, 162
HP = 0.5, 0.2, 0.125, 0.0909091, 0.0714285
Do you want to Continue(y/n):
Test Case 2: Negative Input(s)

Enter the First Number 'A': -2
Enter the Common Difference / Ratio 'R': 3
Enter the number of terms 'N': 5
Invaild Input(s)
Do you want to Continue(y/n):

Test Case 3: Any one value greater than 2pow10

Enter the First Number 'A': 2000
Enter the Common Difference / Ratio 'R': 3
Enter the number of terms 'N': 5
Input(s) out of range
Do you want to Continue(y/n):
*******************************************************************
*/
#include<stdio.h>	/*Header file*/

/*Declarations*/
int First_Number,Com_Diff,Terms,Add,Mult,Dividend;
char ch;

int main()	/*Main function*/
{
		do
		{
				printf("Enter the First Number 'A': ");
				scanf("%d", &First_Number);	/* first number will be stored in First_Number*/

				printf("Enter the Common Difference / Ratio 'R': ");
				scanf("%d", &Com_Diff);		/* Diff/ratio will be stored in Com_Diff*/

				printf("Enter the number of Terms 'N': ");
				scanf("%d", &Terms);	/*no of terms will be stored in Terms*/

				if ( First_Number > 0 && Com_Diff > 0 && Terms > 0 )	/* Condition for all 3 inputs > 0*/
				{ 
						/*Condition for all 3 inputs < 2 pow 10 (1024)*/
						if ( First_Number < 1024 && Com_Diff < 1024 && Terms < 1024 )
						{
								/*Assigning new variables */
								Add = First_Number;
								Mult=First_Number;
								Dividend=First_Number;

								printf("\nAP = ");	/*logic for AP*/
								for(int i=1; i<=Terms; i++)
								{
										printf("%d ", Add);	/*Prints num Series of AP*/
									/*first term will be added with diff/ratio during iteration */
										Add+=Com_Diff;	
								}

								printf("\nGP = ");	/*logic for GP*/
								for(int i=1; i<=Terms; i++)
								{
										printf("%d ", Mult);	/*Prints num Series of GP*/
									/*first term will be Multiplied with diff/ratio during iteration */
										Mult*=Com_Diff;
								}

								printf("\nHP = ");	/*logic for HP*/
								for(int i=1; i<=Terms; i++)
								{
										float Div=1/(float)Dividend;	/*Typecasting int to float*/
										printf("%.7f ", Div);	/*Prints num Series of HP*/
									/*first term will be added with diff/ratio during iteration */
										Dividend+=Com_Diff;
								}
								printf("\n");	/*blank line*/
						}
						else	/*if input is > 1024*/
						{
								printf("\nInput(s) Out of Range\n");
						}
				}
				else 	/*if input is < 0*/
				{
						printf("\nInvalid input(s)\n");
				}
				printf("\n");	/*blank line*/
				printf("Do you want to Continue(y/n):");	/*will prompt the user*/
				scanf(" %c", &ch);
		}while( ch == 'y' || ch == 'Y' );
}
