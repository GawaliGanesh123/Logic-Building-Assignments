/*4. Write a program which accept one number , two positions from user and check whether bit at first or bit at second position is ON or OFF.

Input : 10 3 7
Output : TRUE

*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>

int Check_Bit(int iNo, int iPos1, int iPos2)
{
    int iMask=0x00000001;
    
    if(((iNo >> iPos1) & iMask) || ((iNo & iPos2) & iMask))
        return 1;

    return 0;
}

int main()
{
    int iNum=0;
    int iPos1=0,iPos2=0;
    int iResult=0;

    printf("Enter a number : ");
    scanf("%d", &iNum);

    printf("Enter first Position:");
    scanf("%d",&iPos1);

    printf("Enter Second Position:");
    scanf("%d",&iPos2);

    iResult=Check_Bit(iNum, iPos1, iPos2);

    if (iResult == 1)
        printf("TRUE\n");
    else
        printf("FALSE\n");

    return 0;
}
