/* Accept Two number from user and check both are equal or not.

Input- 23 23
Output- Equal

Input 23 25
Output- Not Equal

*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdbool.h>

bool CheckEqual(int iNo1, int iNo2)
{
   if(iNo1==iNo2)
   {
   	 return 1;
   }
   else
   {
   	 return 0;
   }
}

int main()
{
	int iValue1=0,iValue2=0;
	bool bRet=false;

	printf("Enter the Numbers:");
	scanf("%d%d",&iValue1,&iValue2);

    bRet=CheckEqual(iValue1, iValue2);

    if(bRet==1)
    {
      printf("Number is equal\n");
    }
    else
    {
      printf("number is not equal\n");
    }

    return 0;

}
