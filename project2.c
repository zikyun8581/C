#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int answer;
	int correct;

	printf("0���� 10������ ���� �Է��ϼ���. : ");
	scanf_s("%d", &answer);

	srand(time(NULL));
	correct = rand()%10;

	if (answer == correct)
		printf("�����Դϴ�!!");
	else if(answer!=correct && answer<=10)
	{
		printf("�����Դϴ�\n");
		printf("������ %d �����ϴ�.", correct);
	}
	if (answer > 10)
	{
		printf("�߸��� �Է��Դϴ�.");
	}
}
