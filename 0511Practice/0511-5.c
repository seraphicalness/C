// 시간 맞추기 게임

#include <stdio.h>
#include <time.h>

int main(void)
{
        time_t start, end;   // time_t는 unsigned long과 동일
        start = time(NULL);  /* C 라이브러리 함수 time()은                    현재 시간을 가져와 시작 시간으로 설정
                               1970년 1월 1일 이후의 시간을 초 단위로 반환 */
        printf("10초가 되면 아무 키나 누르세요\n ");
        
        while (1)   // while이 1일때 실행
        {
                if (getchar())          //사용자가 키를 눌렀을 때 루프를 종료
                break;
        }

        printf("종료되었습니다.\n");
        end = time(NULL);               //현재 시간을 가져와 종료 시간으로 설정 
        printf("경과된 시간은 %ld 초입니다. \n", end - start);  // 시작 시간과 종료 시간의 차이를 계산하여 경과된 시간을 출력
        return 0;
}