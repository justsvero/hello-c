#include <stdlib.h>
#include <ctype.h>
#include <assert.h>

#include "strutils.h"

char *find_last_char(char *src)
{
	assert(src != NULL);

	char *pos;

	pos = src;
	while (*pos != '\0') {
		pos++;
	}

	return --pos;
}

char *trim(char *src)
{
	assert(src != NULL);

	char *start;
	char *current;

	start = src;
	while (*start == ' ') {
		start++;
	}

	current = find_last_char(start);
	while (*current == ' ' && current >= start) {
		current--;
	}

	if (*current != '\0') {
		*(current + 1) = '\0';
	}

	return start;
}

char *capitalize(char *src)
{
	assert(src != NULL);

	int delta = 'a' - 'A';

	char *pos = src;

	while(*pos == ' ') pos++;

	if (islower(*pos)) {
		*pos = (*pos) - delta;
	}

	pos++;

	while(isalpha(*pos)) {
		if (isupper(*pos)) {
			*pos = (*pos) + delta;
		}

		pos++;
	}

	return src;
}
