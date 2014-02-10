#include <stdio.h>

int main()
{
	char string[] = "dad";

	string[0] = 'b';
	printf( "%s\n", string  );
	*string = 'm';
	printf( "%s\n", string  );

	return 0;
}
