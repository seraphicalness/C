#include <stdio.h>

int get_integer()
int add(int x, int y)
int minus(int x, int y);
int multi(int x, int y);
int div(int x, int y);

int get_integer()
{
    int value;
    printf("정수를 입력하시오:");
    scanf("%d", &value);
    return value;
}



int main(void)
{
    int x = get_integer();
    int y = get_integer();

    int sum = add(x, y);
    printf("두 수의 합은 %d입니다.\n", sum);
    return 0;
}