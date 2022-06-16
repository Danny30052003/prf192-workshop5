#include <stdio.h>
// #include <stdlib.h>
void dateValidation() {
    int d, m, y, maxd;
    printf("Input date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &d, &m, &y);
    if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
        //Month 1, 3, 5, 7, 8, 10, 12 have 31 days
        maxd = 31;
    } else if(m == 4 || m == 6 || m == 9 || m == 11) {
        //month 4, 6, 9, 11 have 30 days
        maxd = 30;
    } else if (m == 2) {
        if(y%4 == 0) {
        //leap year, feb have 29 days
            maxd = 29;
        } else {
            maxd = 28;
        }
    }
    if(y >= 0 && m >= 0 && m <= 12 && d > 0 && d <= maxd) {
        printf("%d/%d/%d is a valid date\n\n", d, m, y);
    } else {
        printf("%d/%d/%d is not a valid date\n\n", d, m, y);
    }
}

void characterData () {
    char c1, c2, t;
	fflush (stdin);
	printf("Accept c1: ");
	scanf("%c", &c1);
	fflush (stdin);
	printf("Accept c2: ");
	scanf("%c", &c2);   
	if (c1>c2) {
		char t = c1;
		c1 = c2;
		c2 = t;
    }
	for (int c=c1; c<=c2; c++) {
		printf("Chr: %c  ||  Dec: %d   ||  Oct %o   ||  Hex %X\n\n", c, c, c, c);
    }
}


int main() {
    int n;
    printf("----- Menu -----\n");
    printf("1 - Processing date data\n");
    printf("2 - Character data\n");
    printf("3 - Quit\n");
    printf("----------------\n");
    scanf("%d", &n);
    switch (n) {
    case 1:
        printf("\nYou have selected 1!\n");
        dateValidation();
        main();
        break;
    case 2:
        printf("\nYou have selected 2!\n");
        characterData();
        main();
        break;
    case 3:
        printf("You have quitted the program!\n\n");
        break;
    default:
        printf("\n%d is not an option! Please try again\n\n", n);
        main();
        break;
    }
}