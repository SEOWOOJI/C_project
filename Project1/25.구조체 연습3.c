#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct student
{
	int id;
	char name[20];
};

void compare(struct student s1, struct student s2)
{
	//아이디에 대한 비교(정수끼리의 비교)가 일치하고,
	//이름에 대한 비교(문자열끼리의 비교)가 일치하는 경우
	if (s1.id == s2.id && strcmp(s1.name, s2.name) == 0)
	{
		printf("같은 값입니다.");
	}
	else
	{
		printf("다른 값입니다.");
	}
}

int main()
{
	struct student s1 = { 1, "Kane" };
	struct student s2 = { 1, "Kane" };

	compare(s1, s2);
	//해당 코드를 실행했을 때, s1과 s2가 같은 값이면 "같은 값입니다."가 나오도록 함수 compare를 설계하시오.

	return 0;
}