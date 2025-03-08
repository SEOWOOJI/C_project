#include <stdio.h>
#include <stdarg.h>
// �Լ��� �������� ���� ������ ���� ���� ���� ��� ����ϴ� �ڵ�(��������)

//c���� �������� ����ϴ� ���
//1. #include <stdarg.h>�� �ڵ忡 �߰��մϴ�.
//2. �Լ��� �Ű������� ...�� �������� �Դϴ�.
//3. ���������� ���� ���޹��� ���� �� ���� �����ϴ�. �׷��� ó���� �޴� ���� ���� ���� ���� ������
//   �� �� �ִ� �����͸� ������ �ݴϴ�.
//4. va_list�� ���޹��� �������ڸ� ������ �������Դϴ�.
//5. va_start(args, count)�� �������ڿ� ���� ó���� �����մϴ�.
//6. va_args(args, �ڷ���)�� args�κ��� �ϳ��� ���� �������� �� ���� �ڷ������� ����մϴ�.
//7. va_end(args) : �������ڿ� ���� ó���� �����ϰ� ����� �����մϴ�. (�������� ������ ���α׷��� ������ ���� �ʼ��� ����)

void printNumbers(int count, ...)
{
	va_list args; 
	//���޹��� ���� �������� �����մϴ�.
	va_start(args, count);
	//������κ���, count������ �۾��� �����մϴ�.

	for (int i = 0; i < count; i++)
	{
		printf("%d\n", va_arg(args, int));
		//va_arg(���� �̸�, �ڷ���)�� ����
		//������ �ִ� �ڷ��� �������� ���� �޾ƿɴϴ�.
	}
	printf("\n");
	va_end(args); //�۾�����
}

//���� ���Ǵ� �Ű������� ���ڸ� �˾ƺ���
//1. ���ڿ��� �޴� ���
void greeting(char* name)
{
	printf("greeting!\n");
	printf("Nice to meet you  %s\n", name);
}
//2.�迭�� �޴� ���
//�迭�� ������ ��쿡�� c�� �ڵ������� �迭�� ���̸� ��
void printarry(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d\n", arr[i]);
	}
	printf("\n");
}

//�迭�� �ּ��̱� ������ ������ ������ ���� �� �ֽ��ϴ�.
//�� ��, �߰����� �۾� ���� �״�� ����� �� �ֽ��ϴ�.
void printarryptr(int*arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d\n", arr[i]);
	}
	printf("\n");
}


int main()
{
	printNumbers(5, 10, 20, 30, 40, 50);
	printNumbers(3, 5, 6, 7);

	//���ڿ� �ۼ�
	char name[] = "Grace";
	greeting(name); //name�� �迭�̹Ƿ� �ּ��Դϴ�. ���� &�� ������ �ʽ��ϴ�.

	int arr[] = { 1,2,3,4,5 };
	printarry(arr, 5);
	printarryptr(arr, 5);

	return 0;
}