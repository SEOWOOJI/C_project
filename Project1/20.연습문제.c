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
	printf("���̵� �Է��մϴ�. ");
	scanf("%s", id);

	char pw;
	printf("���̵� �Է��մϴ�. ");
	scanf("%d", pw);

	if (id == abc12324 && pw = 123456)
	{
		user_login();
	}
	else
	{
		printf("���̵� �Ǵ� ��й�ȣ�� �߸��Ǿ����ϴ�.");
	}
}

void useFunction(void)
{
	printf("������ ������ �����߽��ϴ�.");
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
	printf("���� ���ῡ �����߽��ϴ�.");
}

void on_server_disconnected(char* id, int pw)
{
	printf("���̵� �Ǵ� ��й�ȣ�� �߸��Ǿ����ϴ�.");
}

void Login()
{
	printf("���̵� �Է��մϴ�. ");
	scanf("%s", name);
	printf("��й�ȣ�� �Է��մϴ�. ");
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
	//strcmp(����, ����) == 0 �� �� ������ ���� ������ Ȯ���ϴ� �ڵ�
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