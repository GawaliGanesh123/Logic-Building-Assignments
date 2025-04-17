/*1.Write a program which accept string from user and convert it into lower case.

Input : "Marvellous Multi OS"
Output : "marvellous multi os"

Input: "Ganesh Gawali"
Output: "ganesh gawali"

*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void Convert_Lowercase(char *str)
{
	while(*str !='\0')
	{
	  if(*str>='A' && *str<='Z')
	  *str=*str+32;
    
	  str++;
	}
}

int main()
{
  char Arr[20];

  printf("Enter a String:\t");
  scanf("%[^'\n']s",Arr);

  Convert_Lowercase(Arr);

  printf("After Conversion:%s\t",Arr);
  
	return 0;
}
