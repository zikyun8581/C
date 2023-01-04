#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int answer;
	int correct;

	printf("0부터 10까지의 수를 입력하세요. : ");
	scanf_s("%d", &answer);

	srand(time(NULL));
	correct = rand()%10;

	if (answer == correct)
		printf("정답입니다!!");
	else if(answer!=correct && answer<=10)
	{
		printf("오답입니다\n");
		printf("정답은 %d 었습니다.", correct);
	}
	if (answer > 10)
	{
		printf("잘못된 입력입니다.");
	}
}
