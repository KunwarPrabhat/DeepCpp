//" 3. Write a function that takes an integer pointer as an argument and modifies the value of the integer it points to." 

#include <iostream>

#define log(X) std::cout<<X<<std::endl;

int modified_ptr(int* ptr){
    *ptr = *ptr + 10;
    int var = *ptr;
    return var;
}
int main() {
    int num = 10;
    int* ptr = &num;
    log(modified_ptr(ptr));
    std::cout<<"modified value of num :"<<num<<std::endl;
}