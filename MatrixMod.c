#include <stdlib.h>
#include <stdio.h>

typedef struct node
{
    int id;
    int number;
    struct node* next;    
}node_t;

int CreateLists(int quantityOfRows, int quantityOfСolumns);
void ShowList(node_t* head, int quantityOfRows, int quantityOfСolumns);

int CreateLists(int quantityOfRows, int quantityOfСolumns)
{
	int totalList = quantityOfRows * quantityOfСolumns;
	printf("insert numbers \n");
	if(totalList == 0)
	{
		printf("%d * %d = 0! Mamkin SCHETOVOD! \n", quantityOfRows, quantityOfСolumns );
		return 1;
	}
	node_t* head = NULL;
	head = (node_t*)malloc(sizeof(node_t));
	head->next = NULL;

	node_t* pointer = head;
	for (int i = 0; i < totalList; i++)
	{ 
		pointer->id = i;
		pointer->number;
		scanf("%d", &pointer->number);
		pointer->next = (node_t*)malloc(sizeof(node_t));
		pointer->next->next = NULL;
		pointer = pointer->next;
	}
	ShowList(head, quantityOfRows, quantityOfСolumns);
	return 0;
}
void ShowList(node_t* head, int quantityOfRows, int quantityOfСolumns)
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
    int quantityOfRows;
    printf("Enter quantityOfRows \n");
    scanf("%d", &quantityOfRows);
	
    int quantityOfСolumns;
    printf("Enter quantityOfСolumns \n");
    scanf(" %d", &quantityOfСolumns);
	
    CreateLists(quantityOfRows, quantityOfСolumns);
}

