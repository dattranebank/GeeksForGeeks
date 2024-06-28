#include <iostream>
#include <vector>
using namespace std;

// Beginner's DSA Sheet: EASY - 11. Transpose of Matrix
// Cách 1: Naive Approach
// 1121/1121, 0.25s
void transpose(vector<vector<int>> &matrix, int n)
{
    // Từ đường chéo trở xuống thì ta bỏ qua, ta chỉ vòng lặp
    // nửa trên của ma trận
    for (int i=0;i<n-1;i++)
    {
        for (int j=i+1;j<n;j++)
        {
            int dem=matrix[i][j];
            matrix[i][j]=matrix[j][i];
            matrix[j][i]=dem;
        }
    }
}

int main()
{
    int n;
    cout <<"Nhap n:"; cin >>n;
    vector <vector<int>> matrix;
    for (int i=0;i<n;i++)
    {
        vector <int> vec;
        for (int j=0;j<n;j++)
        {
            int a;
            cin >>a;
            vec.push_back(a);

        }
        matrix.push_back(vec);
    }
    transpose(matrix,n);

    for (int i=0;i<matrix.size();i++)
    {
        for (int j=0;j<matrix[i].size();j++)
        {
            cout <<matrix[i][j]<<" ";
        }
        cout <<endl;
    }


}

