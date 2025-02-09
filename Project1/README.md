# C_project
 2025-02-08 ~ 2025-03-15 project

## 목차
[깃허브 데스크톱](#깃허브-데스크톱)<br>
[코드 기본 구성](#코드-기본-구성)<br>
[printf](#printf)<br>
[서식 지정자](#서식-지정자)<br>
[변수](#변수)<br>
[scanf](#scanf)<br>
[getchar](#getchar)<br>
[putchar](#putchar)<br>
[gets puts](#gets-puts)<br>
[putchar](#putchar)<br>
[문자열 입력 방법](#문자열-입력-방법)<br>
<hr/>

# 깃허브 데스크톱
+ 설치 방법
  > https://desktop.github.com/download/
  

<hr/>

# 코드 기본 구성
+ 전처리기
+ main

```c
# include <stdio.h>

int main()
{
printf("C programing");
return 0;
}
```

# printf
> stdio.h에서 제공해주는 c언어의 대표적인 문장 출력용 기능(함수)입니다.<br>
> 일반적으로는 printf("작성하고 싶은 문장");을 작성해 사용합니다.

예시)
```c
int main()
{
printf("Good day to study!");
return 0;
}
```

# 서식 지정자
|지정자 명칭|설명|
|-----|-----|
|%d|정수에 대한 지정자|
|%f|실수에 대한 지정자|
|%c|문자에 대한 지정자|

# 변수
> C언어에서 특정 하나의 데이터를 사용자가 이름지어서 저장하는 방법(공간)<br>
> + 변수의 자료형
> 
> |이름|표현하는 형태|크기|표현 범위|
> |-----|-----|-----|-----|
> |int|정수|4 byte|-2147483648 ~ 217483647|
> |float|실수| 4 byte|3.4 * 10 -38 ~ 3.4 * 10 +38|
> |char|문자|1 byte|-128 ~ 127|

자료형 변수명;의 형태로 변수를 선언할 수 있습니다.
```c
int count;
```
변수명 = 타입에 맞는 값;의 형태로 변수를 초기화 할 수 있습니다.
```c
count = 5;
```

+ 변수를 만들 때 지켜줄 이름 규칙
1.  대소문자를 구분합니다.
2.  변수의 이름은 숫자가 맨 앞에 나올 수 없습니다.
3.  변수의 이름에 특수문자 사용이 불가능합니다.(예외 : _, $는 c언어에서 변수 이름으로 사용 가능)
4.  변수의 이름으로 키워드(keyword)를 사용할 수 없습니다.

# scanf
> 입력함수로써 선언된 변수에 자료형에 알맞는 값을 입력할 수 있습니다.<br>

예시)
```c
int number;
	printf("Input the number : ");
	scanf("%d", &number);
	printf("number : %d\n", number);
```
# getchar
키보드로부터 하나의 문자를 읽어내는 함수<br>
이 기능은 버퍼(buffer)를 비우는 용도로도 사용됩니다.
+ 입력 버퍼(buffer)<br>
  c언어에서 입력을 진행할 경우 바로 값을 넘기는게 아니라
  임시로 데이터를 저장하는 별도의 공간에 값을 넣고 전달하는 방식입니다.<br>
  문자를 다 받기 때문에 enter 같은 기능도 값으로 남게 됩니다.

예시)
```c
char key;
	printf("키를 하나 입력해주세요 >> ");
	key = getchar();
```

# putchar
전달받은 문자 하나를 화면에 출력하는 기능이 있습니다.
```c
	putchar(key);
```

# gets puts
문자열에 대한 입력과 출력을 진행할 때 편하게 사용할 수 있습니다.

# 문자열 입력 방법
>문자열을 입력하기 위해서는 변수 정의 과정에서 입력할 값의 길이를 지정해주어야 합니다.<br>

예시)
```c
char word[15];
	printf("단어를 입력해 주세요 >> ");
	gets(word);
	puts(word);
```
>scanf로도 문자열을 만들 수 있습니다.<br>

예시)
```c
char item[10];
	printf("아이템의 이름을 입력해주세요 >> ");
	scanf("%s", item);
	printf("아이템의 이름 : %s 입니다.\n", item);
```



  [목차로](#목차)
