/* 4. Write a program which return largest element from singly linear linked list.

Input linked list : |110|->|230|->|320|->|240|->|85|

Output : 320

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

int LargestElement(struct node *PHead)
{
	int iLarge=0;

	while(PHead != NULL)
	{
     
     if(PHead->iData > iLarge)
     {
     	iLarge=PHead->iData;
     }

		PHead=PHead->PNext;
	}

	return iLarge;
}




int main()
{
  	struct node *PFirst=NULL;
  	int iRet=0;
  
  	InsertFirst(&PFirst, 320);
  	InsertFirst(&PFirst, 230);
  	InsertFirst(&PFirst, 110);

    InsertLast(&PFirst, 240);
    InsertLast(&PFirst, 85);

    Display(PFirst);

    iRet=LargestElement(PFirst);

    printf("Largest Elements  is:%d\t",iRet);


    return 0;

    
}











