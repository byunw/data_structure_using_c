#include <stdio.h>

int main(void){
    
    //1 byte 할당 
    char ch;
    
    //각 char input을 ascii table에 따라 2진수 값으로 ch에 저장하고 ch에 저장된 (2진수)값이랑 '\n'을 나타내는 00001010(2진수)값이랑 다를경우 2 출력해주기
    //값 비교는 cpu안에 있는 ALU가 담당 
    while((ch=getchar())!='\n')
        printf("2\n");
        
    //getchar()가 최종적으로 ch에 '\n'을 나타내는 00001010(2진수)값을 ch에 저장시킴(주의할점)    
    //ch에 있는 이진수 값을 10진수로 찍어주기(10이찍힘) 
    printf("%d\n",ch);
    
    return 0;
    
}
