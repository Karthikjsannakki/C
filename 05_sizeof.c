/*
*******************************************************************
Author Name: Karthik J
Date: 15/02/2021
Description: To Print sizes of all basic data types of C
Sample execution:
./sizeof
Size of int : 4 bytes
Size of char : 1 byte
Size of float : 4 bytes
Size of double: 8 bytes
Size of unsigned int : 4 bytes
Size of long int : 8 bytes
----
----
*******************************************************************
*/

#include<stdio.h>

/* Declation of Datatypes with variables */
int num;
char ch;
float floattype;
double doubletype;
long int longinttype;
long long int longlonginttype;
long double longdoubletype;
short shortinttype;
unsigned int unsigninttype;
unsigned char unsignchartype;
unsigned short int unsignshortinttype;
int main()
{
		/* %z is used for no warnings */
		/* Prints size of int Datatype in bytes */
		printf("Size of int is %zu bytes\n", sizeof(num));

		/*Prints size of char Datatype in bytes */
		printf("Size of char is %zu bytes\n", sizeof(ch));

		/* Prints size of float Datatype in bytes */
		printf("Size of float is %zu bytes\n", sizeof(floattype));

		/* Prints size of double Datatype in bytes */
		printf("Size of double is %zu bytes\n", sizeof(doubletype));

		/* Prints size of long int Datatype in bytes */
		printf("Size of longint is %zu bytes\n", sizeof(longinttype));

		/* Prints size of long long int Datatype in bytes */
		printf("Size of longlongint is %zu bytes\n", sizeof(longlonginttype));

		/* Prints size of long double Datatype in bytes */
		printf("Size of longdouble is %zu bytes\n", sizeof(longdoubletype));

		/* Prints size of short int Datatype in bytes */
		printf("Size of shortint is %zu bytes\n", sizeof(shortinttype));

		/* Prints size of unsigned int Datatype in bytes */
		printf("Size of unsignedint is %zu bytes\n", sizeof(unsigninttype));

		/* Prints size of unsigned char Datatype in bytes */
		printf("Size of unsignedchar is %zu bytes\n", sizeof(unsignchartype));
   
		/* Prints size of unsigned short int Datatype in bytes */
		printf("Size of unsigned short int is %zu bytes\n", sizeof(unsignshortinttype));
}
