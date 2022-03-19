#include <stdio.h>

int main(void){
    
    //1 byte 메모리 할당 
    char c;
    
    printf("Enter a character:");
    
    //1 byte 메모리 공간에 ascii table 따라서 이진수 값 메모리 공간에 저장 
    c=getchar();
    printf("You have passed:");
    //이름 c가 붙은 메모리 공간에 저장된 이진수 값을 ascii table 따라서 출력
    putchar(c);
    printf("\n");
    return 0;
    
}
