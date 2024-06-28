#include <iostream>
#include <vector>
using namespace std;

// Beginner's DSA Sheet: EASY - 13. Summed Matrix

// Cách 1: Naive Approach - Không thể dùng ma trận

// Cách 2: Toán học
// 1102/1102, 0.01s
long long sumMatrix(long long n, long long q)
{
    // Giá trị trong ma trận luôn 2<= và <=2*n
    if (n==1)
    {
        if (q==2) return 1;
        else return 0;
    }
    else
    {
        if (q>=2 && q<=n*2)
        {
            long long maxValue=n+1; // Tìm giá trị của hàng chéo
            long long cnt=n; // Đếm số lượng giá trị hàng chéo
            q=abs(q-maxValue); // Tính độ chênh lệnh
            cnt=abs(cnt-q); // Đếm số lượng giá trị q
            return cnt;
        }
        else return 0;
    }
}

int main()
{
    long long n,q;
    cout <<"Nhap n:"; cin >>n;
    cout <<"Nhap q:"; cin >>q;
    cout <<sumMatrix(n,q);


}



