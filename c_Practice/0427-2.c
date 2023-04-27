#include <stdio.h>
int main()
{
    int a,b,sum;
    printf(" 첫 번째 숫자를 입력하시오:");
    scanf("%d", &a);

    printf(" 두 번째 숫자를 입력하시오:");
    scanf("%d", &b);

    sum = a + b;

    printf(" 두 수의 합:%d", sum);
    return 0;
    
}
