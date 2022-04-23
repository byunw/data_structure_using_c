#include <stdio.h>
#include <string.h>

//궁금증1: scanf()는 input의미하는 이진수를(ex:01100001) 메모리에 첫번쨰 바이트에 저장하고 그다음 바이트에는 뭐를 저장하는지 궁금
    //답: 아래 예제의 경우, char input일 경우 메모리의 첫번쨰 바이트에다가 char input 의미하는 이진수를 저장하고 바로 다음 바이트의 값은 00000000(십진수:0)
//궁금증2: 메모리에 이진수 값이 00000000(십진수:0) 이 담겨 있으면 printf()로 찍을떄 아무것도 안찍히나?
    //메모리에 이진수 값이 00000000면 printf()로 찍으려고 해도 터미널에 아무것도 안찍힘

int main(void){
    
    char buffer[3];
    scanf("%s",buffer);
    printf("%c\n",buffer[0]);
    
    if(buffer[1]==0){
       printf("2\n");
    }
    
    printf("%c",buffer[1]);
    return 0;
    
}
