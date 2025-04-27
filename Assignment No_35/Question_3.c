/*3. Write a program which accept one number from user and check whether
     9th or 12th bit is on or off.

Input : 257
Output : TRUE

*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>

int Check_Bit(int iNo)
{
    int iMask1=0x00000100;
    int iMask2= 0x00000800;

    if((iNo & iMask1) || (iNo & iMask2))
        return 1;

    return 0;
}

int main()
{
    int iNum=0;
    int iResult=0;

    printf("Enter a number : ");
    scanf("%d", &iNum);

    iResult=Check_Bit(iNum);

    if (iResult == 1)
        printf("TRUE\n");
    else
        printf("FALSE\n");

    return 0;
}
