/*Write a program which accept radius of circle from user and calculate its Area.

Input- 5.3
Output- 88.2026

*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

double CircleArea(float fRadius)
{
	double dAns=0;

	dAns=3.14*fRadius*fRadius;

	return dAns;
}

int main()
{
  float fValue=0;
  double dRet=0;

  printf("Enter the radius of circle:\n");
  scanf("%f",&fValue);

    dRet=CircleArea(fValue);

    printf("Area of circle is:%lf\n",dRet);

	return 0;
}
