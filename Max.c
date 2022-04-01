#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int max(int x, int y){
    if (x > y){
        return x;
    }else{
        return y;
    }
}

int main() {
    printf("max: %d", max(3,8));
    return 0;
}
