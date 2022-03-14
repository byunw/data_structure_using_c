#include <stdio.h>
#include <string.h>

#define BUFFER_SIZE 2

int main(void){

    char buffer[BUFFER_SIZE];
    
    printf("$ ");
    
    //최대 두번째 arg-1 만큼 읽어드림(위의 경우: 1개의 char만 읽어드림)
    //char input은 1번째 arg이 가르키는곳에 저장
    //fgets()가 사용하는 메모리공간의 마지막 바이트는 00000000(2진수)를 저장함
    fgets(buffer,BUFFER_SIZE,stdin);
    printf("%s:%lu\n",buffer,strlen(buffer));
    printf("%d\n",buffer[0]);
    printf("%d\n",buffer[1]);
    return 0;
      
     
}
