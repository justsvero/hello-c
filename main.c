#include <stdlib.h>
#include <stdio.h>

#include "strutils.h"

int main(int argc, char **argv)
{
	char *name;

	if (argc > 1) {
		name = capitalize(trim(argv[1]));
	} else {
		name = "World";
	}

	fprintf(stdout, "Hello, %s!\n", name);

	return EXIT_SUCCESS;
}
