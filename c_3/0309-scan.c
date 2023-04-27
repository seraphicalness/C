#include <stdio.h>


int main(void)
{
    int x,y,sum=0;

    printf("첫 번째 숫자를 입력하세요\n");
    scanf("%d", &x);
    printf("두 번째 숫자를 입력하세요\n");
    scanf("%d", &y);
    sum= x + y;
    printf("두 수의 합: %d\n", sum);
    
    return 0;
}