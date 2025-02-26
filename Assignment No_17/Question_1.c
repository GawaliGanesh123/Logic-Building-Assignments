/*1. Accept N numbers from user and return the largest number.

Input : N : 6
Elements :10 20 50 40 60 30

Output : 60


*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Largest_Element(int Arr[], int iSize)
{
  int iCnt=0, iLarge=Arr[0];

  for(iCnt=0; iCnt<iSize; iCnt++)
  {
    if(Arr[iCnt]>iLarge)
      iLarge=Arr[iCnt];
  }

  return iLarge;

}


int main()
{
   int iSize=0, iCnt=0;
   int *Array=NULL;
   int iRet=0;

   printf("Enter the Number of Elements:\t");
   scanf("%d",&iSize);

   Array=(int *)malloc(iSize*sizeof(int));

   if(Array==NULL)
     return -1;
   

   printf("Enter %d Elements",iSize);
   for(iCnt=0; iCnt<iSize; iCnt++)
     scanf("%d",&Array[iCnt]);
   
   
   iRet=Largest_Element(Array,iSize);
  
   printf("Largest Elements is:%d\t",iRet);

   free(Array);

   return 0;
}
