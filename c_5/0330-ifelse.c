#include <stdio.h>
int main(void)
{
    int number;

    printf("정수를 입력하시오.\n");
    scanf("%d",&number);

    if(number==0)
    {
        printf("0 입니다\n");
    }
    if(number !=0)
    {
        printf("0이 아닙니다.\n");
    }
    else
    {
        printf("?????\n");
    }
    
    return 0;
}