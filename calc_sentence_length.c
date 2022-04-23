#include <stdio.h>
#include <string.h>

int main(void){
    
    char buffer[30];
    printf("길이 20이하의 문장만 입력해주세요: "); 
    
    //gets() 위험함
    gets(buffer);
    printf("%lu\n",strlen(buffer));
    return 0;
            
}
