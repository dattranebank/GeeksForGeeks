#include <iostream>
#include <vector> // Dùng vector
using namespace std;
// Beginner's DSA Sheet: EASY - 17. Missing in Array

// Cách 1: Toán học
// 1115/1115, 0.4s
int missingNumber(int n, vector <int> &arr)
{
    int sum=0;
    for (int i=1;i<n+1;i++)
    {
        sum=sum+i-arr[i];
    }
    for (int i=0;i<n-1;i++)
    {
        sum=sum-arr[i];
    }
    return sum;
}


int main()
{
    int n;
    cout <<"Nhap n:"; cin >>n;
    vector <int> arr;
    for (int i=0;i<n-1;i++)
    {
        int a;
        cin >>a;
        arr.push_back(a);
    }
    cout <<missingNumber(n,arr);
}

