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

	printf("������ ������ �Է��� �ּ���.(����, ��, ��ø, ����, ���) : ");
	scanf("%d %d %d %d %d", &level, &power, &fast, &wise, &lucky);

	int choices;

	//while(1)�ȿ� �ڵ带 �۾��ϸ� ��� �ݺ��˴ϴ�.
	while (1)
	{
		printf("1, ��� ���� ");
		scanf("%d", &choices); //�Է��� ������ ���, �Է� �������� ��� ���°� �˴ϴ�.
		system("cls"); //�ش� ��ɾ �ۼ��ϸ� �ܼ� â�� �������ϴ�.

		if (choices == 0)
		{
			exit(0); //���α׷��� �����ϴ� �ڵ�
		}
		else if (choices == 1)
		{
			printf("���ݱ����� ������ �����մϴ�.\n");
			fprintf(fp, "%d %d %d %d %d", level, power, fast, wise, lucky);
		}
		else if (choices == 2)
		{
			printf("�Է��� ������ ��� �����մϴ�.\n");
			fp = fopen("program_data.txt", "w");
			printf("������ ������ �ٽ� �Է��� �ּ���.(����, ��, ��ø, ����, ���) : ");
			scanf("%d %d %d %d %d", &level, &power, &fast, &wise, &lucky);
		}
		else if (choices == 3)
		{
			printf("�����ص� ������ �ٽ� �ҷ��ɴϴ�.\n");
			fscanf(fp, "���� : %d, �� : %d, ��ø : %d, ���� : %d, ��� : %d", level, power, fast, wise, lucky);
			printf("���� : %d, �� : %d, ��ø : %d, ���� : %d, ��� : %d\n", level, power, fast, wise, lucky);
		}
	}

	fclose(fp);

	return 0;
}