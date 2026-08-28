#ifndef CALCULATOR_H
#define CALCULATOR_H

void trace(int n, int m, int arr[n][m]);
void transpose(int n, int m, int arr[n][m]);
void determinant(int n, int m, int arr[n][m]);
void scalar(int x, int n, int m, int arr[n][m]);
void row(int y, int n, int m, int arr[n][m]);
void column(int y, int n, int m, int arr[n][m]);
void symmetric(int n, int m, int arr[n][m]);
void skew(int n, int m, int arr[n][m]);
void addition(int n, int m, int arr[n][m], int k, int l, int array[k][l]);
void subtraction(int n, int m, int arr[n][m], int k, int l, int array[k][l]);
void multiplication(int n, int m, int arr[n][m], int k, int l, int array[k][l]);
void power(int n, int m, int arr[n][m], int p);

#endif // CALCULATOR_H