//" 1. Declare a pointer that points to an integer and initialize it with a value of 10. Print the value using both the pointer and the variable." 
#include<iostream>

#define log(X) std::cout<<X<<std::endl;

int main() {
    int var = 10;
    int* ptr = &var;

    log(var);
    log(*ptr);
}