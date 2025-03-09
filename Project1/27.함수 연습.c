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
	//int와 int를 나누게 되면 소수점 자리가 없기 때문에 float를 덮어줘서 소수점 자리를 확보합니다.
}

//배열 전체의 값을 조사해서 중앙 값 확인(배열 정렬)
int center(int* numbers, int size)
{
	int result = 0;//중앙값

	int temp; //임시 값(값 교환용)

	//전체 횟수 반복
	for (int i = 0; i < size; i++)
	{
		//i가 반복함에 따라 반복하는 범위가 감소함
		//전체 사이즈보다 1 작은 범위부터 시작(처음 값과 다음 값을 비교하기 때문)
		for (int j = 0; j < (size - 1) - i; j++)
		{
			//i번때 값과 i+1번째 값을 비교해 i번째 값이 더 클 경우라면 변경한다.
			if (numbers[j] > numbers[j + 1])
			{
				temp = numbers[j]; //기존 값 저장
				numbers[j] = numbers[j + 1]; //다음 값 저장
				numbers[j + 1] = temp; //기존값 넘겨줌
			}
		}
	}
	//정렬이 끝난 후 중앙값 = 배열의 개수 / 2 위치에 해당하는 값
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
	int numbers[5]; //숫자 5개에 대한 입력

	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &numbers[i]);
	}

	int sum_value = sum(numbers, 5); //배열의 합 = sum(배열, 배열개수)
	int avg_value = avg(sum_value, 5); //배열의 평균 = avg(배열의 합, 배열 개수)
	int center_value = center(numbers, 5); //배열의 중앙값 = center(배열, 배열개수)

	printf("%d\n", avg_value);
	printf("%d\n", center_value);
	
	/*
	struct list l;
	printf("정수 5개를 입력하시오 >> ");
	scanf("%d %d %d %d %d", l.first, l.second, l.third, l.forth, l.fifth);

	int total = (l.first + l.second + l.third + l.forth + l.fifth) / (sizeof(struct list)/ sizeof(int));
	for (int i = 0; i < 5; i++)
	{

	}
	*/
	return 0;
}