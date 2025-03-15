#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	FILE* fp = NULL;

	fp = fopen("program_data.txt", "w");

	int level;
	int power;
	int fast;
	int wise;
	int lucky;

	printf("유저의 정보를 입력해 주세요.(레벨, 힘, 민첩, 지혜, 행운) : ");
	scanf("%d %d %d %d %d", &level, &power, &fast, &wise, &lucky);

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
		else if (choices == 1)
		{
			printf("지금까지의 내용을 저장합니다.\n");
			fprintf(fp, "%d %d %d %d %d", level, power, fast, wise, lucky);
		}
		else if (choices == 2)
		{
			printf("입력한 내용을 모두 리셋합니다.\n");
			fp = fopen("program_data.txt", "w");
			printf("유저의 정보를 다시 입력해 주세요.(레벨, 힘, 민첩, 지혜, 행운) : ");
			scanf("%d %d %d %d %d", &level, &power, &fast, &wise, &lucky);
		}
		else if (choices == 3)
		{
			printf("저장해둔 내용을 다시 불러옵니다.\n");
			fscanf(fp, "레벨 : %d, 힘 : %d, 민첩 : %d, 지혜 : %d, 행운 : %d", level, power, fast, wise, lucky);
			printf("레벨 : %d, 힘 : %d, 민첩 : %d, 지혜 : %d, 행운 : %d\n", level, power, fast, wise, lucky);
		}
	}

	fclose(fp);

	return 0;
}