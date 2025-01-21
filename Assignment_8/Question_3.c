/* Accept Three Numbers from user and Return its multiplication.

Input- 12 0 25
Output- 0

Input- 12 4 25
Output- 1200
*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Multiply(int iNo1,int iNo2, int iNo3)
{

  if(iNo1== 0)
    {
       iNo1=1;
    }       
    if(iNo2==0)
    {
      iNo2=1;
    }   
    if(iNo3==0)
    {
      iNo3=1;
    } 
  
    int iMult=0;
  iMult= iNo1*iNo2*iNo3;

  return iMult;

}


int main()
{
	int iValue1=0,iValue2=0,iValue3=0;
  int iRet=0;

  printf("Enter the Numbers:");
  scanf("%d%d%d",&iValue1,&iValue2,&iValue3);

 if((iValue1&&iValue2&&iValue3)==0)
  {
    printf("Multiplication is%d\n",0);
    return 0;
  }

  iRet=Multiply(iValue1,iValue2,iValue3);

  printf("Multiplication is:%d\n",iRet);

  return 0;

}
