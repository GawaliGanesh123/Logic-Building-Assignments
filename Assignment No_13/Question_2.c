/*Accept N numbers from user and return Summation of all elements.

Input- N: 5
       Elements: 10 20 30 40 50

Output- 150

*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Summation(int Arr[], int iSize)
{
  int iCnt=0, iSum=0;

  for(iCnt=0; iCnt<iSize; iCnt++)
  {
    iSum=iSum+Arr[iCnt];
  }

  return iSum;

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


   iRet= Summation(Array,iSize);

   printf("Addition is:%d",iRet);

   free(Array);

   return 0;
}
