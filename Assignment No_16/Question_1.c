/*1.Accept N numbers from user and accept one another number as NO ,check whether NO is present or not.

Input : N : 6
        NO: 66
        Elements :85 66 3 66 93 88

Output : TRUE

Input : N : 6
        NO: 12
        Elements :85 11 3 15 11 111

Output : FALSE
*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Check(int Arr[], int iSize, int iNo)
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

   iRet=Check(Array,iSize, iNo);

   if(iRet>0)
   {
     printf("TRUE");
   }
   else
   {
    printf("FALSE");
   }

   free(Array);

   return 0;
}
