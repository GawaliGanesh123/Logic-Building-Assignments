/*4.Write a program which accept string from user and display only digits from the string.

Input : "marvell89ous121"
Output : "89121"

Input : "Gane58"
Output : "58"

*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display_Digits(char *str)
{
	for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
            printf("%c", str[i]);
    }
    printf("\n");
}

int main()
{
  char Arr[20];

  printf("Enter a String:\t");
  scanf("%[^'\n']s",Arr);

  Display_Digits(Arr);

  return 0;
}
