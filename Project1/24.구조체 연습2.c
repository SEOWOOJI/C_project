#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct user
{
	char id[40]; //e.g.) sample@naver.com
	char pw[50];    //e.g.) Rkxkskk123321
	char gender; // 'M', 'F'
};

//���� ����ü user�� �̿��� ������ ���� ��� ȭ���� �ϼ��ϼ���.

//���̵� �Է����ּ��� : sample12@naver.com
//��й�ȣ�� �Է����ּ��� : koreaedu1384!@
//���̵� �Է����ּ��� : sample13@naver.com
//��й�ȣ�� �Է����ּ��� : koreaedu1384!@
//���̵� �Է����ּ��� : sample14@naver.com
//��й�ȣ�� �Է����ּ��� : koreaedu1384!@


int main()
{
#pragma region �� Ǯ��
	/*
	struct user u1;
	struct user u2;
	struct user u3;
	
	//u1
	printf("���̵� �Է����ּ��� : ");
	scanf("%s", u1.id);
	printf("��й�ȣ�� �Է����ּ��� : ");
	scanf("%s", u1.pw);
	printf("������ �Է����ּ��� : ");
	scanf("%c", &u1.gender);

	//u2
	printf("���̵� �Է����ּ��� : ");
	scanf("%s", u2.id);
	printf("��й�ȣ�� �Է����ּ��� : ");
	scanf("%s", u2.pw);
	printf("������ �Է����ּ��� : ");
	scanf("%c", &u2.gender);

	//u3
	printf("���̵� �Է����ּ��� : ");
	scanf("%s", u3.id);
	printf("��й�ȣ�� �Է����ּ��� : ");
	scanf("%s", u3.pw);
	printf("������ �Է����ּ��� : ");
	scanf("%c", &u3.gender);
	*/
#pragma endregion

#pragma region ���� Ǯ��
	struct user table[3];

	for (int i = 0; i < 3; i++)
	{
		printf("���̵� �Է����ּ��� : ");
		scanf("%s", table[i].id);
		getchar();

		printf("��й�ȣ�� �Է����ּ��� : ");
		scanf("%s", table[i].pw);
		getchar();

		printf("������ �Է����ּ��� : ");
		scanf("%c", &table[i].gender);
		getchar();
	}

	printf("================================================\n");
	for (int i = 1; i < 4; i++)
	{
		printf("%d. %s %s %c\n", i, table[i - 1].id, table[i - 1].pw, table[i - 1].gender);
	}
	printf("================================================\n");
#pragma endregion

	return 0;
}