#include <stdio.h> //����� ����
#include <stdarg.h> // �������� ����
#include <math.h> //���б�� ����

int Quadformula(a, b, c)
{ 
	if (b % 2 == 0)
	{
		return ((-b) + sqrt((b ^ 2) - (a * c))) / a;
	}
	else
	{
		return ((-b) + sqrt((b ^ 2) - (a * c))) / 2 * a;
	}
}

int printRank(a)
{
	if (a = 1, 11, 21)
	{
		printf("%dst\n", a);
	}
	else if (a = 2, 12)
	{
		printf("%dnd\n", a);
	}
	else if (a = 3, 13)
	{
		printf("%drd\n", a);
	}
	else
	{
		printf("%dth\n", a);
	}
}

void average(int count, ...)
{
	va_list args;
	va_start(args, count);
	total = 0;
	for (int i = 0; i < count; i++)
	{
		total += args[i];
	}
	result = total / (i + 1);
	printf("%.2f", result);
}

int isOdd(a)
{
	if (a % 2 == 0)
	{
		printf("NO");
	}
	else
	{
		printf("YES");
	}
}



int main()
{
	printf("root 4 = %.2f\n", sqrt(4));

	//1.X2-2x = 2�� Ǯ���Ͻÿ�.
	double a = 1;
	double b = -2;
	double c = -2;
	float result = Quadformula(a,b,c);
	// ��Ʈ : 2�� �������� Ǯ�� ���ؼ� ���� ������ �̿��غ��ô�.

	//2. ���� ������ �����ϴ� printRank�� �����ϼ���.
	int rank = 1;
	printRank(rank); //1st
	rank = 2;
	printRank(rank); //2nd
	rank = 3;
	printRank(rank); //3rd
	//1st, 2nd, 3rd, 4th, ... 21st

	//3. ���� ������ �����ϴ� average�� �����ϼ���.
	float result1 = average(3, 100, 95, 90); //95.00
	float result2 = average(4, 100, 95, 90, 85); //91.25
	//��Ʈ : printf("%.2f", value);�� Ȱ���ϸ� �Ҽ��� 2�ڸ����� ��°���

	//4. ���������� �����ϴ� isOdd�� �����ϼ���.
	isOdd(3); //"YES"
	isOdd(4); //"NO"
	isOdd(5); //"YES"

	//5.���� ������ �����ϴ� getPrime�� �����ϼ���.

	for (int i = 1; i <= 10; i++)
	{
		if (getPrime(i) == 1)
		{
			printf("�� ���� �Ҽ��Դϴ�.\n");
		}
		else
		{
			printf("�� ���� �Ҽ��� �ƴմϴ�/\n");
		}
	}
	return 0;
}