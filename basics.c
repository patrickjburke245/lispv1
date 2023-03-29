#include <stdio.h>
#include <math.h>

int add_together(int x, int y) {
    int result = x + y;
    return result;
}

struct point {
    float x;
    float y;
} powercore;

//struct point P1;


int main () {
    int sum = add_together(20, 25);
    powercore.x = 0.1;
    powercore.y = 10.0;
    float length = sqrt(powercore.x * powercore.x + powercore.y * powercore.y);
    printf("%d\n", sum);
    printf("%f\n", length);

    //Loops
    int i = 10;
    while (i > 0) {
        puts("Loop iteration");
        i = i - 1;
    }

    //For Loop (contains initializer, a condition, and an incrementer).
    for (int j = 0; j < 10; j++) {
        printf("Loop Iteration %d", j);
    }

    //do loop
    /*
    do {
        printf("Nerd");
    } while(1);*/

    switch(i) {
        case 0 :
            printf("i = 0");
            break;
        case 10 :
            printf("i = 10");
            break;
        default:
        printf("what is i?");
    }
    return sum;
}