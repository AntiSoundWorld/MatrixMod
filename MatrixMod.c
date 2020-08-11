#include <stdlib.h>
#include <stdio.h>

typedef struct node
{
    int id;
    int number;
    struct node* next;    
}node_t;

void CreateLists(int quantityOfRow, int quantityOfClmn);
void ShowList(node_t* head, int quantityOfRow, int quantityOfClmn);

void CreateLists(int quantityOfRow, int quantityOfClmn)
{
    node_t* head = NULL;
    head = (node_t*)malloc(sizeof(node_t));
    head->next = NULL;
    node_t* pointer = head;
	int totalList = quantityOfRow * quantityOfClmn;
	printf("insert numbers \n");
	for (int i = 0; i < totalList; i++)
	{
		pointer->id = i;
		pointer->number;
		scanf("%d", &pointer->number);
		pointer->next = (node_t*)malloc(sizeof(node_t));
		pointer->next->next = NULL;
		pointer = pointer->next;
	}
    ShowList(head, quantityOfRow, quantityOfClmn);
}
void ShowList(node_t* head, int quantityOfRow, int quantityOfClmn)
{
    node_t* pointer = head;
    printf("Your numbers \n");
    int i = 0;
    while(pointer->next != NULL)
    {
        if (i == quantityOfClmn)
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
    int quantityOfClmn;
    printf("Enter quantityOfClmn \n");
    scanf(" %d", &quantityOfClmn);
    CreateLists(quantityOfRow, quantityOfClmn);
}

