//" 4. Create a function that swaps two numbers using pointers." 
#include<iostream>

void swap(int* ptrA, int* ptrB){
    int temp = * ptrA;
    * ptrA = * ptrB;
    * ptrB = temp;
}
int main() {
    int a, b;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;
    std::cout << "a : " << a << " and b : " << b << std::endl;

    int* ptrA = &a;
    int* ptrB = &b;

    swap(ptrA, ptrB);

    std::cout<<"After swapping"<<std::endl;
    std::cout<<"a : "<< a << " and b : "<< b <<std::endl;
}