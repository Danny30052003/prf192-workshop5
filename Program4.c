#include <stdio.h>
#include <math.h>
void quadEquation() {
    int a, b, c, delta;
    double x1, x2;
    printf("Enter a: ");
    scanf("%d", &a);
    if(a == 0) {
        printf("a cannot equal to 0! Please try again\n");
        quadEquation();
    } else {
        printf("Enter b: ");
        scanf("%d", &b);
        printf("Enter c: ");
        scanf("%d", &c);
    }
    printf("\n(%d)x^2 + (%d)x + (%d)\n", a, b, c);
    delta = b*b - 4*a*c;
    if(delta > 0) {
        x1 = (-b-sqrt(delta))/(2*a);
	    x2 = (-b+sqrt(delta))/(2*a);
        printf("x1 = %1.3lf, x2 = %1.3lf\n", x1, x2);
    } else if(delta == 0) {
        x1 = -b/(2*a);
        printf("x1 = x2 = %1.3lf\n", x1);
    } else {
        printf("This quadratic equation have no solution!\n");
    }
}

void bankDeposit() {
    int d, y;
    double r, p;
    DAY:printf("Enter Deposit: $");
        scanf("%d", &d);
    if(d <= 0) {
        printf("Deposit must greater than 0! please try again\n");
        goto DAY;
    }
    RATE:printf("Enter yearly rate: ");
         scanf("%lf", &r);
    if(r <=0 || r>1) {
        printf("Yearly rate must in range of 0.0 to 1.0\n");
        goto RATE;
    }
    YEAR:printf("Enter number of year: ");
         scanf("%d", &y);
    if(y<=0) {
        printf("Year must greater than 0! please try again\n");
        goto YEAR;
    }
    p = d * pow((1 + r), y);
    printf("Your amount after %d years is: $%1.3lf\n\n", y, p);
}

int main() {
    int n;
    printf("----- Menu -----\n");
    printf("1 - Quadratic equation\n");
    printf("2 - Bank deposit problem\n");
    printf("3 - Quit\n");
    printf("----------------\n");
    scanf("%d", &n);
    switch (n) {
    case 1:
        printf("\nYou have selected 1!\n");
        quadEquation();
        main();
        break;
    case 2:       
        printf("\nYou have selected 2!\n");
        bankDeposit();
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