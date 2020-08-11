#include <stdlib.h>
#include <stdio.h>

typedef struct node
{
    int id;
    int number;
    struct node* next;    
}node_t;

void CreateLists(int quantityOfRow, int quantityOfСolumns);
void ShowList(node_t* head, int quantityOfRow, int quantityOfСolumns);

void CreateLists(int quantityOfRow, int quantityOfСolumns)
{
	node_t* head = NULL;
	head = (node_t*)malloc(sizeof(node_t));
	head->next = NULL;
	
	node_t* pointer = head;
	
	int totalList = quantityOfRow * quantityOfСolumns;
	printf("insert numbers \n");
	if(totalList == 0)
	{
		printf("%d * %d = 0! Mamkin SCHETOVOD! \n",quantityOfRow, quantityOfСolumns );
	}
	else
	{
		for (int i = 0; i < totalList; i++)
		{ 
			pointer->id = i;
			pointer->number;
			scanf("%d", &pointer->number);
			pointer->next = (node_t*)malloc(sizeof(node_t));
			pointer->next->next = NULL;
			pointer = pointer->next;
		}
		ShowList(head, quantityOfRow, quantityOfСolumns);
	}
}
void ShowList(node_t* head, int quantityOfRow, int quantityOfСolumns)
{
    node_t* pointer = head;
    printf("Your numbers \n");
    int i = 0;
    while(pointer->next != NULL)
    {
        if (i == quantityOfСolumns)
        {
            printf("\n");
            i = 0;
        }
		printf("%d",pointer->number);
		pointer = pointer->next;
		i++;
    }
}
int main()
{
    int quantityOfRow;
    printf("Enter quantityOfRow \n");
    scanf("%d", &quantityOfRow);
	
    int quantityOfСolumns;
    printf("Enter quantityOfСolumns \n");
    scanf(" %d", &quantityOfСolumns);
	
    CreateLists(quantityOfRow, quantityOfСolumns);
}

