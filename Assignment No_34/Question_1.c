/*1.Write a program which accepts one number and position from user 
   and check whether bit at that position is on or off. If bit is on return TRUE otherwise return FALSE.

Input : 10  2
Output : TRUE

*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>

int CheckBit(int iNo, int iPos)
{
    int iMask = 0x00000001;
    iMask=iMask << (iPos-1);

    if(iNo & iMask)
      return 1;

  return 0;
}

int main()
{
    int iNum=0,iPos=0;
    int iResult=0;

    printf("Enter number : ");
    scanf("%d", &iNum);

    printf("Enter Position to Check Bit:\n");
    scanf("%d",&iPos);

    iResult = CheckBit(iNum,iPos);

    if (iResult == 1)
        printf("TRUE\n");
    else
        printf("FALSE\n");

    return 0;
}
