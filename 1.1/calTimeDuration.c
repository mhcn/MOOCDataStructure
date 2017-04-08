#include <stdio.h>
#include <time.h>
clock_t start,stop;
double duration;

int main(int argc, char const *argv[])
{
	start = clock();
	myFunction();
	stop  = clock();
	duration = ((double)(stop - start))/CLK_TCK;
	return 0;
}