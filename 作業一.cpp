#include <stdio.h>
#include<stdlib.h>

int main(void) 
{
	int A=26;
	int B;
	for(B=0;B<A;B++)
		printf("%c",B+65);
	    printf("\n"); 
	for(B=0;B<A;B++)
	    printf("%c",B+97);
	return 0;
}
