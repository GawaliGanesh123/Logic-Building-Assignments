/*2.Accept N numbers from user and Display all elements in Reverse Order.

Input- N:   5
       Elements: 10 20 30 40 50 

Output- 50 40 30 20 10

*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void  DisplayReverse(int Arr[], int iSize)
{
  int iCnt=0;

  for(iCnt=iSize; iCnt>=0; iCnt--)
  {
      
        printf("%d\t",Arr[iCnt]);
      
  }
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


   DisplayReverse(Array,iSize);

  
   free(Array);

   return 0;
}
