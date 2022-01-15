#include <stdio.h>

extern const char *__progname;

int
main(void)
{
	const char *msg = __progname != NULL ? __progname : "(null ptr)";

	printf("__progname is: %s\n", msg);
	return (__progname == NULL);
}
