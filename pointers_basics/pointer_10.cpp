//Create a program that counts the number of even and odd numbers in a dynamically allocated array using pointer arithmetic.

#include<iostream>

int main() {
    int size;
    int evencount = 0, oddcount = 0;

    std::cout<<"Enter the size of the array : "<<std::endl;
    std::cin>>size;
    std::cout<<"Enter the elements of the array : "<<std::endl;

    int* arr = new int[size];
    int* ptr = arr;

    for(int i =0; i<size; i++){
        std::cin>>*(ptr+i);
        if(*(ptr +i) % 2 == 0){
            evencount++;
        } else {
            oddcount++;
        }
    }
    std::cout<<"Number of even numbers : "<<evencount<<std::endl;
    std::cout<<"Number of odd numbers : "<<oddcount<<std::endl;
    std::cout<<"The array location is : "<< arr <<std::endl;
    std::cout<<"The array location that the pointer indicate : "<< ptr <<std::endl;
    std::cin.get();

}