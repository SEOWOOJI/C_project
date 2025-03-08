#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//문항에 대한 저장(배열)
	//자료형 배열명[] = {값1, 값2, 값3, 값4,...};

	//배열의 값 하나는 배열명[값의 위치]로 




	int selected[] = {0,0,0,0,0,0,0,0,0,0,0,0,};

	system("title 숲속 동물 테스트");
	printf("어느날 잠에서 깬 당신은\n내몸이 인간의 몸이 아님을 느낍니다.\n\n숲속의 동물이 된 나는\n무엇을 하고 있을까요?\n");
	int select;
	printf("1, 숲속으로 떠나기 ");
	scanf("%d", &select);
	system("cls"); //콘솔 화면 지우기

	//[1번 문항]
	printf("일어나보니 오랜만에\n깨끗한 하늘이 보인다면\n");
	printf("\t1.\"화창한데 오늘 뭐하지?\n\t뭐할지 고민된다.\n");
	printf("\t2.\"기분좋은 일들이 생길 것 같은 날이야!\n\t일단 기분이 좋다.\n");
	scanf("%d", &select);

	//[2번 문항]
	system("cls");
	printf("숲속으로 외출하기전,\n");
	printf("1. 생각나는 대로 챙겨 나간다.");
	printf("2. 미리 준비해둔 옷과 가방을 챙겨 나간다.");
	scanf("%d", &select);
	if (select == 1)
	{
		selected[0] = 1;
	}
	else if (select == 2)
	{
		selected[0] == 2;
	}

	//[3번 문항]
	system("cls");
	printf("처음 온 숲속을 산책할 때\n");
	printf("1. 입구에 있는 지도를 보고\n\t어디 갈 지 무엇을 볼 지 정한다.\n");
	printf("2. 지도를 한번 쓱 보고 발길 닿는 대로 간다.\n");
	scanf("%d", &select);
	if (select == 1)
	{
		selected[0] = 1;
	}
	else if (select == 2)
	{
		selected[0] == 2;
	}
	//[4번 문항]
	system("cls");
	printf("귀여운 다람쥐들을 맍난다면,\n");
	printf("1. 처음 보는 동물들도 모두 친구친구!\n\t먼저 가서 반갑게 말건다.");
	printf("2. 귀여워서 심멎이지만 멀리서 지켜본다.\n");
	scanf("%d", &select);
	if (select == 1)
	{
		selected[0] = 1;
	}
	else if (select == 2)
	{
		selected[0] == 2;
	}
	//[5번 문항]
	system("cls");
	printf("다람쥐 친구가 피부병이 났다고 하소연을 했다.\n");
	printf("1. \"피부에 좋은 친환경 제품을 써보는 건 어때?\"\n\t해결방안을 제시한다.\n");
	printf("2. \"아프겠다...어떡해ㅠㅠㅠ\"\n\t같이 아픔에 공감해준다.\n");
	scanf("%d", &select);
	if (select == 1)
	{
		selected[0] = 1;
	}
	else if (select == 2)
	{
		selected[0] == 2;
	}
	//[6번 문항]
	system("cls");
	printf("사람들이 나무를 베어가 소중한 숲속이 황량해진것을 본다면\n");
	printf("1. 나의 정들었던 공간이 망가진 것에 슬퍼한다.\n");
	printf("2. 조만간 새 보금자리를 찾기로 마음 먹는다.\n");
	scanf("%d", &select);
	if (select == 1)
	{
		selected[0] = 1;
	}
	else if (select == 2)
	{
		selected[0] == 2;
	}
	//[7번 문항]
	system("cls");
	printf("한 여름에 눈이 온다는 기후 변화 소식을 듣는다면\n");
	printf("1. \"우리가 현실적으로 개선할 수 있는게 뭘까?\"현실적으로 고민해본다.\n");
	printf("2. \"앞으로 숲도...지구도 다 망가지는거 아냐?\"미래를 걱정한다.\n");
	scanf("%d", &select);
	if (select == 1)
	{
		selected[0] = 1;
	}
	else if (select == 2)
	{
		selected[0] == 2;
	}
	//[8번 문항]
	system("cls");
	printf("사람들이 집 앞 시냇가에 쓰레기를 버리고 있다면?\n");
	printf("1. 다가가서 쓰레기를 가져가라고 눈치를 준다.\n");
	printf("2. 소란 일으키기 싫으니 그냥 내가 치운다.\n");
	scanf("%d", &select);
	if (select == 1)
	{
		selected[0] = 1;
	}
	else if (select == 2)
	{
		selected[0] == 2;
	}
	//[9번 문항]
	system("cls");
	printf("숲속 환경문제로 급하게 동물 회의가 열렸다.\n");
	printf("1. 그동안 내가 보고 느낀 것들을 적극적으로 설명한다.\n");
	printf("2. 다른 동물들은 어떻게 생각하는지 먼저 들어본다.\n");
	scanf("%d", &select);
	if (select == 1)
	{
		selected[0] = 1;
	}
	else if (select == 2)
	{
		selected[0] == 2;
	}
	//[10번 문항]
	system("cls");
	printf("곰이 자신에겐 사이즈가 안 맞는다며 나에게 딱 맞는 옷을 줬다.가장 먼저 든 생각은?\n");
	printf("1. '나를 생각하고 선물을 주다니...'감동 받는다.\n");
	printf("2. '나한테 딱 맞는 사이즈네!'신난다.\n");
	scanf("%d", &select);
	if (select == 1)
	{
		selected[0] = 1;
	}
	else if (select == 2)
	{
		selected[0] == 2;
	}

	//[11번 문항]
	system("cls");
	printf("숲속 환경문제로 급하게 동물 회의가 열렸다.\n");
	printf("1. 그동안 내가 보고 느낀 것들을 적극적으로 설명한다.\n");
	printf("2. 다른 동물들은 어떻게 생각하는지 먼저 들어본다.\n");
	scanf("%d", &select);
	if (select == 1)
	{
		selected[0] = 1;
	}
	else if (select == 2)
	{
		selected[0] == 2;
	}
	system("cls");

//반복문
//12번 반복을 진행하는 코드(i가 0에서 시작해서 작업이 끝날 때까지 
	for (int i = 0; i < 12; i++)
	{
		total += selected[i];
	}

	//12 ~ 13점
	if (total >= 12 && total <= 13)
	{
		printf("새롭고 짜릿한게 좋은 꾸러기 호랑이\n");
	}
	else if (total == 24)
	{
		printf("한껏 센치한 멜랑꼴리 늑대\n");
	}

	return 0;
}