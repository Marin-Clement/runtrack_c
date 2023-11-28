
#include <stdio.h>


int is_valid(int grid[9][9], int row, int col, int num) {
    // Check if the number is already present in the row
    for (int i = 0; i < 9; i++) {
        if (grid[row][i] == num) {
            return 0;
        }
    }
    
    // Check if the number is already present in the column
    for (int i = 0; i < 9; i++) {
        if (grid[i][col] == num) {
            return 0;
        }
    }
    
    // Check if the number is already present in the 3x3 box
    int startRow = row - row % 3;
    int startCol = col - col % 3;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (grid[startRow + i][startCol + j] == num) {
                return 0;
            }
        }
    }
    
    return 1;
}

int sudoku_solver(int grid[9][9]) {
    for (int row = 0; row < 9; row++) {
        for (int col = 0; col < 9; col++) {
            // Find the first empty cell
            if (grid[row][col] == 0) {
                // Try all numbers from 1 to 9
                for (int num = 1; num <= 9; num++) {
                    // Check if the number is valid
                    if (is_valid(grid, row, col, num)) {
                        grid[row][col] = num;
                        
                        // Solve the rest of the grid
                        if (sudoku_solver(grid)) {
                            return 1;
                        }
                        
                        // If the number is not valid, reset the cell
                        grid[row][col] = 0;
                    }
                }
                
                // If no number is valid, the grid is not solvable
                return 0;
            }
        }
    }
    
    // If there are no empty cells, the grid is solved
    return 1;
}