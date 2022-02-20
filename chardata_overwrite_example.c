#include <stdio.h>

int main(void){

    //char pointer array
    char *words[100];
    //char array
    char buffer[100];

    //이 코드의 문제점: 들어오는 char input에 기존에 있던 데이터가 overwrite되고 words array의 값들은 최종 input 데이터를 가지고 있는 메모리의 주소를 동일하게 가짐
    int n=0;
    while(n<4 && scanf("%s",buffer)!=EOF){
        //words에다가 buffer 어레이에 첫번째 element 주소 저장
        words[n]=buffer;
        n++;
    }

    for(int i=0;i<4;i++){
        //words에 담간 주소에 있는 char data 출력
        printf("%s\n",words[i]);
        //words에 담긴 주소(16진수) 출력
        printf("%p\n",words[i]);
    }

    return 0;

}