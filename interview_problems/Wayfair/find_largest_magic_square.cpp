// Problems (3/3) for winter 2020 wayfair co-op
// Find largest size of a magic square in a given NxM matrix, numbers can be repeated...

// spent like 110 mins on this question, 40-50 on debugging........
// lessons:
//  1. try some base cases first, then generalize it, don't try to do it at one-shot
//      - I realized this only after 20 mins in
#include <algorithm>
#include <vector>
#include <iostream>
#include <cassert>
using namespace std;

// bool check2(vector< vector<int> > &A) {
//     int row = A.size();
//     int col = A[0].size();
//     for (int i = 1; i < row; i++) {
//         for (int j = 1; i < col; j++) {
//             int row1 = A[i-1][j-1] + A[i-1][j];
//             int row2 = A[i][j-1] + A[i][j];
//             if (row1 != row2) break;
            
//             int col1 = A[i-1][j-1] + A[i-1][j];
//             if (row2 != col1) break;
//             int col2 = A[i][j-1] + A[i][j];
//             if (col1 != col2) break;
            
//             int d1 = A[i-1][j-1] + A[i][j];
//             if (col2 != d1) break;
//             int d2 = A[i-1][j] + A[i][j-1];
//             if (d1 != d2) {
//                 break;
//             }
//             else {
//                 return true;
//             }
//         }
//     }
//     return false;
// }

void print_vec(vector<int> v) {
    for (auto i : v)
        cout << i << " ";
    cout << endl;
}

bool checkSize(vector< vector<int> > &a, int size) {
    int row = a.size();
    int col = a[0].size();
    // cout << "row = " << row << ", col " << col << ", size = " << size << endl;
    for (int i = size-1; i < row; i++) {
        for (int j = size-1; j < col; j++) {
            // cout << "==== NEW ROUND ==== \n";
            // cout << "i = " << i << "/" << row << ", j = " << j << "/" << col << endl;
            int tRow = size;
            int tCol = size;
            vector<int> rows;
            while (--tRow >= 0) {
                int curr = 0;
                tCol = size;
                while (--tCol >= 0)
                    curr += a[i-tRow][j-tCol];
                rows.push_back(curr);
            }
            // cout << "rows:\n";
            // print_vec(rows);
            if (std::equal(rows.begin()+1, rows.end(), rows.begin()) == false) continue;
            
            tRow = size;
            tCol = size;
            vector<int> cols;
            while (--tCol >= 0) {
                int curr = 0;
                tRow = size;
                while (--tRow >= 0)
                    curr += a[i-tRow][j-tCol];
                cols.push_back(curr);
            }
            // cout << "cols:\n";
            // print_vec(cols);
            if (std::equal(cols.begin()+1, cols.end(), cols.begin()) == false) continue;
            if (rows[0] != cols[0]) continue;
            
            int d1 = 0;
            int d2 = 0;
            tRow = size;
            tCol = size;
            while (--tRow >= 0 && --tCol >= 0) {
                d1 += a[i-tRow][j-tCol];
            }
            if (d1 != cols[0]) continue;

            tRow = size;
            tCol = 0;
            while (--tRow >= 0) {
                d2 += a[i-tRow][j-tCol];
                tCol++;
            }
            if (d1 != d2) {
                // cout << "d1 = " << d1 << ", d2 = " << d2 << endl;
                continue;
            }
            else {
                return true;
            }
        }
    }
    return false;
}

int solution(vector< vector<int> > &A) {
    // write your code in C++14 (g++ 6.2.0)
    int row = A.size();
    int col = A[0].size();
    
    int size = max(row, col);
    for (int i = size; i >= 2; i--) {
        if (checkSize(A, i) == true)
            return i;
        else {
            // cout << "false\n";
        }
    }
    return 1;
}

int main() {

    vector<vector<int>> t1 = {{2, 2, 1, 1}, {2, 2, 2, 2}, {1, 2, 2, 2}};
    assert(solution(t1) == 2);
    cout << ">>> test 1 passed!" << endl;

    vector<vector<int>> t2 = {{4, 3, 4, 5, 3}, {2, 7, 3, 8, 4}, {1, 7, 6, 5, 2}, {8, 4, 9, 5, 5}};
    assert(solution(t2) == 3);
    cout << ">>> test 2 passed!" << endl;
    return 0;
}