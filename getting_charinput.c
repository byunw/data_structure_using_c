#include <stdio.h>

int main(void){

    char buffer[5];
    char * buffer_element_addr;

    //buffer 어레이의 첫번째 element 주소 저장
    buffer_element_addr=buffer;
    
    //1개의 char 인풋 받기
    int i=0;
    while(i<1 && scanf("%s",buffer_element_addr)!=EOF){
        buffer_element_addr=(buffer_element_addr+1);
        i+=1;
    }

    //buffer 어레이에 저장된 인풋 출력
    printf("%c\n",buffer[0]);
    return 0;
    

}