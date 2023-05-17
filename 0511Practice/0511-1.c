#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int coin_toss(void);

int main(void)
{
        int toss;     //던지는 값
        int heads = 0;       //앞 면
        int tails = 0;      //뒷 면
        srand((unsigned)time(NULL));   // srand -> rand함수에 사용될 수를 초기화, unsigned-> (-)를 갖지않음 을 현재시간을 초 단위로 리턴

        for(toss =0; toss<100; toss++)  // toss를 0부터 99까지
        {
            if(coin_toss() == 1)    // 던지는 값이 1?   
            {
                heads++;        //앞 면에 추가
            }
            else
            {
                tails++;        // 아닐 시 뒷 면에 추가
            }
        }

        printf("동전의 앞면: %d\n", heads);
        printf("동전의 뒷면: %d\n", tails);

}

int coin_toss( void )
{
    int head = rand() % 2;   //rand -> 랜덤숫자 반환, 랜덤 숫자를 2로 나누었을 때, 나머지가 1이면 앞면, 0이면 뒷면
    return head;
}