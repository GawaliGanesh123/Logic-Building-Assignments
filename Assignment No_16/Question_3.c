/*3.Accept N numbers from user and accept one another number as NO, return index of Last occurrence of that NO.

Input : N : 6
        NO: 93
        Elements :85 66 3 66 66 88

Output : 4

*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int LastIndex(int Arr[], int iSize, int iNo)
{
  int iCnt=0, iAns=0;

  for(iCnt=0; iCnt<iSize; iCnt++)
  {
    if(Arr[iCnt] == iNo)
    {
      iAns = iCnt;
    }
  }

  if(iAns != 0)
    return iAns;
  else
    return -1;
 
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

   iRet=LastIndex(Array,iSize, iNo);

   if(iRet == -1)
   {
    printf("There is no such number");
   }
   else
   {
    printf("Index of Last Occurrence of that number is:%d",iRet);
   }

  
   free(Array);

   return 0;
}
