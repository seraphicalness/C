#include <stdio.h>
int main()
{
    int i = 10;

    int* p;
    p = &i;
    *p = 5;

    printf("%d\n", i);   //5출력
}