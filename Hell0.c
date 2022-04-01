#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void hello (int n){
    for(int i = 0; i < n; i++){
        printf("Hello\n");
    }
}

int main() {
    hello(4);
    hello(3);
    return 0;
}
