/*4.Accept N numbers from user and return frequency of 11 from it.

Input- N:   5
       Elements: 10 11 30 11 50 

Output- 2

Input-N:   5
       Elements: 10 20 30 40 50

Output- 0     

*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iSize)
{
  int iCnt=0, iAns=0;

  for(iCnt=0; iCnt<iSize; iCnt++)
  {
    if(Arr[iCnt] == 11)
    {
      iAns++;
    }  
  }

  return iAns;
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
   {
     printf("Unnable to allocate memory");
     return -1;
   }

   printf("Enter %d Elements",iSize);
   for(iCnt=0; iCnt<iSize; iCnt++)
   {
     scanf("%d",&Array[iCnt]);
   }


   iRet=Frequency(Array,iSize);

   printf("Frequency of 11 is:%d",iRet);

  
   free(Array);

   return 0;
}
