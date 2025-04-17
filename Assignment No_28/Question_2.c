/*2.Write a program which accept string from user and convert it into Upper case.

Input : “Marvellous Multi OS”
Output : MARVELLOUS MULTI OS

Input: "Ganesh Gawali"
Output: "GANESH GAWALI"

*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void Convert_Uppercase(char *str)
{
	while(*str !='\0')
	{
	  if(*str>='a' && *str<='z')
	  *str=*str-32;

	  str++;
	}

}

int main()
{
  char Arr[20];

  printf("Enter a String:\t");
  scanf("%[^'\n']s",Arr);

  Convert_Uppercase(Arr);

  printf("After Conversion:%s\t",Arr);
  
	return 0;
}
