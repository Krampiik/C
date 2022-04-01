#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

const int MAX = 10;

int main()
{
    int p[MAX];
    srand(time(NULL));
    for(int i = 0; i < MAX; i++)
    {
        p[i] = rand() % 100;
        printf("%d  ", p[i]);
    }
    
    int min, max;
    min = max = p[0];
    int sum = 0;
    for(int i = 1; i < MAX; i++);
    {
        sum += p[i];
        
        if(p[i] < min)
        {
            min = p[i];
        }
        
        if(p[i] > max)
        {
            max = p[i];
        }
        
    }
    printf("\n\nmin = %d", min);  
    printf("\nmax = %d", max);  
    printf("\nsum = %d", sum);
    
    return 0;
}
