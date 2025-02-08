//" 13. Implement a function that transposes a 2D matrix using pointer arithmetic." 
#include<iostream>

void transpose(int** a2d, int rows, int cols) {
    std::cout<<"The transpose of the matrix is :- \n";
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            std::cout<<*(*(a2d + j) + i)<<"\t";
        }
        std::cout<<std::endl;
    }
}
void printMatrix(int** a2d, int rows, int cols) {
    std::cout<<"The matrix is :- \n";
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            std::cout<<*(*(a2d + i) + j)<<"\t";
        }
        std::cout<<std::endl;
    }
}
int main (){
    int rows = 3; int cols = 3;
    int** a2d = new int*[rows];

    for(int i = 0 ; i < rows; i++){
        a2d[i] = new int[cols];
    }
    std::cout<<"Enter the elements of the 3x3 array \n";
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            std::cout<<"Enter element for ["<< i + 1<<"]["<< j + 1<<"]: ";
            std::cin>> *(*(a2d + i) + j);
        }
    }
    printMatrix(a2d, rows, cols);
    transpose(a2d, rows, cols);
    //free memory
    for(int i = 0; i < rows; i++){
        delete [] a2d[i];
    }
    delete [] a2d;

}