/* Write a program which accept in Fahrenheit and convert it into celsius.
    (1celsius=Fahrenheit-32*5/9)

  Input-130
  Output-54.4444
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

double FhtoCs(float ftemp)
{
  double dAns=1;

  dAns= (ftemp-32)*(5.0/9.0);

  return dAns;
}


int main()
{
  float fValue=0;
  double dRet=0;

  printf("Enter a Temperature in Fahrenheit:\n");
  scanf("%f",&fValue);

  dRet=FhtoCs(fValue);

    printf("Temperature in celcius is:%lf\n",dRet);

	return 0;
}
