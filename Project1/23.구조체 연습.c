#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//����ü�� �̿��� ���� ��� ����� �ϼ��ϼ���.

//��°��
//p2�� ��ǥ�� 10,10 �Դϴ�.
//p1�� p2�� ��ǥ�� ���� �����ϴ�.

struct point
{
	int x;
	int y;
};

int main()
{
#pragma region �� Ǯ��
	struct point p1;
	printf("p1�� x�� ��ǥ�� �Է��ϼ��� >> ");
	scanf("%d", &p1.x);
	printf("p1�� y�� ��ǥ�� �Է��ϼ��� >> ");
	scanf("%d", &p1.y);

	struct point p2 = { 10,10 };
	printf("p2�� ��ǥ�� (%d, %d)�Դϴ�.\n", p2.x, p2.y);

	if (p1.x == p2.x && p1.y == p2.y)
	{
		printf("p1�� p2�� ��ǥ�� ���� �����ϴ�.\n");
	}
	else
	{
		printf("p1�� p2�� ��ǥ�� ���� �ٸ��ϴ�.\n");
	}
#pragma endregion

#pragma region ���� Ǯ��
	struct point p1 = { 10,10 };
	struct point p2 = { 10,10 };

	printf("p2�� ��ǥ�� %d, %d�Դϴ�.\n", p2.x, p2.y);

	if (p1.x == p2.x && p1.y == p2.y)
	{
		printf("p1�� p2�� ��ǥ�� ���� �����ϴ�.\n");
	}
	else
	{
		printf("p1�� p2�� ��ǥ�� ���� �ٸ��ϴ�.\n");
	}
#pragma endregion

	return 0;
}