#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef void(*login)(void);
void setLogin(login);
void useLogin(void);
void useFunction(void);
login user_login = NULL;

int main()
{
	return 0;
}

void setLogin(login pw)
{
	user_login = pw;
}

void useLogin(void)
{
	char id;
	printf("아이디를 입력합니다. ");
	scanf("%s", id);

	char pw;
	printf("아이디를 입력합니다. ");
	scanf("%d", pw);

	if (id == abc12324 && pw = 123456)
	{
		user_login();
	}
	else
	{
		printf("아이디 또는 비밀번호가 잘못되었습니다.");
	}
}

void useFunction(void)
{
	printf("서버에 연결을 성공했습니다.");
}




typedef void (*server_connection)(char* id, int pw);
void connect_SERVER(server_connection callback);
void setting(server_connection fp);
void OnLogin(char* id, int pw);
void on_server_connected();
void on_server_disconnected();
void Login();

char uid[] = "abc12324";
int upass = 123456;

server_connection sc = NULL;

int main()
{ 
	Login();
	connect_SERVER(sc);
	return 0;
}

void connect_SERVER(server_connection callback)
{
	if (callback)
		on_server_connected();
	else
		on_server_disconnected();
}

void on_server_connected(char* id, int pw)
{
	printf("서버 연결에 성공했습니다.");
}

void on_server_disconnected(char* id, int pw)
{
	printf("아이디 또는 비밀번호가 잘못되었습니다.");
}

void Login()
{
	printf("아이디를 입력합니다. ");
	scanf("%s", name);
	printf("비밀번호를 입력합니다. ");
	scanf("%d", &pw);

	setting(OnLogin);
	sc(name, pw);
}

void setting(server_connection fp)
{
	sc = fp;
}

void OnLogin(char* id, int pw)
{
	//strcmp(문장, 문장) == 0 은 두 문장이 같은 값인지 확인하는 코드
	if (strcmp(uid,id) == 0 && upass ==pw)
	{
		printf("success");
	}
	else
	{
		sc = NULL;
		printf("fail");
	}
}