#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#pragma region 필기
//if문 사용 반법
//if(조건식)
//{
// 조건식이 만족할 경우 실행할 명령문;
//}

//if - else문
//if(조건식)
//{
// 조건식이 만족할 경우 실행할 명령문;
//}
//else
//{
// 조건식이 만족하지 않을 경우 실행할 명령문;
//}

//if - else if문
//if(조건식)
//{
// 조건식이 만족할 경우 실행할 명령문;
//}
//else if(조건식2)
//{
// 위의 조건식이 만족하지 않고 조건식2가 만족하고 있는 경우 실행할 명령문;
//}
#pragma endregion

int main()
{
	int num1, num2;

	printf("두 개의 정수를 입력해주세요.(단, 큰 수를 먼저 입력합니다.) >> ");
	scanf("%d %d", &num1, &num2);

	if (num1 > num2)
	{
		printf("두 수의 곱은 %d입니다.\n", num1 * num2);
	}
	else
	{
		printf("num1이 num2보다 큰 값이어야 합니다.\n");
	}

	int g;

	printf("성적을 입력하십시오.(0 ~ 100) >>");
	scanf("%d", &g);

	//[일반적인 풀이]
	//if (g > 100)
	//{
	//	printf("잘못된 입력입니다.\n");
	//}
	//else if (g < 0)
	//{
	//	printf("잘못된 입력입니다.\n");
	//}
	if (g < 0 || g > 100) // A or B : 조건 A 또는 조건 B가 만족할 경우 실행
	{
		printf("잘못된 입력입니다.\n");
	}
	else if (g >= 60)
	{
		printf("합격\n");
	}
	else if (g < 60)
	{
		printf("불합격\n");
	}

	if (g >= 60)
	{
		printf("합격\n");
	}
	if (g < 60)
	{
		printf("불합격\n");
	}
	if (g > 100, g < 0)
	{
		printf("잘못된 입력입니다.");
	}

	//조건식을 2개 이상 사용하는 방법
	//a and b : 비트연산 기호 &을 2번 작성
    // e.g.) score >= 0 && score <= 100
	//       점수는 0이상 100 이하인 조건
	//a or b : 비트연산 기호 |을 2번 작성
	// e.g.) score < 0 || score > 100
	//       점수는 0보다 작거나, 100보다 큰 조건

	

	return 0;
}