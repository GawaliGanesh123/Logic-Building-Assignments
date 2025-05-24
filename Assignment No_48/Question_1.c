/* 1. Write a program which search first occurrence of particular element from singly linear linked list.
      Function should return position at which element is found.

Input linked list : |10|->|20|->|30|->|40|->|50|->|30|->|70|
  Input element : 30

Output : 3 

*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



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
	printf("NULL");
}

int SearchFirstOccurrence(struct node *PHead, int iKey)
{
	int iPos=0;

	while(PHead != NULL)
	{
		iPos++;

		if(iKey == PHead->iData)
		{
           return iPos;
		}

		PHead=PHead->PNext;
	}
}




int main()
{
  	struct node *PFirst=NULL;
  	int iRet=0;

  	InsertFirst(&PFirst, 50);
  	InsertFirst(&PFirst, 40);
  	InsertFirst(&PFirst, 30);
  	InsertFirst(&PFirst, 20);
  	InsertFirst(&PFirst, 10);

    InsertLast(&PFirst, 30);
    InsertLast(&PFirst, 70);

    Display(PFirst);

    iRet=SearchFirstOccurrence(PFirst, 30);

    printf("First Occurrence Position is:%d\t",iRet);

    return 0;

}
























