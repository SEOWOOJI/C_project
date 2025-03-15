#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	FILE* fp = NULL;

	fp = fopen("program_data.txt", "w");

	int choices;
	//while(1)안에 코드를 작업하면 계속 반복됩니다.
	while (1)
	{
		printf("1, 기능 선택 ");
		scanf("%d", &choices); //입력을 진행한 경우, 입력 전까지는 대기 상태가 됩니다.
		system("cls"); //해당 명령어를 작석하면 콘솔 창이 지워집니다.

		if (choices == 0)
		{
			exit(0); //프로그램을 종료하는 코드
		}
	return 0;
}