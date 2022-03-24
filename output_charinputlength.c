#include <stdio.h>
#include <string.h>


//이 프로그램 테스트 필요
    //테스트 예정 
    

int read_line(char str[],int n){
    
    //각각의 char input 담을 공간
    char ch;
    
    //인풋길이
    int i=0;
    
    //ch에 각각의 char 저장하고 저장한 이진수 값이 '\n'랑 다른걸 의미할경우 계속 룹
    while((ch=getchar())!='\n')
      
      //할당된 어레이의 허용된 공간만 접근하게
      if(i<n)
         //인풋을 의미하는 이진수 값을 ch에서 어레이로 복사 
         str[i++]=ch;
     
     //input의미하는 이진수 저장하고 있는 바이트의 바로 다음 바이트에 '\0' 의미하는 이진수 저장 
     str[i]='\0';
    
     //인풋길이 반환    
     return i;
      

}

int main(void){
    
    //char input 담을 어레이 마지막 byte에는 '\n' 의미하는 00000000 저장 
    char buffer[4];
    
    //인풋 길이 저장할 변수
    int k;
    
    //어레이 사이즈 저장할 변수 
    int n=4;
   
    while(1){
      
      printf("$ ");
      //인풋길이 반환받고 k에 저장
      k=read_line(buffer,n);
      
      //어레이에 저장된 char input이랑 길이 찍어주기
      printf("%s:%d\n",buffer,k);
      
    }



}
