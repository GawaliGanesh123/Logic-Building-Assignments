/* 2. Write a program which displays all elements which are prime from singly linear linked list. 

Input linked list : |11|->|20|->|17|->|41|->|22|->|89|

Output : 11 17 41 89

*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


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

void Prime_Number(struct node *PHead)
{
	int iCnt=0, iAns=0;

	while(PHead != NULL)
	{
	   iAns=0;
     
     for(iCnt=2; iCnt < PHead->iData; iCnt++)
     {
     	if(PHead->iData % iCnt == 0)
     	{
     		iAns++;
     		break;
     	}
     }

     if(iAns == 0)
     {
     	printf("%d\n",PHead->iData);
     }

		PHead=PHead->PNext;
	}

}



int main()
{
  	struct node *PFirst=NULL;
  
  	InsertFirst(&PFirst, 41);
  	InsertFirst(&PFirst, 17);
  	InsertFirst(&PFirst, 20);
  	InsertFirst(&PFirst, 11);

    InsertLast(&PFirst, 22);
    InsertLast(&PFirst, 89);

    Display(PFirst);

    Prime_Number(PFirst);


    return 0;

    
}








