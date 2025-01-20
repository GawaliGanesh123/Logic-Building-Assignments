/* Write a program Which accept distance in kilometer and convert it into meter.
    (1km=1000m)

  Input-12km
  Output-12000m
*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

int  KmtoMeter(int iNo)
{
	int iAns=0;

   iAns=iNo*1000;

   return iAns;
}

int main()
{
  int iValue=0;
  int iRet=0;

  printf("Enter a Distance in KM:\n");
  scanf("%d",&iValue);

  iRet=KmtoMeter(iValue);

    printf("Distance in meter is:%d\n",iRet);

	return 0;
}
