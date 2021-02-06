#include <stdio.h>
int main(int argc, char *argv[])
{
	if(argc > 1)
		while(argc > 1)
		{
			printf("Hello %s\n", argv[argc-1]);
			argc--;
		}
	else
		printf("Hello World!\n");
	return 0;
}
