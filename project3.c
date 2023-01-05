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
		printf("정답입니다!!");
	else if (a != random() && (a <= 5 && a >= 0))
		printf("오답입니다");
	else
		printf("잘못 입력하였습니다.");
}

int main()
{
	int a;
	printf("0~5까지의 숫자를 입력해 주세요 : ");
	scanf_s("%d", &a);
	answer(a);
}