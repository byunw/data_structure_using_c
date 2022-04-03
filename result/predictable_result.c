#include <stdio.h>

//아래 예제의 경우, 어레이에 모든자리에 의도한대로 들어갔기때문에 예상한대로 ab가 출력이됨

int main(void){
    
    char buffer[3];
    buffer[0]='a';
    buffer[1]='b';
    buffer[2]='\0';
    printf("%s\n",buffer);
    return 0;
         
}

//예상 결과: ab
//실제 결과: ab
//예상 결과랑 실제 결과랑 같음
