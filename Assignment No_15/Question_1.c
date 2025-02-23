/*1.Accept N numbers from user and Display all such elements which are less than 100 and greater than 50.

Input- N:   5
       Elements: 45 68 97 123 49

Output- 68 97

*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void  Display(int Arr[], int iSize)
{
  int iCnt=0;

  for(iCnt=0; iCnt<iSize; iCnt++)
  {
      if((Arr[iCnt] < 100)&& (Arr[iCnt]>50))
      {
        printf("%d\t",Arr[iCnt]);
      }
      
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


   Display(Array,iSize);

  
   free(Array);

   return 0;
}
