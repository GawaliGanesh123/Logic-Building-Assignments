/*1.Write a program which accept one number from user and count number of
    ON (1) bits in it without using % and / operator.

Input : 11
Output : 3

*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>

int Count_On_Bits(int iNo)
{
    int iCount=0;
    int iMask = 0x00000001;

    while(iNo != 0)
    {
        if(iNo & iMask)
            iCount++;

        iNo=iNo >> 1;
    }
    return iCount;
}

int main()
{
    int iNum=0;
    int iResult=0;

    printf("Enter number : ");
    scanf("%d", &iNum);

    iResult = Count_On_Bits(iNum);

    printf("Number of on bits are : %d\n", iResult);

    return 0;
}
