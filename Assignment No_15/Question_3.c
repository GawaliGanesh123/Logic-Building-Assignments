/*3.Accept N numbers from user and check whether that number contains 11 in it or not.

Input- N:   5
       Elements: 10 20 30 11 50 

Output- 11 is Present

Input-N:   5
       Elements: 10 20 30 40 50

Output- 11 is Absent     

*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void  Check(int Arr[], int iSize)
{
  int iCnt=0, iAns=0;

  for(iCnt=0; iCnt<iSize; iCnt++)
  {
    if(Arr[iCnt] == 11)
    {
      iAns++;
    }  
  }

  if(iAns > 0)
  {
    printf("11 is Present");
  }
  else
  {
    printf("11 is Absent");
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


   Check(Array,iSize);

  
   free(Array);

   return 0;
}
