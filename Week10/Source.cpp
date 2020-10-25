#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int count(char* num)
{
	int a = 0;
	while (num[a] != '\0')
	{
		a++;
	}
	return a;
}
void key(char* str)
{
	int i, u;
	for ( i = 0; i < count(str); i++)
	{
		printf("%c", str[i]);
		if (str[i]==str[i+1])
		{
			for (u = i;str[u]==str[u+1]; u++)
			{
				i = u + 1;
			}
		}

	}
}
int main()
{
	char A[1000];
	scanf("%s", A);
	key(A);
	return 0;
}