#include <stdio.h>

int main() {
	float suma = 0.01;
	printf(" 1. %11.2f Euro\n", suma);
	for(int i = 2; i <=31; i++){
	    suma = suma * 2;
	    printf("%2d. %11.2f Euro\n", i, suma);
	}
    return 0;
}
