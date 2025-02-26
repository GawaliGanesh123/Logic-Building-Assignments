/*5. Accept N numbers from user and Display all such numbers which contains 3 digits in it.

Input : N : 6
Elements :8225 665 3 76 953 840

Output : 665  953  858


*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

/*int Three_Digits(int Arr[], int iSize) // In This Approch the Complexity of a program is high. The efficient Version is written below.
{
  int iCnt=0,iCount=0, iTemp=0;

  for(iCnt=0; iCnt<iSize; iCnt++)
  {
    iCount=0;
    iTemp=Arr[iCnt];

    while(iTemp != 0)
    {
      iCount++;
      iTemp=iTemp/10;
    }

    if(iCount== 3)
      printf("%d\t",Arr[iCnt]);
  
  }

} 
*/

void Three_Digits(int Arr[], int iSize)  //Efficient Solution
{
  int iCnt=0;

  for(iCnt=0; iCnt<iSize; iCnt++)
  {
    if(Arr[iCnt]>=100  && Arr[iCnt]<=999)
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
     return -1;
   

   printf("Enter %d Elements",iSize);
   for(iCnt=0; iCnt<iSize; iCnt++)
     scanf("%d",&Array[iCnt]);
   
   
   Three_Digits(Array,iSize);
  
   free(Array);

   return 0;
}
