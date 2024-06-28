#include <iostream>
#include <vector> // Dùng vector
using namespace std;
// Beginner's DSA Sheet: EASY - 18. Bitonic Point

// Cách 1: Chẻ đôi mảng
// 251/251, 0.44s
// Đề bài cho mảng tăng dần sau đó giảm dần, do đó chúng ta
// sẽ chọn vị trí ở giữa mảng để xem nó đang tăng hay đang giảm
// nếu đang tăng thì chạy hết mảng, nếu đang giảm thì chạy ngược về
// Vẫn có thể cải tiến được
int findMaximum(int arr[], int n)
{
    int middle=n/2;
    int maxValue=0;
    if (arr[middle]>arr[middle-1])
    {
        maxValue=arr[middle];
        for (int i=middle;i<n;i++)
        {
            if (arr[i]>maxValue) maxValue=arr[i];
        }
    }
    else
    {
        maxValue=arr[middle-1];
        for (int i=middle-1;i>=0;i--)
        {
            if (arr[i]>maxValue) maxValue=arr[i];
        }
    }
    return maxValue;
}


int main()
{
    int n;
    cout <<"Nhap n:"; cin >>n;
    int arr[n];
    for (int i=0;i<n;i++) cin >>arr[i];
    cout <<findMaximum(arr,n);
}

