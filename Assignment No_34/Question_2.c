/*2. Write a program which accept one number and position from user and off
     that bit. Return modified number.
     
Input : 10 2
Output : 8 

*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>

int OffBit(int iNo, int iPos)
{
    int iResult=0;
    int iMask = 0x00000001;
    iMask=iMask << (iPos-1);

    iResult=iNo &iMask;

    if(iResult == iMask)
        iNo=iNo ^ iMask;
      return iNo;

}

int main()
{
    int iNum=0,iPos=0;
    int iResult=0;

    printf("Enter number : ");
    scanf("%d", &iNum);

    printf("Enter Position to Check Bit:\n");
    scanf("%d",&iPos);

    iResult = OffBit(iNum,iPos);

    printf("Number after off %d position of bit : %d\n",iPos, iResult);

    return 0;
}
