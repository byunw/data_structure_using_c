

//gcc(compiler)에서 에러 안 뱉어내는 코드
  //어레이 이름을 test()에 던지면 실제로는 어레이의 첫번째 바이트의 주소가 넘어가서 아무 문제가없음 
  //test()는 어레이의 첫번쨰 element값을 7로 바꾸어주고 7이 출력됨 
  
#include <stdio.h>

void test(int * p){
     *p=7;   
}

int main(void){
    
    int arr[4]={30,450,14,5};
    test(arr);
    printf("%d\n",arr[0]);
    return 0;
    
}
