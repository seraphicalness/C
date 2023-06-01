 #include <stdio.h>
 #include <string.h>

 int main(){

    char arr[10001];  // 10000자 까지만 
    int i, KOI = 0, IOI = 0;

    scanf("%s", arr);  /*  문자 출력 1개이상 %s, 
                       배열 입력은 &arr 할 필요X */

    for( i=0; i<strlen(arr)-2; i++)  //i+2까지만 
    {
        if(arr[i] == 'K' && arr[i+1] == 'O' && arr[i+2] == 'I')
        {
            KOI++;
        }

        else if(arr[i] =='I' && arr[i+1] == 'O' && arr[i+2] == 'I')
        {
            IOI++;
        }
    }

    printf("%d\n%d", KOI,IOI);
    return 0;
 }
