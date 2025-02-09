//" 15. Write a function that rotates a 2D array (matrix) by 90 degrees clockwise using pointers." 
#include<iostream>

void printArray(int** a2d, int rows, int cols){
    std::cout<<"The array is : \n";
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            std::cout<<*(*(a2d + i) + j)<<"  ";
        }
        std::cout<<std::endl;
    }
}
void rotate(int** a2d, int rows, int cols){
//step 1  Transpose the matrix. (swap a2d[i][j] with a2d[j][i])
    for(int i = 0; i < rows; i++){
        for(int j = i+1; j < cols; j++){
            // std::swap(*(*(a2d + i) + j), *(*(a2d + j) + i)) pre- built function for swapping.
            //manually.
            int temp = *(*(a2d + i) + j);
            *(*(a2d + i) + j) = *(*(a2d + j) + i);
            *(*(a2d + j) + i) = temp;
        }
    }
// Step 2: Reverse each row to complete 90-degree rotation.
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols / 2; j++){
            int temp = *(*(a2d + i) + j);
            *(*(a2d + i) + j) = *(*(a2d + i) + (cols -j - 1));
            *(*(a2d + i) + (cols - j - 1)) = temp;
        }
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
    printArray(a2d, rows, cols);

    for(int i = 0; i < rows; i++){
        delete [] a2d[i];
    }
    delete [] a2d;

}