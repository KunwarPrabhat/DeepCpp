// Write a function that takes an array and its size as parameters and reverses the array using only pointers (without using extra arrays).
#include<iostream>
#define log(x) std::cout<<"\n";

void reverseArray(int* arr, int size){
    int* ptr1 = arr;
    int* ptr2 = arr + size -1;
    while(ptr1 < ptr2){
        int temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temp;

        ptr1++;
        ptr2--;
    }
}
int main() {
    int size;
    std::cout<<"Enter the size of the array : "<<std::endl;
    std::cin>>size;

    int* arr = new int[size];
    int* ptr = arr;

    std::cout<<"Enter the elements : "<<std::endl;
    for(int i = 0; i < size; i++){
        std::cin >> *(ptr + i);
    }

    std::cout<<"Entered array : ";
    for(int i = 0; i < size; i++){
        std::cout<< *(ptr + i) <<" ";
    }log(x);
    
    reverseArray(arr, size);
    std::cout<<"The reversed array is : ";

    for(int i=0; i<size; i++){
        std::cout<< *(ptr + i)<<" ";
    }
    delete[] arr;

}