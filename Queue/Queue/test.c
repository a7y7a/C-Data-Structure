#define _CRT_SECURE_NO_WARNINGS 1
#include"queue.h"

int main()
{
	Queue q;
	QueueInit(&q);
	QueuePush(&q, 1);
	QueuePush(&q, 2);
	QueuePush(&q, 3);
	QueuePush(&q, 4);
	QueuePop(&q);
	while (!QueueEmpty(&q))
	{
		printf("%d", QueueFront(&q));
		QueuePop(&q);
	}
	QueueDestroy(&q);
	return 0;
}