/*5. Write a program which accept one number from user and toggle contents
    of first and last nibble of the number. Return modified number. (Nibble is agroup of four bits) 

Input: 10
Output: -268435451

Input : 16
Output :-268435425
*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>

int Toggle_Nibble(int iNo)
{
    int iMask = 0xf000000f;

    return iNo ^ iMask;
}

int main()
{
    int iNum=0,iPos=0;
    int iResult=0;

    printf("Enter number : ");
    scanf("%d", &iNum);

    iResult = Toggle_Nibble(iNum);

    printf("Number after toggling first and last nibble : %d\n", iResult);

    return 0;
}
