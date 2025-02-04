//" 5. Allocate memory dynamically for a 1D array of size 10 using new, fill it with numbers, print them, and then free the memory using delete[]." 
#include <iostream>

int main() {
    int* arr = new int[10];
    for(int i=0; i<10; i++){
        arr[i] = i+1;
        std::cout<<arr[i]<<" ";
    }
    delete[] arr;
}