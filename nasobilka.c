#include <stdio.h>

int main() {
	for(int j=1; j<11; j++)
	{
	for(int i=1; i<11; i++)
	{
	printf("%3d ", j * i);
	}
	printf("\n" );
	}
	return 0;
}
