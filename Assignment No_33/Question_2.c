/*2. Write a program which accept one number from user and off 7th and 10th
bit of that number. Return modified number.

Input : 577
Output : 1
*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int OFFBit(int iNo)
{
    int iMask = 0x00000240;
    

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

    printf("number After 7th and 10th  Bit OFF:%d\t",iResult);

    return 0;
}
