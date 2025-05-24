/* 3. Write a program which returns addition of all element from singly linear linked list. 

Input linked list : |10|->|20|->|30|->|40|->|50|

Output : 150

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

int Addition(struct node *PHead)
{
	int iAns=0;

	while(PHead != NULL)
	{
     
     iAns=iAns + PHead->iData;

		 PHead=PHead->PNext;
	}

	return iAns;
}




int main()
{
	  struct node *PFirst=NULL;
	  int iRet=0;

	  InsertFirst(&PFirst, 30);
	  InsertFirst(&PFirst, 20);
	  InsertFirst(&PFirst, 10);

    InsertLast(&PFirst, 40);
    InsertLast(&PFirst, 50);

    Display(PFirst);

    iRet=Addition(PFirst);

    printf("Addition of Total elements  is:%d\t",iRet);


    return 0;

    
}








