#define _CRT_SECURE_NO_WARNINGS 1
#include"Stack.h"

int main()
{
	ST s;
	STInit(&s);
	s.top++;
	STPush(&s, 1);
	STPush(&s, 2);
	STPush(&s, 3);
	STPush(&s, 4);
	STPop(&s);
	printf("%d ", STTop(&s));
	printf("%d ", STSize(&s));
	printf("%d \n", STEmpty(&s));
	while (s.top)
	{
		printf("%d ", STTop(&s));
		STPop(&s);
	}
	STDestor(&s);
	return 0;
}