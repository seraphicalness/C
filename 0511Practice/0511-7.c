// 삼각함수 그리기 sin함수 그래프를 90도 회전

#include <stdio.h>
#include <math.h>
#define PI 3.141592

double rad(double degree)  // degree 값을 출력하기위한 함수 생성
{
        return PI * degree / 180.0;    // = degree 값 return
}

void drawbar(int height)        // height 값을 출력하기 위한 함수 생성
{
        for (int i = 0; i < height; i++)  //i가 0부터 height까지 *을 출력하고 \n 해줌
                printf("*");
        printf("\n");
}

int main(void)
{
        int degree, x, y;       // 정수형으로 degree , x , y 선언
        for (degree = 0; degree <= 90; degree += 10)    // degree를 0으로 초기화하고, 90전까지 10씩 증가
        {
                    // 싸인값은 -1.0에서 1.0이므로 정수로 반올림하여서 증폭한다. 
                    y = (int)(60 * sin( rad((double)degree)) + 0.5);   //주어진 degree 값을 라디안으로 변환한 뒤, 사인 함수를 적용하여 y 값을 계산
                    drawbar(y);  //계산된 y 값을 이용하여 막대 그래프 그리기
        }
        return 0;
}