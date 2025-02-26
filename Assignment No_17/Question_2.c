/*2. Accept N numbers from user and return the Smallest number.

Input : N : 6
Elements :30 60 10 50 20 40

Output : 10


*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Smallest_Element(int Arr[], int iSize)
{
  int iCnt=0, iSmall=Arr[0];

  for(iCnt=0; iCnt<iSize; iCnt++)
  {
    if(Arr[iCnt]<iSmall)
      iSmall=Arr[iCnt];
  }

  return iSmall;

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
   
   
   iRet=Smallest_Element(Array,iSize);
  
   printf("Smallest Elements is:%d\t",iRet);

   free(Array);

   return 0;
}
