/*Accept N numbers from user and Count Even and Odd elements.

Input- N:   6
       Elements: 10 15 20 26 30 35

Output- Even Elements Are: 4
        Odd Elements Are : 2

*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

void  Count(int Arr[], int iSize)
{
  int iCnt=0, iEven=0, iOdd=0;

  for(iCnt=0; iCnt<iSize; iCnt++)
  {
      if(Arr[iCnt] % 2 == 0)
      {
        iEven++;
      }
      else
      {
        iOdd++;
      }
  }

  printf("Even Elements Are:%d",iEven);
  printf("Odd Elements Are:%d",iOdd);
}

int main()
{
   int iSize=0, iCnt=0;
   int *Array=NULL;
   int iRet=0.0f;

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


   Count(Array,iSize);

  
   free(Array);

   return 0;
}
