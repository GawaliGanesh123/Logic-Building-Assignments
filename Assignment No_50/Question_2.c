/* 2. Write a program which display all palindrome elements of singly linked list. 

Input linked list : |11|->|28|->|17|->|414|->|6|->|89|

Output : 11	   414     6

*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



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

void Check_Palindrome(struct node *PHead)
{
	int iCnt=0, iDigit=0, iAns=0, iTemp=0;

	while(PHead != NULL)
	{
		iAns=0, iTemp=PHead->iData;

     	while(PHead->iData != 0)
     	{
     		iDigit=PHead->iData % 10;
     		iAns=iAns*10+iDigit;

     		PHead->iData=PHead->iData/10;
     	}

     	if(iTemp == iAns)
     	{
     		printf("%d\t",iAns);
     	}
        

		PHead=PHead->PNext;
	}	
	   

}


int main()
{
  	struct node *PFirst=NULL;
  
  	InsertFirst(&PFirst, 17);
  	InsertFirst(&PFirst, 28);
  	InsertFirst(&PFirst, 11);
	
    InsertLast(&PFirst, 414);
    InsertLast(&PFirst, 6);
    InsertLast(&PFirst, 89);


    Display(PFirst);

    Check_Palindrome(PFirst);


    return 0;

}








