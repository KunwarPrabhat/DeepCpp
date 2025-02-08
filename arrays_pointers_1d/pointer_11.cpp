//" 11. Given a pointer to an array, write a function that returns the sum of all its elements." 
#include<iostream>


int ArraySum(const int* ptr, int size) {
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum = sum + *(ptr + i);
    }
    return sum;
}
int main() {
    int size;
    std::cout<<"Enter the size of the array : ";
    std::cin>>size;
    if (size <= 0) {
        std::cout << "Invalid array size.\n";
        return 1;
    }

    int* arr = new int[size];
    int* ptr = arr;
    
    std::cout<<"Enter the elements of the array \n";
    for(int i=0; i < size; i++){
        std::cin>>*(ptr + i);
    }
    std::cout<<"The sum is : "<<ArraySum(ptr, size)<<std::endl;
    delete[] arr;
}
