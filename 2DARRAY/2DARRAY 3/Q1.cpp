// Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.
// You must do it in place.
// Input :
// 1 1 1
// 1 0 1
// 1 1 1
// Output :
// 1 0 1
// 0 0 0
// 1 0 1

#include<bits/stdc++.h>
using namespace std;
 
int main()
{


 vector<vector<int>> arr = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};

    cout << "Input Matrix:" << endl;
    for (const auto& row : arr) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    // Function to set zeroes
    int rows = arr.size();
    int cols = arr[0].size();

    bool zeroFirstRow = false;
    bool zeroFirstCol = false;

    // Check if the first row should be zeroed
    for (int j = 0; j < cols; ++j) {
        if (arr[0][j] == 0) {
            zeroFirstRow = true;
            break;
        }
    }

    // Check if the first column should be zeroed
    for (int i = 0; i < rows; ++i) {
        if (arr[i][0] == 0) {
            zeroFirstCol = true;
            break;
        }
    }

    // Mark zeros on first row and column
    for (int i = 1; i < rows; ++i) {
        for (int j = 1; j < cols; ++j) {
            if (arr[i][j] == 0) {
                arr[i][0] = 0;
                arr[0][j] = 0;
            }
        }
    }

    // Set zeros except for first row and column based on marks in first row and column
    for (int i = 1; i < rows; ++i) {
        for (int j = 1; j < cols; ++j) {
            if (arr[i][0] == 0 || arr[0][j] == 0) {
                arr[i][j] = 0;
            }
        }
    }

    // Set zeros for first row if needed
    if (zeroFirstRow) {
        for (int j = 0; j < cols; ++j) {
            arr[0][j] = 0;
        }
    }

    // Set zeros for first column if needed
    if (zeroFirstCol) {
        for (int i = 0; i < rows; ++i) {
            arr[i][0] = 0;
        }
    }

    cout << "\nMatrix after setting zeroes:" << endl;
    for (const auto& row : arr) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
 
    return 0;
}