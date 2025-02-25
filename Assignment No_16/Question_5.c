/*5. Write a program which accept N numbers from the user and return product of all odd elements.

Input : 15 66 3 70 10 88
Output : 45

Input : 44 66 72 70 10 88
Output : 0


*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Product_Odd(int Arr[], int iSize)
{
  int iCnt=0, iProduct=1;

  for(iCnt=0; iCnt<iSize; iCnt++)
  {
    if(Arr[iCnt] % 2 !=0)
      iProduct= iProduct*Arr[iCnt];
  }

  if(iProduct == 1)
    iProduct =0;

  return iProduct;
 
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
   
   
   iRet=Product_Odd(Array,iSize);
  
   printf("Product of Odd Elements:%d\t",iRet);

   free(Array);

   return 0;
}
