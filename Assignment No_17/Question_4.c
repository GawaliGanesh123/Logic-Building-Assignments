/*4. Accept N numbers from user and return the Second Largest number.

Input : N : 6
Elements :30 60 10 50 20 40

Output : 50


*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Second_Largest(int Arr[], int iSize)
{
  int iCnt=0,iLarge=Arr[0], iSecLarge=0;

  for(iCnt=0; iCnt<iSize; iCnt++)
  {
    if(Arr[iCnt]>iLarge)
    {
      iSecLarge=iLarge;
      iLarge=Arr[iCnt];
    }
  }
  
  return  iSecLarge;
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
   
   
   iRet=Second_Largest(Array,iSize);
  
   printf("Second Largest Elements is:%d\t",iRet);

   free(Array);

   return 0;
}
