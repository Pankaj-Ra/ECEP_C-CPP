#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
int main()
{

	fork();
	fork();
	fork();

	printf("Hello\n");

	return 0;
}

