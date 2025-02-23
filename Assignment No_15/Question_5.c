/*5.Accept N numbers from user and Accept one another number as NO, return frequency of NO from it.

Input- N:   5
       No: 25
       Elements: 10 25 30 25 50 
Output- 2


Input-N:   5
      No:25
       Elements: 10 20 30 40 50
Output- 0     

*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iSize, int iNo)
{
  int iCnt=0, iAns=0;

  for(iCnt=0; iCnt<iSize; iCnt++)
  {
    if(Arr[iCnt] == iNo)
    {
      iAns++;
    }  
  }

  return iAns;
}

int main()
{
   int iSize=0, iCnt=0, iNo=0;
   int *Array=NULL;
   int iRet=0;

   printf("Enter the Number of Elements:\t");
   scanf("%d",&iSize);

   printf("Enter the number that you want to search");
   scanf("%d",&iNo);

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

   iRet=Frequency(Array,iSize, iNo);

   printf("Frequency  is:%d",iRet);

  
   free(Array);

   return 0;
}
