#include<stdio.h>

void modify(int *);

int main()
{
    int x=10;

    printf("Before function x=%d\n",x);

    modify(&x);

    printf("After function x=%d\n",x);

    return 0;
}

void modify(int *a)
{
    *a=*a+5;

    printf("Inside function x=%d\n",*a);
}
