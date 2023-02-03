#define _CRT_SECURE_NO_WARNINGS 1
#include"BinaryTree.h"

int main()
{
	BTNode* a = (BTNode*)malloc(sizeof(BTNode));
	a->data = 'a';
	a->left = NULL;
	a->right = NULL;

	BTNode* b = (BTNode*)malloc(sizeof(BTNode));
	b->data = 'b';
	b->left = NULL;
	b->right = NULL;

	BTNode* c = (BTNode*)malloc(sizeof(BTNode));
	c->data = 'c';
	c->left = NULL;
	c->right = NULL;

	BTNode* d = (BTNode*)malloc(sizeof(BTNode));
	d->data = 'd';
	d->left = NULL;
	d->right = NULL;

	BTNode* e = (BTNode*)malloc(sizeof(BTNode));
	e->data = 'e';
	e->left = NULL;
	e->right = NULL;

	a->left = b;
	a->right = c;
	b->left = d;
	b->right = e;

	PrevOrder(a);
	printf("\n");
	InOrder(a);
	printf("\n");
	PostOrder(a);
	printf("\n");
	printf("%d\n", TreeSize(a));
	printf("%d\n", TreeLeaveSize(a));
	LevelOrder(a);
	printf("\n");
	DestoryTree(&a);
	return 0;
}