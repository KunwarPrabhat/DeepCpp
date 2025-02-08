//Write a C++ program that takes a positive integer as input, reverses its digits using pointers, and prints the reversed number.
#include<iostream>

int main() {
    int n;
    int count = 0;
    std::cout<<"Enter a number : ";
    std::cin>> n;
    int temp = n;

    while (temp > 0) {
        temp/= 10;  
        count++;    
    }
    int* arr = new int[count];
    int* ptr = arr;
    std::cout<<"Reversed number : ";
    for(int i = 0; i<count; i++){
        *(ptr + i) = n % 10; 
        std::cout<< *(ptr + i);
        n/=10; 
    }
    delete[] arr;

}