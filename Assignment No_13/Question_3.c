/*Accept N numbers from user and return Summation of Even elements only.

Input- N: 5
       Elements: 5 10 15 20 25

Output- 30

*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

int SummationOfEven(int Arr[], int iSize)
{
  int iCnt=0, iSum=0;

  for(iCnt=0; iCnt<iSize; iCnt++)
  {
    if(Arr[iCnt] % 2 == 0)
    {
       iSum=iSum+Arr[iCnt]; 
    }
  }

  return iSum;

}

int main()
{
   int iSize=0, iRet=0, iCnt=0;
   int *Array=NULL;

   printf("Enter the Number of Elements:\t");
   scanf("%d",&iSize);

   Array=(int *)malloc(iSize*sizeof(int));

   if(Array==NULL)
   {
     printf("Unnable to allocate memory");
     return -1;
   }

   printf("Enter %d Elements",iSize);
   for(iCnt=0; iCnt<iSize; iCnt++)
   {
   	 scanf("%d",&Array[iCnt]);
   }


   iRet= SummationOfEven(Array,iSize);

   printf("Addition is:%d",iRet);

   free(Array);

   return 0;
}
