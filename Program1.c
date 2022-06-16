#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int RandomNumber(int a, int b)
{
	a=1+rand()%6;
	b=1+rand()%6;

    return a;
	return b;
}
int main ()
{
	int total, x, y, count;
	printf(" Dice Thrower ");
	printf("\n====================");
	do {
		printf("\nTotal sought: ");
		scanf("%d", &total);
	}
	while (total < 2 || total > 12);
	count = 1;
	srand(time(NULL));
	do {
		x = RandomNumber(x,y);
		y = RandomNumber(x,y);
		printf("Result of throw %d: %d + %d\n", count, x, y);
		count++;
	}
	while(x+y!=total);
	printf("You got your total in %d throws!\n", count-1);
	return 0;
}