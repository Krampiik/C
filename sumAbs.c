#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int sumAbs(int x, int y){
    return abs(x) + abs(y);
}


int main() {
    float x = sumAbs(-2,3);
    printf("x = %.3f", x);
    return 0;
}
