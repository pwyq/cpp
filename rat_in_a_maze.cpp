/*
 * Rat In A Maze
 *
 * Backtracking
 * 
 * Problem:
 * Given a nxn matrix, each cell is represented by 0 or 1.
 * 0 means the block is cannot be use and 1 means the block can be used.
 *
 * Source is on the upper-left, and destination is on the bottom-right.
 * The rat can only go down or right.
 *  - An improved version is go in 4 directions.
 * 
 * Question:
 *  - Is given maze have only one solution? If there are multiple solutions, we then should find minimum pahts, right?
 */ 

#include <stdio.h>
#include <iostream>

#define N 4

// Following are wrong!!!
//using namespace std::cout;
//using namespace std::endl;

using std::cout;
using std::endl;

//int counter = 0;

void printMaze(int maze[N][N]) {
    //cout << "---------------------------- " << counter << endl;
    cout << "---------------------------- \n";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << maze[i][j] << " ";
        }
        cout << endl;
    }
    cout << "---------------------------- \n";
    //counter++;
    return;
}

bool isAtEnd(int row, int col) {
    return (row == N-1) && (col == N-1);
}

bool solution(int maze[N][N], int res[N][N], int row, int col) {
//    printMaze(res);
//    cout << "(row, col) = (" << row << ", " << col << ")\n";
    if (row < 0 || row >= N || col < 0 || col >= N) {
        cout << "overflow\n";
        return false;
    }
    if (!maze[row][col]) {
        cout << "Invalid path\n";
        return false;
    }

    res[row][col] = 1;// important step; mark the place you go!

    if (isAtEnd(row, col)) {
        // we found a solution
        cout << "reached an END!\n";
        return true;
    }

    if (solution(maze, res, row+1, col)) {
        return true;
    }

    if (solution(maze, res, row, col+1)) {
        return true;
    }
#if 0
    if (solution(maze, res, row+1, col)) {
        // if can go down
        cout << "go down\n";
        res[row+1][col] = 1;
    }
    else if (solution(maze, res, row, col+1)) {
        // if can go right
        cout << "go right\n";
        res[row][col+1] = 1;
    }
#endif
    return false;
}

bool solveMaze(int maze[N][N]) {
    // initialize result matrix
    int res[N][N] = {0};
    res[0][0] = 1;

    if(solution(maze, res, 0, 0)) {
        printMaze(res);
        return true;
    }
    else {
        cout << "No solution" << endl;
    }
    return false;
}

// Test Cases
void testCase1();

// driver program to test above function
int main()
{
    testCase1();
    return 0;
}

/* * * * * * * * * * * * * * *
 *   Test Cases              *
 * * * * * * * * * * * * * * */
void testCase1() {
    int maze[N][N] = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {0, 1, 0, 0},
        {1, 1, 1, 1},
    };

    solveMaze(maze);
    return;
}

