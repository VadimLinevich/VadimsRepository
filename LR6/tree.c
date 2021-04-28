
#include <stdio.h>
#include <conio.h>
#include <malloc.h>
#include <stdlib.h>
typedef struct _tnode
{
	int data;
	struct _tnode *left;
	struct _tnode *right;
} tnode;
 tnode* addnoderandom(int x, tnode* tree, int n)// Добавление узла в произвольное дерево
{
	if (tree == NULL)
	{
		tree = (tnode*)malloc(sizeof(tnode));
		if (tree == NULL)
		{
			printf("Memory not allocated");
			exit(1);
		}
		tree->data = x;
		tree->left = NULL;
		tree->right = NULL;
	}
	else
	{
		if (n % 2 == 0)
		{
			tree->left = addnoderandom(x, tree->left, 2);
		}
		else
		{
			tree->right = addnoderandom(x, tree->right, 1);
		}
	}
	return tree;
}
void PreOrder(tnode *tree)
{
	if (tree != NULL)
	{
		printf("%d ", tree->data);
		PreOrder(tree->left);
		PreOrder(tree->right);
	}
}
tnode* addnode(int x, tnode* tree)// добавление узла в бинарное дерево поиска
{
	if (tree == NULL)
	{
		tree = (tnode*)malloc(sizeof(tnode));
		if (tree == NULL)
		{
			printf("Memory not allocated");
			exit(1);
		}
		tree->data = x;
		tree->left = NULL;
		tree->right = NULL;
	}
	else
	{
		if (x < tree->data)
		{
			tree->left = addnode(x, tree->left);
		}
		else
		{
			tree->right = addnode(x, tree->right);
		}
	}
	return tree;
}

int main()
{
	int k, temp, count, element;
	tnode* root;
	tnode* binartree;
	root = NULL;
	binartree = NULL;
	printf("How many tree elements do you want to enter?\n");
	scanf("%d", &count);
	k = count;
	int *a = (int*)malloc(k * sizeof(int));
    if (a == NULL)
	{
		printf("Memory not allocated");
		exit(1);
	}
	for (int i = 0; i < count; i++)// создаём произвольное бинарное дерево
	{
		printf("Enter tree element ");
		scanf("%d", &element);
		a[i] = element;// заполняем массив элементами произвольного бинарного дерева
		if (element % 2 == 0)
		{
			root = addnoderandom(element, root, 2);
		}
		else
		{
			root = addnoderandom(element, root, 1);
		}
	}
	printf("random binaar tree:\n");
	PreOrder(root);
	for (int i = 0; i < k - 1; i++)// сортируем массив
	{
		for (int j = 0; j < k - i - 1; j++)
		{
			if (a[j] > a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	for (int i = 0; i < k; i++)// удаляем повторяющиеся элементы
	{
		for (int j = i + 1; j < k; j++)
		{
			if (a[i] == a[j])
			{
				for (int z = j; z < k; z++)
				{
					temp = a[z];
					a[z] = a[z+1];
					a[z+1] = temp;
				}
				k = k - 1;
				j = j - 1;
			}
		}
	}
	binartree = addnode(a[k/2], binartree);// делаем корнем среднее значение, а затем удаляем корень
	for (int i = k / 2; i < k; i++)
	{
		temp = a[i];
		a[i] = a[i+1];
		a[i+1] = temp;
	}
	k = k - 1;
	for (int i = 0; i < k; i++)//создаем бинарное дерево поиска
	{
		binartree = addnode(a[i], binartree);
	}
	printf("\n");
	printf("search binaar tree:\n");
	PreOrder(binartree);
	getch();
	return 0;
}