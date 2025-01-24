/* 
	1. Create and run Kernighan and Ritchie’s famous “hello, world” program:

	#include <stdio.h>
	
	int main(void)
	{
		printf("hello, world\n");
	}
	
	Do you get a warning message from the compiler? If so, what’s needed to make it go away?

	ANSWER:

	1. On my compiler (clang v 14.0.6), The compiler didn't show any error messages.
*/

#include <stdio.h>

int main(void) {
	printf("hello, world\n");
}
