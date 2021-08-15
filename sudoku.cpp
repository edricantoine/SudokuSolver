#include <iostream>

#include "sfns.hpp"

using namespace std;

int main() {

  int grid[9][9];

  int i;
  int j;

  for(i = 0; i < 9; i++) {
    for(j = 0; j < 9; j++) {
      int currentDigit;

      cout << "Enter digit for row " + to_string(i) + ", column " + to_string(j) + ".\n";
      cout << "Enter 0 for blank space.\n";
      cin >> currentDigit;

      grid[i][j] = currentDigit;

     
      
    }
  }

 
		    

  if(solve(grid) == true) {

    display(grid);

  } else {

    cout << "There is no solution for this Sudoku.\n";

  }


  return 0;

 

}

