#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <time.h>

void disp_car(int car_number, int distance)   /* void - 반환 X
                                                차 번호, 거리 */


{
    int i;
    printf("CAR #%d:", car_number);   // 차 번호 출력
    for( i = 0; i < distance/10; i++ )  //i 가 0부터 distance/10까지 별을 찍을 수 있게
    {
        printf("*");
    }
    printf("\n");       // 별 다 찍으면 한 줄 넘어감
}

int main(void) 
{       int i;
        int car1_dist=0, car2_dist=0; // car1, car2 값을 0으로 초기화
        srand( (unsigned)time( NULL ) );  // srand -> rand함수에 사용될 수를 초기화, unsigned-> (-)를 갖지않음 을 현재시간을 초 단위로 리턴
        for( i = 0; i < 6; i++ ) {      // i 가 0부터 5까지 
                    car1_dist += rand() % 100;   //car1_dist = car1_dist + rand() % 100
                    car2_dist += rand() % 100;   //car2_dist = car2_dist + rand() % 100  누적으로 더해진 값이
                    disp_car(1, car1_dist);     // 여기에 들어감
                    disp_car(2, car2_dist); 
                    printf("---------------------\n"); 
                    _getch();       // ???  아스키 코드로 변환
                    
        }
        return 0; 
}

// 자동차 3개로 늘리기?