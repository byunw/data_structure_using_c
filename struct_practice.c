#include <stdio.h>

struct person{
       int age;
       float weight;
};

int main(void){
    
    struct person *personPtr;
    struct person person1;
    personPtr=&person1;
        
    printf("Enter age: ");
    scanf("%d",&personPtr->age);
    printf("%d\n",personPtr->age);
    
    printf("Enter weight: ");
    scanf("%f",&personPtr->weight);
    printf("%.1f",personPtr->weight);
    return 0;
    
}
