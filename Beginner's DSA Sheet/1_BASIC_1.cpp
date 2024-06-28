#include <iostream>
#include <vector>
using namespace std;

// Beginner's DSA Sheet: 1. Print first n Fibonacci Numbers
// Cách 1: Array - Đã giải đúng
void printFibb1(int n)
{
    int F1=1;
    int F2=1;
    if (n==1)
    {
        cout <<1;
    }
    else if (n==2)
    {
        cout <<1<<" "<<1;
    }
    else
    {
        int F0;
        cout <<1<<" "<<1<<" ";
        for (int i=0;i<n-2;i++)
        {
            F0=F1+F2;
            F2=F1;
            F1=F0;
            cout <<F0<<" ";
        }
    }
}

// Cách 2: Vector - Đã giải đúng trên GFG
vector <long long> printFibb2(int n)
{
    long long F1=1;
    long long F2=1;
    vector <long long> vec;
    if (n==1)
    {
        cout <<1;
        vec.push_back(1);

    }
    else if (n==2)
    {
        cout <<1<<" "<<1;
        vec.push_back(1);
        vec.push_back(1);
    }
    else
    {
        long long F0;
        cout <<1<<" "<<1<<" ";
        vec.push_back(1);
        vec.push_back(1);
        for (int i=0;i<n-2;i++)
        {
            F0=F1+F2;
            F2=F1;
            F1=F0;
            cout <<F0<<" ";
            vec.push_back(F0);
        }
    }
    cout <<endl;
    return vec;
}

int main()
{
    int n;
    cout <<"Nhap n:"; cin >>n;
    vector <long long> vec=printFibb2(n);
    cout <<"Output:";
    for (int i=0;i<vec.size();i++)
    {
        cout <<vec[i]<<" ";
    }


}
