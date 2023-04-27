 #include <stdio.h>
 int main()     // int 반환형 생략 x
 {
    int a,b;

    while (1)
    {

    scanf("%d %d", &a,&b);
    if ( a== 0 && b == 0 )
    {
        break;
    }

    printf("%d\n", a+b );
    }
 

    return 0;       // 반환자료형 
 } 