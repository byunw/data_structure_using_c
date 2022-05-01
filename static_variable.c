#include <stdio.h>

int fun(){
    static int count=0;
    count++;
    return count;
}

int main(void){
    printf("%d ",fun());
    printf("%d ",fun());
    return 0;
}

//static variable은 call된 함수가 control을 calling function(main)에 넘겨도 원래있던 값을 유지한다.
    //예를들어, 위의 예제의 경우, 메인에서 첫번쨰 fun() call에서 static variable인 count의 값은 1이되고 1을 리턴해서 1 가 찍힌다.
    //2번째 fun() call에서는 static int count=0;로 인해서 data segment에 있는 static int count 값이 0이 되는게 아니고 count++에 의해서 data segment에 있는 count 값은 2가 되고 2가 반환된다.
    //결국 그래서 1 2 가 출력된다.
