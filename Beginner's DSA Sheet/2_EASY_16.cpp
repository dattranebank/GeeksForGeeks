#include <iostream>
#include <vector> // Dùng vector
using namespace std;
// Beginner's DSA Sheet: EASY - 16. Wave Array

// Cách 1: Naive Approach
// 1120/1120, 0.26s
void convertToWave(int n, vector <int> &arr)
{
    for (int i=0;i<n-1;i++)
    {
        if (i%2==0 && arr[i]<arr[i+1])
        {
            int dem=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=dem;
        }
        else if (i%2==1 && arr[i]>arr[i+1])
        {
            int dem=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=dem;
        }
    }
}


int main()
{
    int n;
    cout <<"Nhap n:"; cin >>n;
    vector <int> arr;
    for (int i=0;i<n;i++)
    {
        int a;
        cin >>a;
        arr.push_back(a);
    }
    convertToWave(n,arr);
    for (int i=0;i<n;i++)
    {
        cout <<arr[i]<<" ";
    }
}
