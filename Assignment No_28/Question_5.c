/*5. Write a program which accept string from user and count number of
white spaces

Input : “MarvellouS”
Output : 0

Input : “Ganesh Gawali”
Output : 1

Input : “India is my country”
Output : 3
*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

int Count_WhiteSpaces(char *str)
{
   int iAns=0;

	while(*str !='\0')
	{
	  if(*str ==' ')
	  {
	    iAns++;
	  }
	  str++;
	}
    return iAns;
}

int main()
{
  char Arr[20];
  int iRet=0;

  printf("Enter a String:\t");
  scanf("%[^'\n']s",Arr);

  iRet=Count_WhiteSpaces(Arr);

  printf("Number of WhiteSpaces are:%d\t",iRet);

	return 0;
}
