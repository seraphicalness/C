// 삼각함수 활용 나무 높이 측정

#define _CRT_SECURE_NO_WARNINGS 
#include <math.h>
#include <stdio.h>

int main(void) 
{
    double height, distance, tree_height, degrees, radians;   // 실수형으로 나무와의 길이, 측정자 키, 각도, 라디안 선언

    printf("나무와의 길이(단위는 미터): ");
    scanf("%lf", &distance); 

    printf("측정자의 키(단위는 미터): ");
    scanf("%lf", &height); 
    
    printf("각도(단위는 도): ");
    scanf("%lf", &degrees);

    radians = degrees * (3.141592 / 180.0);     // 라디안의 식 
    tree_height = tan(radians) * distance + height;     // 나무의 키를 구함
    printf("나무의 높이(단위는 미터): %lf \n", tree_height);
    return 0; 
}
