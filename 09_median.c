/*
*******************************************************************
Author Name: Karthik J
Date: 23/02/2021
Description: WAP to print “Hello” in X format
Sample execution: -
Test Case 1: Equal sized arrays
./median
Enter the 'n' value for Array A: 5
Enter the elements one by one for Array A: 3 2 8 5 4
After sorting : 2 3 4 5 8
Median of array1 : 4
Enter the 'n' value for Array B: 5
Enter the elements one by one for Array A: 12 3 7 8 5
After sorting : 3 7 5 8 12
Median of array2 : 5
Median of both arrays : 4.5 (4 + 5 = 9; 9 / 2 = 4.5)

Test Case 2: Unequal sized arrays
./median
Enter the 'n' value for Array A: 5
Enter the elements one by one for Array A: 3 2 8 5 4
After sorting : 2 3 4 5 8
Median of array1 : 4
Enter the 'n' value for Array B: 4
Enter the elements one by one for Array A: 12 13 7 5
After sorting : 5 7 12 13
Median of array1 : 9.5 (7 + 12 = 19; 19 / 2 = 9.5)
Median of both arrays : 6.75 (4 + 9.5 = 13.5; 13.5 / 2 = 6.75)
*******************************************************************
*/
#include<stdio.h>	/*Header file*/

char ch,choice;	/*Global Declarations*/

int main()	/*Main function*/
{
		do	/*To prompt*/
		{
				int Size_Array1,Size_Array2,i,j,Temp;	/*Local Declarations*/
				float Median1,Median2,Median;
				/* For Array1 */
				printf("Enter the size of the 1st Array: ");
				scanf("%d",&Size_Array1);	/*1st array size will be stored in Size_Array1*/

				if ( Size_Array1 > 0 )	/*Array size should be greater than 0 else throughs Junk values*/
				{
						if ( Size_Array1 < 10 )		/*Limitation of array size < 10*/
						{

								int Array1[Size_Array1];	/*Array1 initialization*/

								printf("\nEnter the Element of the 1st Array:\n");

								/*This loop will take input from user till array size*/
								for(i=0; i<Size_Array1; i++)	
								{
										scanf("%d",&Array1[i]);	/*inputs will be stored in Array1*/
								}

								for ( i=0; i<Size_Array1-1; i++ )	/*Sorting array in asending order*/
								{
										for( j=0 ; j<Size_Array1-1-i; j++)
										{
												if (Array1[j] > Array1[j+1])
												{
														Temp=Array1[j];	/*stores value in temp*/
														Array1[j]=Array1[j+1];	/*Swapping*/
														Array1[j+1]=Temp; /*stored temp value will be assigned*/
												}
										}
								}

								printf("\nAfter Sorting 1st Array: ");

								for(i=0; i<Size_Array1; i++ )	/*This loop will prints array1 after sorting*/
								{
										printf("%d ",Array1[i]);
								}

								printf("\n");	/*New line*/

								if ( Size_Array1%2 != 0 )	/*if array size is odd*/
								{
										Median1 = Array1[Size_Array1/2];	/*Median Calculation will be done here*/

										printf("\nMedian of Array1: %.1f\n", Median1);	/*Will display median1*/
								}
								else	/*if array size is even*/
								{
										/*Will pick 2 middle numbers*/
										Median1 = Array1[Size_Array1/2] + Array1[(Size_Array1/2) - 1];
										/*Calculation of median*/
										Median1 = Median1/2;
										/*Will display median1*/
										printf("\nMedian of Array1: %.1f\n", Median1);
								}
						}
						else	/*Displays if input size of array > 10*/
						{
								printf("\nMax array elements exceeded\n");

						}
				}
				else	/*Displays if input size of array < 0*/
				{
						printf("\nInvalid input!!! Array size should be > 0\n");

				}

				/* for Array2 */
				printf("\nEnter the size of the 2nd Array: ");
				scanf("%d",&Size_Array2);

				if ( Size_Array2 > 0 )	/*Array size should be greater than 0 else throughs Junk values*/
				{
						if ( Size_Array2 < 10 )		/*Limitation of array size < 10*/	
						{
								int Array2[Size_Array2];	/*Array1 initialization*/

								printf("\nEnter the Element of the 2nd Array:\n");

								/*This loop will take input from user till array size*/
								for(j=0;j<Size_Array2;j++)
								{
										scanf("%d",&Array2[j]);	/*inputs will be stored in Array1*/
								}
								for ( i=0; i<Size_Array2-1; i++ )	/*Sorting array in asending order*/
								{
										for( j=0 ; j<Size_Array2-1-i; j++)
										{
												if (Array2[j] > Array2[j+1])
												{
														Temp=Array2[j];	/*stores value in temp*/
														Array2[j]=Array2[j+1]; /*Swapping*/
														Array2[j+1]=Temp;/*stored temp value will be assigned */
												}
										}
								}

								printf("\nAfter Sorting 2nd Array: ");

								for(i=0; i<Size_Array2; i++ )		/*This loop will prints array1 after sorting*/
								{
										printf("%d ",Array2[i]);
								}

								if ( Size_Array2%2 != 0 )	/*If array2 size is odd*/
								{
										Median2 = Array2[Size_Array2/2];	/*Median Calculation will be done here will pick middle value*/ 

										printf("\nMedian of 2nd Array: %.1f\n", Median2);	/*Displays median*/
								}
								else	/*If array size is even*/
								{
										/*Will pick 2 middle numbers*/
										Median2 = Array2[Size_Array2/2] + Array2[(Size_Array2/2) - 1];
										/*Calculation of median2*/
										Median2 = Median2/2;
										/*Displays median2*/
										printf("\nMedian of 2nd Array: %.1f\n", Median2);
								}

								Median = (Median1 + Median2)/2; /*Calculates total median (med1+med2)/2*/

								printf("\nMedian of Both Array: %.1f\n", Median); /*Displays median*/
						}

						else	/*Displays if input size of array > 10*/
						{
								printf("\nMax array elements exceeded\n");

						}
				}
				else	/*Displays if input size of array < 0*/
				{
						printf("\nInvalid input!!! Array size should be > 0\n");

				}

				printf("\nDo you want to Continue(y/n):");	/*Will prompt the user to continue*/
				scanf(" %c", &choice);

		}while(choice == 'y' || choice == 'Y');
		return 0;
}
