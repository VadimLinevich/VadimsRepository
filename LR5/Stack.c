

#include <stdio.h>
#include <conio.h>
#include <malloc.h>
#include <stdlib.h>

typedef struct _node
{
	int data;
	struct _node *next;
}node;
typedef struct
{
	node *head;
	node *tail;
}List;
void createnode(List *list, int value)//Добавление в конец списка
{
	node *temp;
	temp = (node*)malloc(sizeof(node));
	if (temp == NULL)
	{
		printf("Memory not allocated");
		exit(1);
	}
	temp->data = value;
	temp->next = NULL;
	if (list->head == NULL)
	{
		list->head = temp;
		list->tail = temp;
		temp = NULL;
	}
	else
	{
		list->tail->next = temp;
		list->tail = temp;
	}
}
void deletelist(List **list)
{
	node *delete = (*list)->head;
	node *temp = NULL;
	while (delete)
	{
		temp = delete->next;
		free(delete);
		delete = temp;
	}
	free(*list);
	(*list) = NULL;
}
void display(List *list)
{
	node *temp;
	temp = (node*)malloc(sizeof(node));
	if (temp == NULL)
	{
		printf("Memory not allocated");
		exit(1);
	}
	temp = list->head;
	while(temp != NULL)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
}
void delete_position(List *list, int pos)
{
	node *current;
	current = (node*)malloc(sizeof(node));
	if (current == NULL)
	{
		printf("Memory not allocated");
		exit(1);
	}
	node *previous;
	previous = (node*)malloc(sizeof(node));
	if (previous == NULL)
	{
		printf("Memory not allocated");
		exit(1);
	}
	current = list->head;
	for (int i = 1; i < pos; i++)
	{
		previous = current;
		current = current->next;
	}
	previous->next = current->next;
}
List* createlist()
{
	List *temp;
	temp = (List*)malloc(sizeof(List));
	if (temp == NULL)
	{
		printf("Memory not allocated");
		exit(1);
	}
	temp->head = NULL;
	temp->tail = NULL;
	return temp;
}
int main() 
{
	int n,t;
	n = 1;
	t = 0;
	List *stack1 = createlist();//создаю два стека и заполняю их
	createnode(stack1, 12);
	createnode(stack1, 38);
	createnode(stack1, 42);
	createnode(stack1, 12);
	createnode(stack1, 23);
	display(stack1);
	List *stack2 = createlist();
	createnode(stack2, 38);
	createnode(stack2, 12);
	createnode(stack2, 78);
	createnode(stack2, 12);
	createnode(stack2, 38);
	createnode(stack2, 42);
	printf("\n");
	display(stack2);
	List *stack3 = createlist();
	stack3 = stack1;
	node *temp1;
	temp1 = (node*)malloc(sizeof(node));
	if (temp1 == NULL)
	{
		printf("Memory not allocated");
		exit(1);
	}
	temp1 = stack2->head;
	while(temp1 != NULL)//заношу в третий стек объединение первого и второго
	{
		node *temp2;
		temp2 = (node*)malloc(sizeof(node));
		if (temp2 == NULL)
		{
			printf("Memory not allocated");
			exit(1);
		}
		temp2->data = temp1->data;
		temp2->next = NULL;
		if (stack3->head == NULL)
		{
			stack3->head = temp2;
			stack3->tail = temp2;
			temp2 = NULL;
		}
		else
		{
			stack3->tail->next = temp2;
			stack3->tail = temp2;
		}
		temp1 = temp1->next;
	}
	printf("\n");
	display(stack3);
	node *temp3;
	temp3 = (node*)malloc(sizeof(node));
	if (temp3 == NULL)
	{
		printf("Memory not allocated");
		exit(1);
	}
	temp3 = stack3->head;
	node *temp4;
	temp4 = (node*)malloc(sizeof(node));
	if (temp4 == NULL)
	{
		printf("Memory not allocated");
		exit(1);
	}
	temp4 = stack3->head;
	while (temp3 != NULL)//удаляю повторяющиеся элементы со стека
	{
		temp4 = temp3->next;
		t = t + 1;
		n = t;
		while (temp4 != NULL)
		{
			n = n + 1;
			if (temp4->data == temp3->data)
			{

				delete_position(stack3, n);
				n = n - 1;
			}
			temp4 = temp4->next;
		}
		temp3 = temp3->next;
	}
	printf("\n");
	display(stack3);
	deletelist(&stack1);
	deletelist(&stack2);
	deletelist(&stack3);
	getch();
	return 0;
}