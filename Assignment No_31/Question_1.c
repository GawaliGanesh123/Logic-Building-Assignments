/*1.Write a program which accept string from user and copy the contents of that string into another string.
(strcpy implementation)

Input : "Marvellous Multi OS"
Output : "Marvellous Multi OS"   in another string

*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void strcpyX(char *src, char *dest)
{
	while(*src != '\0')
	{
		*dest = *src;

		src++;
		dest++;
	}
	*dest='\0';

}

int main()
{
	char Arr[25];
	char Brr[25];

	printf("Enter the string:\n");
	scanf("%[^'\n']s",Arr);

	strcpyX(Arr,Brr);

	printf("Copied String is:%s\n",Brr);

	return 0;
}
