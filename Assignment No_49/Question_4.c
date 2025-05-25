/* 4. Write a program which return second maximum element from singly linear linked list. 

Input linked list : |11|->|28|->|17|->|41|->|22|->|89|

Output : 41

*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



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

int Second_Maximum(struct node *PHead)
{
	int iCnt=0, iLarge=PHead->iData, iSecLarge=0;

	while(PHead != NULL)
	{
     	if(PHead->iData > iLarge)
     	{
     		iSecLarge=iLarge;
     		iLarge=PHead->iData;
     	}

     	else if((PHead->iData > iSecLarge) && (PHead->iData < iLarge))
     	{
     		iSecLarge=PHead->iData;
     	}

		PHead=PHead->PNext;
	}	
	   
	   return iSecLarge;

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

    iRet=Second_Maximum(PFirst);

    printf("Second Maximum Element is:%d",iRet);


    return 0;

    
}















