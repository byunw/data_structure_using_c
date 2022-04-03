#include <stdio.h>

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
