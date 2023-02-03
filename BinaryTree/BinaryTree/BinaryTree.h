#pragma once
#include<stdio.h>
#include<stdlib.h>
#include"queue.h"

typedef char BTDataType;

typedef struct BinaryTreeNode
{
	struct BinaryTreeNode* left;
	struct BinaryTreeNode* right;
	BTDataType data;
}BTNode;

void PrevOrder(BTNode* root);
void InOrder(BTNode* root);
void PostOrder(BTNode* root);
int TreeSize(BTNode* root);
int TreeLeaveSize(BTNode* root);
void LevelOrder(BTNode* root);
void DestoryTree(BTNode* root);