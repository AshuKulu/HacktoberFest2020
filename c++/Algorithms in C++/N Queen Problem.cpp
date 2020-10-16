#include<iostream>
using namespace std;
#define n 5 

void print(int mat[n][n]) 
{ 
    for (int i = 0; i < n; i++) 
    { 
        for (int j = 0; j < n; j++)
        {
           cout<<" "<<mat[i][j]<<" ";
        }
        cout<<endl;
    } 
} 
bool use(int mat[n][n], int r, int c) 
{ 
    int i, j; 
    for (i = 0; i < c; i++) 
    {
        if (mat[r][i]) 
        {
            return false; 
        }
    }
    for (i = r, j = c; i >= 0 && j >= 0; i--, j--)
    {
        if (mat[i][j]) 
        {
            return false; 
        }
    }
    for (i = r, j = c; j >= 0 && i < n; i++, j--) 
    {
        if (mat[i][j]) 
        {
            return false;
        }
    }
    return true; 
} 
bool solution(int mat[n][n], int c) 
{ 
    if (c>= n) 
    {
        return true;
    }
    for (int i = 0; i < n; i++) 
    { 
        if (use(mat, i, c)) 
        { 
            mat[i][c] = 1; 
            if (solution(mat, c + 1))
            {
                return true; 
            }
            mat[i][c] = 0;
        } 
    } 
    return false; 
} 
int main() 
{ 
    int mat[n][n] = { { 0, 0, 0, 0, 0 }, 
                      { 0, 0, 0, 0, 0 }, 
                      { 0, 0, 0, 0, 0 }, 
                      { 0, 0, 0, 0, 0 },
                      { 0, 0, 0, 0, 0 } }; 
  
    if (solution(mat, 0) == false) 
    { 
        cout<<"Solution does not exist"; 
        return 0;
    } 
    print(mat); 
    return 0; 
} 
