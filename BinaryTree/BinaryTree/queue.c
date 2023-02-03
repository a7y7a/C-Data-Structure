#define _CRT_SECURE_NO_WARNINGS 1
#include"queue.h"

void QueueInit(Queue* q)
{
	assert(q);
	q->head = q->tail = NULL;
}

void QueueDestroy(Queue* q)
{
	assert(q);
	QNode* cur = q->head;
	while (cur)
	{
		QNode* next = cur->next;
		free(cur);
		cur = next;
	}
	q->head = q->tail = NULL;
}

void QueuePush(Queue* q, QDataType x)
{
	assert(q);
	QNode* newnode = (QNode*)malloc(sizeof(QNode));
	if (newnode == NULL)
	{
		printf("malloc fail\n");
		exit(-1);
	}
	newnode->data = x;
	newnode->next = NULL;
	if (!q->head)
	{
		q->head = q->tail = newnode;
	}
	else
	{
		q->tail->next = newnode;
		q->tail = newnode;
	}
}

void QueuePop(Queue* q)
{
	assert(q);
	assert(!QueueEmpty(q));
	QNode* next = q->head->next;
	if (next)
	{
		free(q->head);
		q->head = next;
	}
	else
	{
		free(q->head);
		q->head = q->tail = NULL;
	}
}

QDataType QueueFront(Queue* q)
{
	assert(q);
	assert(!QueueEmpty(q));
	return q->head->data;
}

QDataType QueueBack(Queue* q)
{
	assert(q);
	assert(!QueueEmpty(q));
	return q->tail->data;
}

bool QueueEmpty(Queue* q)
{
	assert(q);
	return q->head == NULL;
}

int QueueSize(Queue* q)
{
	assert(q);
	int i = 0;
	QNode* cur = q->head;
	while (cur)
	{
		cur = cur->next;
		i++;
	}
	return i;
}