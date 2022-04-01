#include <stdio.h>
/* 4879 */

float secToHours(int seconds){
    return seconds / 3600.;
}

int main() {
    printf("Hodin: %.3f", secToHours(4879));
    return 0;
}
