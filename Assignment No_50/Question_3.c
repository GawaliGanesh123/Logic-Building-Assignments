/* 3.Write a program which display product of all digits of all element from singly linear linked list. (Don’t consider 0)

Input linked list : |110|->|28|->|17|->|414|->|6|->|89|->NULL

Output : 1       16      7       16      6       72

*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



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

void Display_Product(struct node *PHead)
{
	int iCnt=0, iDigit=0, iAns=0;

	while(PHead != NULL)
	{
		iAns=1;

     	while(PHead->iData != 0)
     	{
     		iDigit=PHead->iData % 10;
     		if(iDigit == 0)
     		{
     			iDigit=1;
     		}
     		iAns=iAns*iDigit;

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
	
    InsertLast(&PFirst, 414);
    InsertLast(&PFirst, 6);
    InsertLast(&PFirst, 89);


    Display(PFirst);

    Display_Product(PFirst);


    return 0;

    
}













