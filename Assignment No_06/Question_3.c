/* Accept amount in US doller and return its corresponding value in Indian Currency.
     consider 1$ as 70Rs.

   Input-10
   Output-700

*/
/////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

int ConvertDoller(int iNo)
{
	int Doller=70, iAns=0;

	iAns=Doller*iNo;

	return iAns;


}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter a Number:\n");
    scanf("%d",&iValue);

    iRet=ConvertDoller(iValue);

    printf("Value in INR:%d",iRet);

	return 0;
}
