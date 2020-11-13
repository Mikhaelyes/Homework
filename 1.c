#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <string.h>

main(int argc, char** argv, char** envp)
{
	setenv(argv[0], argv[2], 2);
	char* j = getenv(argv[0]);
	printf("%s\n", j);
	for(int i = 0; envp[i]; i++)
		printf("%s, \n", envp[i]);
	return 0;
}
