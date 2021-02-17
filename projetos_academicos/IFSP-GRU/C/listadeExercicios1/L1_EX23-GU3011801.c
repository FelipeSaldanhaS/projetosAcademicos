#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int n = 123;

int rev = 0;

int i;

while(n>0) {
    i = n%10;
    rev = (rev*10)+i;
    n/=10;
}
printf("%d", rev);
	
	return 0;
}
