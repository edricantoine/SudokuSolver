#include <iostream>


using namespace std;



void display(int arr[9][9]) {

  for(int i = 0; i < 9; i++) {

    for(int j = 0; j < 9; j++) {

      cout << arr[i][j] << " ";

    }

    cout << endl;

    

  }

    

}

bool findEmpty(int grid[9][9], int& row, int& col) {

  for(row = 0; row < 9; row++) {

    for(col = 0; col < 9; col++) {

      if(grid[row][col] == 0) {
	return true;
	

      }

    }

  }

  return false;


}

bool inRow(int grid[9][9], int row, int num) {

  for(int col = 0; col < 9; col++) {

    if(grid[row][col] == num) {
      return true;
    }

  }

  return false;

}

bool inCol(int grid[9][9], int col, int num) {

  for(int row = 0; row < 9; row++) {

    if(grid[row][col] == num) {

      return true;
    }

  }

  return false;

}

bool inGrid(int grid[9][9], int row, int col, int num) {

  for(int row2 = 0; row2 < 3; row2++) {

    for(int col2  = 0; col2 < 3; col2++) {

      if(grid[row + row2][col + col2] == num) {

	return true;

      }

    }

  }

  return false;

}

bool isValid(int grid[9][9], int row, int col, int num) {

  if(!inRow(grid, row, num) && !inCol(grid, col, num) && !inGrid(grid, row - row % 3, col - col % 3, num) && grid[row][col] == 0) {

    return true;

  }

  return false;

}

bool solve(int grid[9][9]) {

  int row, col;

  if(!findEmpty(grid, row, col)) {

    return true;
  }

  for(int num = 1;  num <= 9; num++) {

    if(isValid(grid, row, col, num)) {

      grid[row][col] = num;

      if(solve(grid)) {

	return true;
      } else {

	grid[row][col] = 0;

      }

    }

   

  }

  return false;

  

  

}



 

  
