//Write a C++ program to dynamically allocate a 3×3 matrix using a pointer-to-pointer (int**),
// take user input to fill it, and then display the matrix in a formatted way. Ensure proper memory deallocation after use.

#include <iostream>

int main() {
    int rows = 3, cols = 3;

    // Step 1: Allocate memory for rows
    int** a2d = new int*[rows];
    for (int i = 0; i < rows; i++) {
        a2d[i] = new int[cols];
    }

    // Step 2: Take user input with row and column indication
    std::cout << "Enter the elements of the 3x3 array:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << "Enter element at position [" << i + 1 << "][" << j + 1 << "]: ";
            std::cin >> a2d[i][j];
        }
    }

    // Step 3: Print the 3x3 array
    std::cout << "\nThe 3x3 matrix is:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << a2d[i][j] << "\t";  // Use tab for better alignment
        }
        std::cout << std::endl;
    }

    // Step 4: Free allocated memory
    for (int i = 0; i < rows; i++) {
        delete[] a2d[i];
    }
    delete[] a2d;

    return 0;
}
