/*2. Write a program which accept two numbers from user and display position
     of common ON bits from that two numbers.

Input : 10 15 (1010 1111)
Output : 2 4 

*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>

int Display_Common_ON_Bits(int iNo1, int iNo2)
{
    int Common_Bit=1;
    int iMask = 0x00000001;

    printf("Common on bits are : ");

    while((iNo1 != 0) && (iNo2 != 0)) 
    {
        if((iNo1 & iMask) && (iNo2 & iMask))
            printf("%d ",Common_Bit);
        Common_Bit++;
        iNo1=iNo1 >> 1;
        iNo2=iNo2 >> 1;

    }
     printf("\n");
}

int main()
{
    int iNum1=0, iNum2=0;

    printf("Enter First number : ");
    scanf("%d", &iNum1);

    printf("Enter Second number : ");
    scanf("%d", &iNum2);

    Display_Common_ON_Bits(iNum1, iNum2);

    return 0;
}
