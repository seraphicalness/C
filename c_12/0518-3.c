#include <stdio.h>
#define STUDETS 10

int main()
{
    int scores[STUDETS];
    int sum = 0;
    int i, average;

    for( i=0; i< STUDETS; i++)
    {
        printf("학생들의 성적을 입력하시오: ");
        scanf("%d", &scores[i]);    //각각의 요소의 주소 값 

    }

    for ( i=0; i < STUDETS; i++)
    {
        sum +=scores[i];
        average = sum / STUDETS;
        printf("성적 평균 = %d\n", average);
    }

    return 0;

}