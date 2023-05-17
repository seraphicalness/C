#include <stdlib.h> 
#include <stdio.h>
int main(void) 
{
    system("dir");        //명령 프롬프트에게 명령어를 전달해서 실행시키는 함수
    printf("아무 키나 치세요\n"); 
    _getch();
    system("cls");          //명령 프롬프트에게 명령어를 전달해서 실행시키는 함수

    return 0; 
}