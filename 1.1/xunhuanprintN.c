#include <stdio.h>

void printN(int N);

int main(int argc, char const *argv[])
{
	int N;
	printf("number:");
	scanf("%d",&N);
	printN(N);
	return 0;
}

void printN(int N)
{
	int i;
	for(i =1; i<=N; i++)
	{
		printf("%d\n", i);
	}
	return;
}