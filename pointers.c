#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    long double *p;        /* pointer variable for malloc below */
    long double a = 4;
    //p = malloc(sizeof(int));
    p = &a;

    printf("The address of p (&p)   = %p\n", (void *) &p);
    printf("The value of p (p AKA &(p+1)) = %p\n", p);
    printf("The value of a (*p) = %Lf\n", *p);
    printf("The value of a (*p) = %Lf\n", a);
    //printf("p    = %p\n", (void *) p);
    //printf("main = %p\n", (void *) main);
    printf("The address of p+1 (&p+1) = %Lf\n", *(&a+1));
    //printf("size of int = %zu\n", sizeof(int));
    //int *newp = p+4;
    //printf("size = %d\n", *newp);
    //free(p);

    return 0;
}