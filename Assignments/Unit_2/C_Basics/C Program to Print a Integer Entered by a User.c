#include <stdio.h>

void main(void){
	int x;
	printf("Enter an Integer: ");
	fflush(stdout);
	scanf("%d", &x);
	printf("You Entered: %d", x);
}
