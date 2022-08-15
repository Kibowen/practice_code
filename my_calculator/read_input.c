#include "calc.h"

char *get_input()
{
	char *buffer = NULL;
	size_t n = 0;
	
	*buffer = _getline(&buffer, &n, stdin);
	
	return (buffer);
}
