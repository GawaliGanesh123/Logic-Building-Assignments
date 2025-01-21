/*  Accept Number from user and check whether number perfect or not.

Input- 25
Ouput- Not Perfect Number

Input- 6
Output - Perfec Number

*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>


bool CheckPerfect(int iNo)
{
  int iCnt=0, iAns=0, iTemp=iNo;

  for(iCnt=1; iCnt<iNo; iCnt++)
  {
     if(iNo % iCnt == 0)
     {
        iAns=iAns+iCnt;
     }
  }

  if((iAns == iNo))
  {
     return true;
  }
  else
  {
    return false;
  }
}

int main()
{
  int iNo=0;
  bool bRet=false;

  printf("Enter the Number:\n");
  scanf("%d",&iNo);

  bRet=CheckPerfect(iNo);

  if(bRet == true)
  {
    printf("Perfect Number");
  }
  else
    printf("Not Perfect Number");

  return 0;
}
