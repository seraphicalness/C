#include <stdio.h>

int solution( int price, char* grade ){

    int answer = 0;

    return answer;

}


#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int price, char*grade){
    int answer = 0;
    if(grade == "S"){
       answer = price * 0.95;
    }
    if(grade == "G"){
        answer = price * 0.9;
    }
    if(grade == "V"){
        answer = price * 0.85;
    }
    return answer;
}

int main(){

    int price1 = 2500;
    char * grade1 = "V";
    int ret1 = solution(price1, grade1);

    printf("solution return value of the funtion is %d.\n", ret1);

    int price2 = 96900;
    char * grade2 ="S";
    int ret2 = solution(price2, grade2);

    printf("solution return value of funtion is %d.\n", ret2);

}