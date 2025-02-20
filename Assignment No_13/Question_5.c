/*Accept N numbers from user and  return Average of all elements.

Input- N:   5
       Elements: 10 20 30 40 50 

Output- 30.00

*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 

#include<stdio.h>
#include<stdlib.h>

float Average(int Arr[], int iSize)
{
  int iCnt=0, iSum=0;

  for(iCnt=0; iCnt<iSize; iCnt++)
  {
    iSum=iSum+Arr[iCnt];  
  }

  return iSum/iSize;

}

int main()
{
   int iSize=0, iCnt=0;
   int *Array=NULL;
   float fRet=0.0f;

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


   fRet= Average(Array,iSize);

   printf("Result is:%f",fRet);

   free(Array);

   return 0;
}
