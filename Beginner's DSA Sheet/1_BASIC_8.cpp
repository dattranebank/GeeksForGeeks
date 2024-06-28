#include <iostream>
using namespace std;

// Beginner's DSA Sheet: 8. Array Search

// Cách 1: Array - Đã giải đúng trên GFG
int search1(int arr[],int n,int x)
{
    for (int i=0;i<n;i++)
    {
        if (arr[i]==x)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n,x;
    cout <<"Nhap n:"; cin >>n;
    cout <<"Nhap x:"; cin >>x;
    int arr[n];
    for (int i=0;i<n;i++) cin >>arr[i];
    cout <<search1(arr,n,x);
}
