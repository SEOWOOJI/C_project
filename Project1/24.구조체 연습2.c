#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct user
{
	char id[40]; //e.g.) sample@naver.com
	char pw[50];    //e.g.) Rkxkskk123321
	char gender; // 'M', 'F'
};

//위의 구조체 user를 이용해 다음과 같은 출력 화면을 완성하세요.

//아이디를 입력해주세요 : sample12@naver.com
//비밀번호를 입력해주세요 : koreaedu1384!@
//아이디를 입력해주세요 : sample13@naver.com
//비밀번호를 입력해주세요 : koreaedu1384!@
//아이디를 입력해주세요 : sample14@naver.com
//비밀번호를 입력해주세요 : koreaedu1384!@


int main()
{
#pragma region 내 풀이
	/*
	struct user u1;
	struct user u2;
	struct user u3;
	
	//u1
	printf("아이디를 입력해주세요 : ");
	scanf("%s", u1.id);
	printf("비밀번호를 입력해주세요 : ");
	scanf("%s", u1.pw);
	printf("성별을 입력해주세요 : ");
	scanf("%c", &u1.gender);

	//u2
	printf("아이디를 입력해주세요 : ");
	scanf("%s", u2.id);
	printf("비밀번호를 입력해주세요 : ");
	scanf("%s", u2.pw);
	printf("성별을 입력해주세요 : ");
	scanf("%c", &u2.gender);

	//u3
	printf("아이디를 입력해주세요 : ");
	scanf("%s", u3.id);
	printf("비밀번호를 입력해주세요 : ");
	scanf("%s", u3.pw);
	printf("성별을 입력해주세요 : ");
	scanf("%c", &u3.gender);
	*/
#pragma endregion

#pragma region 정식 풀이
	struct user table[3];

	for (int i = 0; i < 3; i++)
	{
		printf("아이디를 입력해주세요 : ");
		scanf("%s", table[i].id);
		getchar();

		printf("비밀번호를 입력해주세요 : ");
		scanf("%s", table[i].pw);
		getchar();

		printf("성별을 입력해주세요 : ");
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