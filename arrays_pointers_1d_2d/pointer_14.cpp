//" 14. Write a function that flattens a 2D array into a 1D array using pointers." 
#include<iostream>


void printArray(int** arr, int rows, int cols){
    std::cout<<"The array in matrix form is :-\n";
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            std::cout<<*(*(arr + i) + j)<<"  ";
        }
        std::cout<<std::endl;
    }
}
void printFlattenedArray(int* a1d, int size){
    std::cout<<"Flattened arary : ";
    for(int i = 0; i < size; i++){
        std::cout<<*(a1d + i)<<" ";  
    }
}
int* flattenArray(int** arr, int rows, int cols){
    int size = rows*cols;
    int* a1d = new int[size];
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            a1d[i * cols + j] = *(*(arr + i) + j);

        }
    }
    printFlattenedArray(a1d, size);
    return a1d;
}
int main() {
    int rows = 3;
    int cols = 3;
    int** arr = new int*[rows]; //Allocate memory for rows

    for (int i = 0; i < rows; i++) {
        arr[i] = new int[cols]; // Allocate memory for columns
    }
    

    std::cout<<"Enter the elements of the array\n";
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            std::cout<<"Enter element for : ["<<i + 1<<"]["<<j + 1<<"]";
            std::cin>>*(*(arr + i) + j);
        }
    }
    printArray(arr, rows, cols);
    int* flattenedArray = flattenArray(arr, rows, cols);
    delete[] flattenedArray;
    //free memory
    for(int i = 0; i < rows; i++){
        delete [] arr[i];
    }
    delete [] arr;
    return 0;
}