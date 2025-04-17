/*3.Write a program which accept string from user and toggle the case.

Input : “Marvellous Multi OS”
Output : mARVELLOUS mULTI os 

Input: "Ganesh Gawali"
Output: "gANESH gAWALI"

*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void Toggle_Case(char *str)
{
	while(*str !='\0')
	{
	  if(*str>='a' && *str<='z')
	  {
	    *str=*str-32;
	  }
	  else if(*str>='A' && *str<='Z')
	  {
	  	*str=*str+32;
	  }

	  str++;
	}
}

int main()
{
  char Arr[20];

  printf("Enter a String:\t");
  scanf("%[^'\n']s",Arr);

  Toggle_Case(Arr);

  printf("After Conversion:%s\t",Arr);

	return 0;
}
