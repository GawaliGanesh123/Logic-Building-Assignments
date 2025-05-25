/* 3. Write a program which returns addition of all even element from singly linear linked list.

Input linked list : |11|->|28|->|17|->|41|->|22|->|89|

Output : 50

*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


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

int Addition_Of_Even_Elements(struct node *PHead)
{
	int iCnt=0, iAns=0;

	while(PHead != NULL)
	{
     	if(PHead->iData % 2 == 0)
     	{
     		iAns=iAns+PHead->iData;
     	}

		PHead=PHead->PNext;
	}	
	   
	   return iAns;

}


int main()
{
	struct node *PFirst=NULL;
	int iRet=0;

	InsertFirst(&PFirst, 41);
	InsertFirst(&PFirst, 17);
	InsertFirst(&PFirst, 28);
	InsertFirst(&PFirst, 11);

    InsertLast(&PFirst, 22);
    InsertLast(&PFirst, 89);

    Display(PFirst);

    iRet=Addition_Of_Even_Elements(PFirst);

    printf("Addition Of Even Elements are:%d",iRet);


    return 0;

    
}
















