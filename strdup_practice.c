#include <stdio.h>
#include <string.h>

int main(void){
     
    //char 어레이
    char source[]="Alex";
    
    //source 어레이값 다른 메모리공간에 복사하고 복사한 데이터값을 가지고있는 메모리공간의 첫번쨰 byte 주소를 target(char *)에 저장
    char* target=strdup(source);
    
    //복사된 값 출력(Alex)
    printf("%s\n",target);
    return 0;
     
}

