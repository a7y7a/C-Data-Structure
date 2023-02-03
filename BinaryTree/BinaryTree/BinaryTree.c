#define _CRT_SECURE_NO_WARNINGS 1
#include"BinaryTree.h"

void PrevOrder(BTNode* root)
{
	if (!root)
	{
		printf("NULL ");
		return;
	}
	printf("%c ", root->data);
	PrevOrder(root->left);
	PrevOrder(root->right);
}

void InOrder(BTNode* root)
{
	if (!root)
	{
		printf("NULL ");
		return;
	}
	InOrder(root->left);
	printf("%c ", root->data);
	InOrder(root->right);
}

void PostOrder(BTNode* root)
{
	if (!root)
	{
		printf("NULL ");
		return;
	}
	PostOrder(root->left);
	PostOrder(root->right);
	printf("%c ", root->data);
}

int TreeSize(BTNode* root)
{
	return root == NULL ? 0 : TreeSize(root->left) + TreeSize(root->right) + 1;
}

int TreeLeaveSize(BTNode* root)
{
	if (!root)
	{
		return 0;
	}
	else if (root->left || root->right)
	{
		return TreeLeaveSize(root->left) + TreeLeaveSize(root->right);
	}
	else
	{
		return 1;
	}
}

void LevelOrder(BTNode* root)
{
	QNode q;
	QueueInit(&q);
	if (root)
	{
		QueuePush(&q, root);
	}
	while (!QueueEmpty(&q))
	{
		BTNode* front = QueueFront(&q);
		QueuePop(&q);
		printf("%c ", front->data);
		if (front->left)
		{
			QueuePush(&q, front->left);
		}
		if (front->right)
		{
			QueuePush(&q, front->right);
		}
	}
}

void DestoryTree(BTNode** proot)
{
	if (!*proot)
	{
		return;
	}
	DestoryTree(&(*proot)->left);
	DestoryTree(&(*proot)->right);
	free(*proot);
	*proot = NULL;
}