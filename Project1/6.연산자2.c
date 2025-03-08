#include <stdio.h>
//test
int main()
{
	int a = 11;
	int b = 14;
	int c;

	printf("a = %d b = %d\n", a, b); //11 14
	c = a & b; //a AND b  -->교집합
	printf("a & b = %d\n", c); //10
	//11 = 1011
	//14 = 1110
	//c = 1010

	c = a | b; //a OR b --> 합집합
	//a와 b의 값을 전부 1로 처리합니다. 이때 겹치는 값은 겹쳐집니다.
	printf("a | b = %d\n", c); //15
	//11 = 1011
	//14 = 1110
	//c = 1111

	c = a ^ b; //a XOR b
	//XOR(Exclusive OR) : 배타적 논리합, 대칭 차집합
	//a와 b를 비교했을 때 비트가 다른 지점을 1, 같으면 0으로 처리합니다.
	//이 연산 방식은 암호학의 기초로 많이 활용됩니다.
	//1011
	//1110
	//0101
	printf("a ^ b = %d\n", c);

	c = 6;
	printf("c = %d\n", ~c); //-7
	//NOT 연산
	//비트를 반대로 처리하는 연산

	a = 1;
	c = a << 2;
	printf("c = %d\n", c); //4
	a = 3;
	c = a << 2;
	printf("c = %d\n", c); //12
	//shift 연산
	//a << 2일 경우 a를 비트 2칸 이동합니다. 비트 2칸은 2의 2제곱(4)를 의미하니
	//a * 4로 해석이 가능합니다.

	a = 16;
	c = a >> 4;
	printf("c = %d\n", c);
	//a >>4일 경우 a를 비트 4칸 이동합니다. 비트 4칸은 2의 4제곱(16)을 의미합니다.
	//a / 16과 동일한 결과


	//2진수 계산법
	//1. 계산할 값을 2의 제곱수로 분배합니다.
	//2. 이때 2의 0제곱(1)도 범위에 포함합니다.
	//3. 가장 큰 값부터 잘라냅니다.

	//1 2 4 8 16 32 64 128
	//11 = 8	 + 2 + 1 --> 1011
	//14 = 8 + 4 + 2 --> 1110

	//11 & 14는 11과 14가 가지고 있는 비트 중에서 겹치는 부분만 1로 처리, 나머지는 다 0으로
	//1011
	//1110
	//1010 => 8 + 2 => 10


	//비트 연산(bitwise)
	//데이터를 비트 단위로 처리하는 연산자입니다.
	//컴퓨터는 데이터를 2진 코드로 관리합니다.(이진수)

	//비트 연산 사용 목적
	//1. 곱하기와 나누기 연산을 더 빠르게 진행할 수 있습니다.
	//2. 프로그램에서 이미지 처리하는 작업(ex. RGB 값 분리, 결합, 픽셀 값 조작)
	//3. 데이터를 압축하는 작업
	//4. 네트워크 관련 기술(프로토콜 단위에서 IP주소, 포트 번호 같은 데이터를 비트로 분리해
	//	 네트워크와 호스트 부분에 대한 식별)
	//5. 임베디드 시스템(하드웨어 레지스터에 대한 조작)
	//등등 다양한 C언어 관련 기술에서 사용되는 핵심 기술 중 하나입니다.


	return 0;
}
