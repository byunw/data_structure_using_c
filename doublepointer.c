#include <stdio.h>

void test(int** p){
     printf("%d\n",*(*p));//30이 출력됨  
}

int main(void){
    int * a;
    int ** dp;
    int arr[4]={30,450,14,5};
    a=arr;
    dp=&a;
    test(dp);
    return 0;
}
