#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct list
{
	int first;
	int second;
	int third;
	int forth;
	int fifth;
};

float avg(int sum, int count)
{
	return (float)sum / count;
	//int�� int�� ������ �Ǹ� �Ҽ��� �ڸ��� ���� ������ float�� �����༭ �Ҽ��� �ڸ��� Ȯ���մϴ�.
}

//�迭 ��ü�� ���� �����ؼ� �߾� �� Ȯ��(�迭 ����)
int center(int* numbers, int size)
{
	int result = 0;//�߾Ӱ�

	int temp; //�ӽ� ��(�� ��ȯ��)

	//��ü Ƚ�� �ݺ�
	for (int i = 0; i < size; i++)
	{
		//i�� �ݺ��Կ� ���� �ݺ��ϴ� ������ ������
		//��ü ������� 1 ���� �������� ����(ó�� ���� ���� ���� ���ϱ� ����)
		for (int j = 0; j < (size - 1) - i; j++)
		{
			//i���� ���� i+1��° ���� ���� i��° ���� �� Ŭ ����� �����Ѵ�.
			if (numbers[j] > numbers[j + 1])
			{
				temp = numbers[j]; //���� �� ����
				numbers[j] = numbers[j + 1]; //���� �� ����
				numbers[j + 1] = temp; //������ �Ѱ���
			}
		}
	}
	//������ ���� �� �߾Ӱ� = �迭�� ���� / 2 ��ġ�� �ش��ϴ� ��
	return result = numbers[size / 2];
}

int sum(int numbers[], int size)
{
	int result = 0;

	for (int i = 0; i < 5; i++)
	{
		result += numbers[i];
	}
	return result;
}

int main()
{
	int numbers[5]; //���� 5���� ���� �Է�

	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &numbers[i]);
	}

	int sum_value = sum(numbers, 5); //�迭�� �� = sum(�迭, �迭����)
	int avg_value = avg(sum_value, 5); //�迭�� ��� = avg(�迭�� ��, �迭 ����)
	int center_value = center(numbers, 5); //�迭�� �߾Ӱ� = center(�迭, �迭����)

	printf("%d\n", avg_value);
	printf("%d\n", center_value);
	
	/*
	struct list l;
	printf("���� 5���� �Է��Ͻÿ� >> ");
	scanf("%d %d %d %d %d", l.first, l.second, l.third, l.forth, l.fifth);

	int total = (l.first + l.second + l.third + l.forth + l.fifth) / (sizeof(struct list)/ sizeof(int));
	for (int i = 0; i < 5; i++)
	{

	}
	*/
	return 0;
}