//" 15. Write a function that rotates a 2D array (matrix) by 90 degrees clockwise using pointers." 
#include<iostream>

void printArray(int** a2d, int rows, int cols){
    std::cout<<"The array is : \n";
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            std::cout<<*(*(a2d + i) + j)<<" ";
        }
        std::cout<<std::endl;
    }
}
void rotate(int** a2d, int rows, int cols){
    std::cout<<"The array is : \n";
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            std::cout<<*(*(a2d + j) + i)<<" ";
        }
        std::cout<<std::endl;
    }
}
int main (){ 
    int rows = 3;
    int cols = 3;

    int** a2d = new int*[rows];
    for(int i = 0; i < rows; i++){
        a2d[i] = new int[cols];
    }
    std::cout<<"Enter the elements of 3x3 array \n";
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            std::cout<<"a2d["<<i + 1<<"]["<<j + 1<<"]";
            std::cin>>*(*(a2d + i) + j);
        }
    }
    printArray(a2d, rows, cols);
    rotate(a2d, rows, cols);
    for(int i = 0; i < rows; i++){
        delete [] a2d[i];
    }
    delete [] a2d;

}