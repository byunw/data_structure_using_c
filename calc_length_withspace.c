#include <stdio.h>
#include <string.h>

//gets()는 스페이스 있는 인풋도 잘 처리함
  //ex)ab cd -> ab cd:5
//하지만 gets()는 위험함. gets() 사용시, 데이터가 사용되어야할 메모리 공간을 벗어나는 공간에 데이터를 저장함

int main(void){

    char buffer[40];
    
    while(1){
        printf("$ ");
        gets(buffer);
        printf("%s:%lu\n",buffer,strlen(buffer));
    }

    return 0;

}
