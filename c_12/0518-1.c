#include <stdio.h>

int main()
{
    int s,e;    //s - 단의 시작 , e - 단의 끝

    while (1)
    {
        scanf("%d %d", &s, &e);

    if( ( s<2 || e<2 ) || ( e>9 || s>9 ) ) // -> 거짓으로 쓸 때     if( ( s>=2 && s<=9 ) && ( e>=2 && e<=9 ) )
    {

        printf("INPUT ERROR!");            
        //printf("X");                            // printf("O"); 
       
        
    }

    else if ( s<e )
    {

        for(int j=s; j<=e; j++ )
    {
    
            for(int i = 1; i<=9; i++ )
            {

                printf("%d * %d = %2d\n", j, i, i*j);

            }

            printf("\n");
        }
    }
    
        else
        {
            for(int j=s; j>=e; j--)
            {
       
            for(int i = 1; i<=9; i++ )
            {

                printf("%d * %d = %2d\n", j, i, i*j);

            }

            printf("\n");
            }

        }



        break;
        //printf("O");                            // printf("X");     

    }

    
    
    }
    
    
    
        
    
