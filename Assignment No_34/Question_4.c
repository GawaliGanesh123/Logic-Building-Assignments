/*4. Write a program which accept one number and position from user and
     toggle that bit. Return modified number.

Input : 10 3
Output : 14 
*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>

int Toggle_Bit(int iNo, int iPos)
{
    int iMask = 0x00000001;
    iMask=iMask << (iPos-1);

    return iNo ^ iMask;
}

int main()
{
    int iNum=0,iPos=0;
    int iResult=0;

    printf("Enter number : ");
    scanf("%d", &iNum);

    printf("Enter Position to Check Bit:\n");
    scanf("%d",&iPos);

    iResult = Toggle_Bit(iNum,iPos);

    printf("Number after toggling %d position of bit : %d\n", iPos, iResult);

    return 0;
}
