# Matrix Calculator

A comprehensive C-based matrix calculator that performs various operations on single and dual matrices.

## Overview

This Matrix Calculator is a command-line application written in C that provides functionality for performing mathematical operations on matrices. It supports operations on both single matrices and operations involving two matrices.

## Features

### Single Matrix Operations

1. **Trace** - Calculates the sum of diagonal elements of a matrix
2. **Transpose** - Displays the transpose of a matrix
3. **Determinant** - Computes the determinant (supports 1×1, 2×2, and 3×3 matrices)
4. **Scalar Multiplication** - Multiplies all matrix elements by a scalar value
5. **Row Sum** - Calculates the sum of elements in a specific row
6. **Column Sum** - Calculates the sum of elements in a specific column
7. **Symmetric Matrix Check** - Determines if the matrix is symmetric
8. **Skew Symmetric Matrix Check** - Determines if the matrix is skew-symmetric
9. **Matrix Power** - Raises a square matrix to a specified power

### Two Matrix Operations

1. **Addition** - Adds two matrices of the same order
2. **Subtraction** - Subtracts two matrices of the same order
3. **Multiplication** - Multiplies two compatible matrices

## File Structure

```
Matrix Calculator/
├── main.c          # Main program with user interface and menu system
├── calculator.c    # Implementation of all matrix operations
├── calculator.h    # Header file with function declarations
└── README.md       # This file
```

## Compilation

To compile the program, use:

```bash
gcc -o calculator main.c calculator.c
```

## Usage

Run the compiled program:

```bash
./calculator
```

### Interactive Menu

1. **Input Matrix Dimensions**
   - Enter the number of rows and columns
   - Enter the matrix elements

2. **Choose Operation Type**
   - Press `1` for operations on a single matrix
   - Press `2` for operations on two matrices

3. **Single Matrix Operations**
   - Select from options 1-9 to perform the desired operation
   - Some operations may require additional input (e.g., scalar value for scalar multiplication, power value for matrix power)

4. **Two Matrix Operations**
   - Enter the second matrix dimensions and elements
   - Select from options 1-3 (Addition, Subtraction, or Multiplication)
   - Results will be displayed

5. **Continue or Exit**
   - Press `c` to continue with another operation
   - Press `e` to exit the program

## Example Usage

### Calculating Matrix Trace

```
Enter no of rows of matrix: 3
Enter no of columns of matrix: 3
Enter the elements of the matrix:
Enter element at position [0][0]: 1
Enter element at position [0][1]: 2
Enter element at position [0][2]: 3
Enter element at position [1][0]: 4
Enter element at position [1][1]: 5
Enter element at position [1][2]: 6
Enter element at position [2][0]: 7
Enter element at position [2][1]: 8
Enter element at position [2][2]: 9

The entered matrix is:
1 2 3
4 5 6
7 8 9

Press 1 to perform operations on matrix or 2 to perform operations on two matrices: 1
Which operation do you want to perform on the matrix?
1. Trace
...
Choice: 1
The trace of given matrix is 15
```

## Function Reference

### calculator.h

All functions take matrix dimensions and the matrix array as parameters:

- `void trace(int n, int m, int arr[n][m])`
- `void transpose(int n, int m, int arr[n][m])`
- `void determinant(int n, int m, int arr[n][m])`
- `void scalar(int x, int n, int m, int arr[n][m])`
- `void row(int y, int n, int m, int arr[n][m])`
- `void column(int y, int n, int m, int arr[n][m])`
- `void symmetric(int n, int m, int arr[n][m])`
- `void skew(int n, int m, int arr[n][m])`
- `void addition(int n, int m, int arr[n][m], int k, int l, int array[k][l])`
- `void subtraction(int n, int m, int arr[n][m], int k, int l, int array[k][l])`
- `void multiplication(int n, int m, int arr[n][m], int k, int l, int array[k][l])`
- `void power(int n, int m, int arr[n][m], int p)`

## Limitations

- **Determinant**: Only supports square matrices up to 3×3 order
- **Matrix Power**: Only works with square matrices
- **Data Type**: Uses integers (int) for matrix elements
- **Array Size**: Matrix dimensions must be known at compile time (uses Variable Length Arrays)

## Requirements

- GCC compiler (or any C99-compatible compiler supporting Variable Length Arrays)
- Standard C library

## Notes

- The program uses a continuous loop allowing multiple operations until the user chooses to exit
- Input validation is performed to check matrix compatibility for operations
- All results are displayed directly in the console

## Author

Rayyan Bhat

## License

This project is part of the C Programming repository.
