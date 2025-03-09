#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//N과 M
//자연수 N과 M이 주어졌을 때 아래의 조건을 만족하게 됩니다.

//1부터 N까지의 자연수 중에서 중복없이 M개를 고른 수열

//1 <= M < N <= 8 범위에 해당하는 값만 입력으로 넣습니다.

//N과 M에 대한 입력을 순서대로 진행합니다.








int main()
{
	int N;
	int M;
	scanf("%d %d", &N, &M);
	print(N, M);

	return 0;
}