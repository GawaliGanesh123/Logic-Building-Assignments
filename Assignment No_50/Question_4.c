/* 4. Write a program which display smallest digits of all element from singly linear linked list

Input linked list : |110|->|28|->|17|->|424|->|6|->|89|->NULL

Output : 0       2      1       2      6       8

*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



#include<stdio.h>
#include<malloc.h>

struct node
{
	int iData;
	struct node *PNext;
};


void InsertFirst(struct node **PPHead, int iNo)
{
	struct node *PNewNode=NULL;

	PNewNode=(struct node *)malloc(sizeof(struct node));

	if(NULL == PNewNode)
	{
	  printf("Memory Allocation Failed...");
	  return;
	}

	PNewNode->iData=iNo;

	if(NULL == *PPHead)
	{
	    PNewNode->PNext=NULL;
	   *PPHead=PNewNode;
	   
	   return;
	}

	PNewNode->PNext=*PPHead;
	*PPHead=PNewNode;
}

void InsertLast(struct node **PPHead, int iNo)
{
	struct node *PNewNode=NULL;
	struct node *PTemp = NULL;

	PNewNode=(struct node *)malloc(sizeof(struct node));

	if(NULL == PNewNode)
	{
	  printf("Memory Allocation Failed....");
	  return;
	}

	PNewNode->iData=iNo;
	PNewNode->PNext=NULL;

	if(NULL == *PPHead)
	{
	   *PPHead=PNewNode;
	   return;
	}

	PTemp=*PPHead;

	while(PTemp->PNext != NULL)
	{
	   PTemp=PTemp->PNext;
	}

	PTemp->PNext=PNewNode;

}

void Display(struct node *PHead)
{
	if(NULL == PHead)
	{
	   printf("Linked List is Empty..");
	   return;
	}

	while(PHead != NULL)
	{
	   printf("|%d|->",PHead->iData);

	   PHead=PHead->PNext;
	}
	printf("NULL\n");
}

void Display_Small_Digit(struct node *PHead)
{
	int iCnt=0, iDigit=0, iAns=0;

	while(PHead != NULL)
	{
		iAns=PHead->iData;

     	while(PHead->iData != 0)
     	{
     		iDigit=PHead->iData % 10;
     		if(iDigit < iAns)
     		{
     			iAns = iDigit;
     		}

     		PHead->iData=PHead->iData/10;
     	}

       printf("%d\t",iAns);
        

		PHead=PHead->PNext;
	}	
	   

}


int main()
{
  	struct node *PFirst=NULL;
  
  	InsertFirst(&PFirst, 17);
  	InsertFirst(&PFirst, 28);
  	InsertFirst(&PFirst, 110);
	
    InsertLast(&PFirst, 424);
    InsertLast(&PFirst, 6);
    InsertLast(&PFirst, 89);


    Display(PFirst);

    Display_Small_Digit(PFirst);


    return 0;

    
}

















