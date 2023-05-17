// 삼각함수 라이브러리


#include <math.h>  //여러 수학 함수들을 포함하는 표준 라이브러리
#include <stdio.h>

int main( void ) 
{
    double pi = 3.1415926535; // 파이 값
    double x, y;

    x = pi / 2;
    y = sin( x );
    printf( "sin( %f ) = %f\n", x, y ); 
    y = cos( x );
    printf( "cos( %f ) = %f\n", x, y );
    
}