#include <iostream>
using namespace std;

// Beginner's DSA Sheet: EASY - 10. K-th Bit is Set or Not
// Cách 1: Naive Approach
// 1121/1121, 0.01s
bool checkKthBit1(int n, int k)
{
    k=k+1;
    while (n!=0)
    {
        int d;
        d=n%2;
        n=n/2;
        k=k-1;
        if (k==0)
        {
            if (d==1) return true;
            else return false;
        }
    }
    cout <<endl;
}

int main()
{
    long long n,k;
    cout <<"Nhap n:"; cin >>n;
    cout <<"Nhap k:"; cin >>k;
    cout <<checkKthBit1(n,k);

}
