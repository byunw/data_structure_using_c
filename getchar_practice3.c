#include <stdio.h>
#include <string.h>


//프로그램의 현 문제점: 2번쨰 input type시 $가 두개임

int main(void){
     //1 byte    
     char ch;
  
     while(1){
        
       printf("$ ");
       
       //ch에다가 한개의 인풋 char 의미하는 이진수 저장
       ch=getchar();
       
       
       if(ch!='\n'){
          printf("%c\n,ch); 
       }
                 
     }
    
    return 0;  
}

                 
               
                 
