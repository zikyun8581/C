#include <stdio.h>
int answer(int a);
int set();
int cal(int a);

int answer(int a)
{
	if (a == 1)
	{
		printf("����");
		set();
	}
	else if (a == 2)
	{
		printf("����");
		return 0;
	}
}
int set()
{
	int a;
	printf("\n���� ���Դϴ�....\n");
	printf("�� ���� �ڸ��� ���ðڽ��ϱ�?");
	scanf_s("%d", &a);
	cal(a);
}

int cal(int a)
{
	printf("\n%d �� �ڸ� �ؼ� �� %d �� �Դϴ�.", a, a * 9000);
}

int main()
{
	int choose;
	printf("�����Ϸ��� 1, �����Ϸ��� 2�� �Է� �� ���͸� �����ּ���.\n");
	scanf_s("%d", &choose);
	answer(choose);
}