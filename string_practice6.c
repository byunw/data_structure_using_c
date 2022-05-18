#include <stdio.h>
#include <string.h>

int main(void){
    
    //char array 
    char buffer[4];
    
    //buffer의 첫번쨰 바이트에 이진수 값 00000000이 저장됨
    //아쉽지만 아무인풋도 안받음 실행시
    fgets(buffer,1,stdin);
    
    //버퍼의 첫번째 바이트에 00000000이 저장되고 00000000의 십진수값인 0이 출력됨   
    printf("%d",buffer[0]);
    return 0;
    
}
