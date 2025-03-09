#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#pragma region ≥ª «Æ¿Ã
int c[4];

void list(int c[])
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			int sum = c[i] + c[j];
			if (sum >= 6)
			{
				printf("%d + %d = %d\n", c[i], c[j], sum);
			}
			else
			{
				continue;
			}
		}
	}
}
#pragma endregion

int main()
{
	int c[4] = { 1,2,3,4 };
	list(c);

	return 0;
}