/*4. Write a program which accept one number from user and toggle 7th and
10th bit of that number. Return modified number.

Input : 137
Output : 713 

*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>

int ToggleBit(int iNo)
{
    int iMask = 0x0000240;
    
    iNo ^=iMask;
      
    return iNo;
}

int main()
{
    int iNum=0;
    int iResult=0;

    printf("Enter number : ");
    scanf("%d", &iNum);

    iResult = ToggleBit(iNum);

    printf("Number after toggling 7th and 10th bit : %d\n",iResult);

    return 0;
}
