/*
2.Write a program which checks whether 5th and 18th bit is ON or OFF.
*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int CheckBit(int iNo)
{
    int result = 0;
    int iMask = 0x00020010;
    
    result = iMask & iNo;

    if (result == iMask)
        return 1;
    return 0;
}

int main()
{
    int iNum=0;
    int iResult=0;

    printf("Enter number : ");
    scanf("%d", &iNum);

    iResult = CheckBit(iNum);

    if (iResult == 1)
        printf("Bit is on\n");
    else
        printf("Bit is off\n");

    return 0;
}
