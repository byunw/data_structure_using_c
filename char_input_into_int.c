#include <stdio.h>

int main(void){
    
    //4 bytes 
    int ch;
    
    //char input을 ch 첫번째 byte에 이진수로 저장  
    ch=getchar();
    
    //ch first byte 값을 first_byte에 저장 
    char first_byte=(ch >> (8*0)) & 0xff;
    
    //first_byte에 저장된 char input값 출력
    printf("%c\n",first_byte);   
    
    return 0;

}
