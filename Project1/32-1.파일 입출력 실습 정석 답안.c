#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	FILE* fp = NULL;

	fp = fopen("program_data.txt", "w");

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
	return 0;
}