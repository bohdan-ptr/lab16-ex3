#include <stdio.h>

const int ROWS = 5;
const int COLS = 10;

int findRowWithPositiveElements(int matrix[ROWS][COLS]) {
    for (int i = 0; i < ROWS; ++i) {
        int allPositive = 1; // Flag indicating whether all elements in the row are positive

        for (int j = 0; j < COLS; ++j) {
            if (matrix[i][j] <= 0) {
                allPositive = 0; // If any element is not positive, change the flag
                break;
            }
        }
        if (allPositive) {
            return i + 1; // Return the row number (1-based indexing)
        }
    }
    return 0; // If there are no rows with only positive elements
}
int main() {
    int matrix[ROWS][COLS];

    // Input matrix elements
    printf("Enter the elements of the %dx%d matrix:\n", ROWS, COLS);
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            scanf_s("%d", &matrix[i][j]);
        }
    }
    // Find and print the result
    int result = findRowWithPositiveElements(matrix);
    if (result != 0) {
        printf("The number of the first row with only positive elements: %d\n", result);
    }
    else {
        printf("There are no rows with only positive elements.\n");
    }
    return 0;
}