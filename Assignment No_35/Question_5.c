/*5. Write a program which accept one number from user and range of positions from user. Toggle all bits from that range.

Input : 897 9 13  Toggle all bits from position 9 to 13 of input number ie 879.

Output: 7553

*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>

int Toggle_Bits_By_Range(int iNo, int iStart, int iEnd)
{
    int iRange=0;
    int iMask=0;
    
    if(iStart > iEnd || (iStart < 0 && iEnd > 32))
        return -1;

    iRange=iEnd - iStart;

    for(int i=0; i<iRange; i++)
    {
        iMask = iMask << 1;
        iMask = iMask | 1;
    }

    iMask = iMask << iStart;

    iNo=iNo ^ iMask;

    return iNo;
}

int main()
{
    int iNum=0;
    int iPos1=0,iPos2=0;
    int iResult=0;

    printf("Enter a number : ");
    scanf("%d", &iNum);

    printf("Enter Starting Position:");
    scanf("%d",&iPos1);

    printf("Enter Ending Position:");
    scanf("%d",&iPos2);

    iResult=Toggle_Bits_By_Range(iNum, iPos1, iPos2);

    if (iResult != -1)
        printf("Result after toggling bits from range of %d to %d is : %d\n",iPos1, iPos2, iResult);
    else
        printf("Range is invalid\n");

    return 0;
}
