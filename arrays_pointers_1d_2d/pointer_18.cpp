// to Find second largest and second smallest digit in an array.
#include<iostream>
#include <climits>

int main(){
    int arr[5] = {3, 4, 7, 9, 10};
    int* ptr = arr;
    int largest = *ptr;
    int secondLargest = INT_MIN;//I havent made it 0 because if array has negative element it will print 0 as second largest.

    for(int i=0; i<5; i++){
        if(*(ptr + i) > largest ){
            secondLargest = largest;
            largest = *(ptr + i); 
        }
        else if (*(ptr + i) > secondLargest && *(ptr + i) != largest) {
            secondLargest = *(ptr + i);
        }
    }
    std::cout << "Largest element: " << largest << std::endl;
    std::cout << "second Largest element: " << secondLargest << std::endl;

    std::cin.get();
}
