/*Accept N numbers from user and  return difference between Summation of Even elements and summation of odd elements.

Input- N:   6
       Elements: 85 66 3 80 93 88

Output- 53(234-181)
 
*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iSize)
{
  int iCnt=0, iEvenSum=0, iOddSum=0;

  for(iCnt=0; iCnt<iSize; iCnt++)
  {
    if(Arr[iCnt] % 2 == 0)
    {
       iEvenSum=iEvenSum+Arr[iCnt]; 
    }
    else
    {
       iOddSum= iOddSum+Arr[iCnt];
    }
  }

  return iEvenSum-iOddSum;

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


   iRet= Difference(Array,iSize);

   printf("Result is:%d",iRet);

   free(Array);

   return 0;
}
