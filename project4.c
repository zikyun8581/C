#include <stdio.h>
int answer(int a);
int set();
int cal(int a);

int answer(int a)
{
	if (a == 1)
	{
		printf("실행");
		set();
	}
	else if (a == 2)
	{
		printf("종료");
		return 0;
	}
}
int set()
{
	int a;
	printf("\n실행 중입니다....\n");
	printf("몇 개의 자리를 고르시겠습니까?");
	scanf_s("%d", &a);
	cal(a);
}

int cal(int a)
{
	printf("\n%d 개 자리 해서 총 %d 원 입니다.", a, a * 9000);
}

int main()
{
	int choose;
	printf("실행하려면 1, 종료하려면 2를 입력 후 엔터를 눌러주세요.\n");
	scanf_s("%d", &choose);
	answer(choose);
}