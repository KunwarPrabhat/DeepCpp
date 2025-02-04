//" 2. Create a pointer that stores the address of an array of size 5. Assign values and print them using pointer notation." 

#include<iostream>

#define log(X) std::cout<<X<<std::endl;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int* ptr = arr; // `arr` itself is the address of the first element
    //When we assign int* ptr = arr;, the pointer ptr now points to the first element of the array arr

    for(int i=0; i<5; i++){
        log(*(ptr + i));
    }
}

//ptr stores the address of the first array, 
//* is the dereference operator. It accesses the value stored at the memory address pointed to by the pointer.
//So *(ptr + i) means "access the value stored at the memory address ptr + i.
/*Since ptr is pointing to an integer (int), ptr + i means "move i integers forward in memory."
    So, if ptr initially points to arr[0], then:    
    ptr + 1 will point to arr[1]
    ptr + 2 will point to arr[2], and so on.*/