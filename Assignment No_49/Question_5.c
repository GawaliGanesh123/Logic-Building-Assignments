/* 5. Write a program which display addition of digits of element from singly linear linked list. 

Input linked list : |110|->|230|->|20|->|240|->|640|

Output : 2  5  2  6  10

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

void Addition_Of_Digits(struct node *PHead)
{
	int iCnt=0, iDigit=0, iAns=0;

	while(PHead != NULL)
	{
		iAns=0;

     	while(PHead->iData != 0)
     	{
     		iDigit=PHead->iData % 10;
     		iAns= iAns+iDigit;

     		PHead->iData=PHead->iData/10;
     	}
        
        printf("%d\n",iAns);

		PHead=PHead->PNext;
	}	
	   

}



int main()
{
  	struct node *PFirst=NULL;
  
  	InsertFirst(&PFirst, 20);
  	InsertFirst(&PFirst, 230);
  	InsertFirst(&PFirst, 110);
	
    InsertLast(&PFirst, 240);
    InsertLast(&PFirst, 640);

    Display(PFirst);

    Addition_Of_Digits(PFirst);


    return 0;

    
}















