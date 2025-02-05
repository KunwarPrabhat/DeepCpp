// Find the largest element in an array using pointers.
#include <iostream>

int main()
{
    int arr[5] = {3, 4, 7, 9, 10};
    int* ptr = arr;
    int largest = * ptr;

    for(int i=0; i<5; i++){
        if(*(ptr + i) > largest ){
            largest = *(ptr + i); 
        }
    }
    std::cout << "Largest element: " << largest << std::endl;
    std::cin.get();
}