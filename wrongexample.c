
void test(int** p){
       
}

int main(void){
    
    int arr[4]={30,450,14,5};
    //gcc가 compile error 뱉는이유: 주소의 주소는 존재하지않아서 특정한 메모리의 주소는 존재하지만
    test(&arr);
    return 0;
}
