// 공학용 계산기 프로그램 작성

#include <stdio.h>
#include <math.h>

int menu(void)      //메뉴를 출력하고 선택한 값을 반환하는 함수
{

        int n; printf("1.팩토리얼\n"); 
        printf("2.싸인\n"); 
        printf("3.로그(base 10)\n"); 
        printf("4.제곱근\n"); 
        printf("5.순열(nPr)\n"); 
        printf("6.조합(nCr)\n"); 
        printf("7.종료\n"); 
        printf("선택해주세요: "); 
        scanf("%d", &n);
        return n;
}

void factorial()    //정수를 입력받아 정수의 팩토리얼 값을 계산하여 출력하는 함수
{

        long long n, result=1, i;   // 입력받은 정수 n과 result 값 1로 초기화, i 값 선언
        printf("정수를 입력하시오: "); 
        scanf("%lld", &n);
        for (i = 1; i <= n; i++)    // i를 1부터 n까지 반복
        {
            result = result * i;    //result에 i를 곱하여 팩토리얼 값
            printf("결과 = %lld\n\n", result);  //팩토리얼 값 출력
        }
}

void sine()     //각도를 입력받아 해당 각도의 사인 값을 계산하여 출력하는 함수
{

        double a, result;   //실수 값 a, result 선언
        printf("각도를 입력하시오: "); 
        scanf("%lf", &a);
        result = sin(a);
        printf("결과 = %lf\n\n", result);
}

void logBase10()    //실수값을 입력받아 해당 값의 로그(base 10) 값을 계산하여 출력하는 함수
{
        double a, result;       // 실수값 a, result 선언
        printf("실수값을 입력하시오: "); 
        scanf("%lf", &a);

        if (a <= 0.0)       //a
        {
            printf("오류\n");
        }
        
        else {
            result = log10(a);
            printf("결과 = %lf\n\n", result);
        }
}

int main(void) 
{
        while (1)  // 무한 루프를 실행하여 종료를 선택할 때까지 계속해서 메뉴를 출력
        {
            switch (menu()) 
            {
                case 1:
                    factorial();  //팩토리얼 호출   
                    break;
            
                case 2:
                    sine();         //사인 호출
                    break;
                
                case 3:
                    logBase10();      //로그 호출
                    break; 

                case 7:
                    printf("종료합니다.\n");    //종료
                    return 0;
                
                default:
                    printf("잘못된 선택입니다.\n"); //잘못된 선택
                    break;
            }
        }
}