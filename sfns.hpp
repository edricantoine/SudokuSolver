#include <iostream>


using namespace std;

void display(int arr[9][9]);
bool isValid(int grid[9][9], int row, int col, int num);
bool solve(int grid[9][9]);
bool findEmpty(int grid[9][9], int& row, int& col);
bool inRow(int grid[9][9], int row, int num);
bool inCol(int grid[9][9], int col, int num);
bool inGrid(int grid[9][9], int srow, int scol, int num);
