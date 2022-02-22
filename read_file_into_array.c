#include <stdio.h>

int main(void){
    
    //File type pointer는 8 bytes
    File * fp=fopen("a.txt","r");
  
    //fopen() fail시
    if(fp==NULL){
       printf("fopen() failed");
    }
   
    //file(a.txt) 내용 bf(char array)에 담기
    char bf[100];
    while(fscanf(fp,"%s",bf)!=EOF)
          printf("%s\n",bf);
    
    //stream close하기
    fclose(fp);
    return 0;
     
    
}
