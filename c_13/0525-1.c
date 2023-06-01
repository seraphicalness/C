#include <stdio.h>

int main()
{
    int a=150, b=266, c=427, sum=0,count=0;
    int t[10] = {0,};
   // scanf("%d %d %d", &a, &b, &c);
    sum = a*b*c;


    while(1)
    {

        count = sum % 10;
        sum /=10;
        t[count]+=1;


        if ( sum == 0)
        {
            break;
        }
        

    }

    for( int i=0; i<10; i++)
    {
        printf("%d\n", t[i]);
    }
    

        return 0;
    }