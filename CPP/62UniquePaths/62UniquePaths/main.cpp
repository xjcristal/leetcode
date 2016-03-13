//
//  main.cpp
//  62UniquePaths
//
//  Created by xjcristal on 16/3/12.
//  Copyright © 2016年 CBP. All rights reserved.
//

#include <iostream>
using namespace std;


int uniquePaths(int m, int n) {
    int matrix[101][101] = {0};
    
    for (int i = 1; i <= m; i++) {
        matrix[i][n] = 1;
    }
    
    for (int i = 1; i <= n; i++) {
        matrix[m][i] = 1;
    }
    
    for (int i = m-1; i > 0; i--) {
        for (int j = n-1; j > 0; j--) {
            matrix[i][j] = matrix[i+1][j] + matrix[i][j+1];
        }
    }
    
    return matrix[1][1];
    
}

int main(int argc, const char * argv[]) {
    
    return 0;
}
