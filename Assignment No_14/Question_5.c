/*Accept N numbers from user and Display all such elements which are Multiple of 11.

Input- N:   6
       Elements: 85 66 3 55 93 88

Output- 66 55 88

*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void  Display(int Arr[], int iSize)
{
  int iCnt=0;

  for(iCnt=0; iCnt<iSize; iCnt++)
  {
      if((Arr[iCnt] % 11 == 0))
      {
        printf("%d\t",Arr[iCnt]);
      }
      
  }
}

int main()
{
   int iSize=0, iCnt=0;
   int *Array=NULL;
   int iRet=0.0f;

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


   Display(Array,iSize);

  
   free(Array);

   return 0;
}
