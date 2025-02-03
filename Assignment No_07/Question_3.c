/* Write a program which accept Width and Height Of Rectangle from user and calculate its Area.

Input- Width:25
       Height:35

Output- 875.00

*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

double RectArea(float fWidth, float fHeight)
{
	double dArea=0.0;
      
      //dArea=(fWidth * fHeight);

      return fWidth*fHeight;
}

int main()
{
  float fValue1=0.0, fValue2=0.0;
  double dRet=0.0;

  printf("Enter the width of rectangle:\n");
  scanf("%f",&fValue1);

  printf("Enter the Height of rectangle:\n");
  scanf("%f",&fValue2);

    dRet=RectArea(fValue1, fValue2);

    printf("Area of rectangle is:%lf\n",dRet);

	return 0;
}
