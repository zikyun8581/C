#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random();
int answer(int a);


int random()
{
	int i;
	srand(time(NULL));
	i = rand()%2;
}

int answer(int a)
{
	if (a == random())
		printf("�����Դϴ�!!");
	else if (a != random() && (a <= 5 && a >= 0))
		printf("�����Դϴ�");
	else
		printf("�߸� �Է��Ͽ����ϴ�.");
}

int main()
{
	int a;
	printf("0~5������ ���ڸ� �Է��� �ּ��� : ");
	scanf_s("%d", &a);
	answer(a);
}