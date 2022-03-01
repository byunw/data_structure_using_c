#include <stdio.h>

struct Point{
       int x;
       int y;
       int z;
};

int main(void){
    struct Point p1={.y=0,.z=1,.x=2};
    struct Point p2={.x=30};
    printf("x = %d,y = %d, z = %d\n",p1.x,p1.y,p1.z);
    printf("x = %d\n",p2.x);
    printf("%d\n",p2.y);
    printf("%d\n",p2.z);
    return 0;
}

    
