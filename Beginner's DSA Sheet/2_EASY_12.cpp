#include <iostream>
#include <vector>
using namespace std;

// Beginner's DSA Sheet: EASY - 12. Rotate by 90 degree
// Cách 1: Naive Approach
// 235/235, 0.11s
void transpose(vector<vector<int>> &matrix, int n)
{
    // Từ đường chéo trở xuống thì ta bỏ qua, ta chỉ vòng lặp
    // nửa trên của ma trận
    vector <vector<int>> matrix2;
    for (int j=n-1;j>=0;j--)
    {
        vector <int> vec;
        for (int i=0;i<n;i++)
        {
            int a=matrix[i][j];
            vec.push_back(a);
            cout <<matrix[i][j]<<" ";
        }
        matrix2.push_back(vec);
        cout <<endl;
    }
    matrix.clear();
    copy(matrix2.begin(), matrix2.end(), back_inserter(matrix));
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


