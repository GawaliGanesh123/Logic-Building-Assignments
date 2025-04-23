/*1.Write a program which accepts one number from user and OFF 7th bit of that number if it is ON Return  modified number.

Input : 79
Output : 15 

*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int OFFBit(int iNo)
{
    int iMask = 0x00000040;
    
    if (iMask & iNo)
        iNo ^=iMask;
    return iNo;
}

int main()
{
    int iNum=0;
    int iResult=0;

    printf("Enter number : ");
    scanf("%d", &iNum);

    iResult = OFFBit(iNum);

    printf("number After 7th Bit OFF:%d\t",iResult);

    return 0;
}
