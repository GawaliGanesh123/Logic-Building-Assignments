/*3. Write a program which accept string from user and return difference between frequency of small characters and frequency of capital characters.

Input : “MarvellouS”
Output : 6 (8-2) 

*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int  CheckDifference(char *str)
{
	int ismall=0, iLarge=0;

	while(*str !='\0')
	{
	   if(*str>='a' && *str<='z')
	     ismall++;
	   else if(*str>='A' && *str<='Z')
	   	iLarge++;

	     str++;
	}
	return ismall-iLarge;
}

int main()
{
   char Arr[20];
   int iRet=0;

   printf("Enter the string:\n");
   scanf("%[^'\n']s",Arr);

   iRet=CheckDifference(Arr);

   printf("Difference Between Small characters & Capital Characters are:%d\t",iRet);

   return 0;
}
