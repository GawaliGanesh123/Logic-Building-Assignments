/*4.Accept N numbers from user and accept Range,Display all elements from that range.

Input : N : 6
        Start: 60
        End  : 90
        Elements :85 66 3 76 93 88

Output : 66 76 88

*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int RangeDisplay(int Arr[], int iSize, int iStart, int iEnd)
{
  int iCnt=0, iAns=0;

  for(iCnt=0; iCnt<iSize; iCnt++)
  {
    if((Arr[iCnt] >=iStart) && (Arr[iCnt] <= iEnd) )
      printf("%d\t",Arr[iCnt]);
    
  }

 
}

int main()
{
   int iSize=0, iCnt=0, iValue1=0, iValue2=0;
   int *Array=NULL;
   int iRet=0;

   printf("Enter the Number of Elements:\t");
   scanf("%d",&iSize);

   printf("Enter the Starting point");
   scanf("%d",&iValue1);

   printf("Enter the Ending point");
   scanf("%d",&iValue2);

   Array=(int *)malloc(iSize*sizeof(int));

   if(Array==NULL)
     return -1;

   printf("Enter %d Elements",iSize);
   for(iCnt=0; iCnt<iSize; iCnt++)
   {
     scanf("%d",&Array[iCnt]);
   }

   RangeDisplay(Array,iSize,iValue1, iValue2);
  
   free(Array);

   return 0;
}
