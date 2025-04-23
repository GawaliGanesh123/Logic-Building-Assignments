/*5. Write a program which accept one number from user and on its first 4
bits. Return modified number.

Input : 73
Output : 79 


*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>

int ToggleBit(int iNo)
{
    int iMask = 0x0000000F;
    
    iNo |= iMask;
      
    return iNo;
}

int main()
{
    int iNum=0;
    int iResult=0;

    printf("Enter number : ");
    scanf("%d", &iNum);

    iResult = ToggleBit(iNum);

    printf("Number after First 4 bits on : %d\n",iResult);

    return 0;
}
