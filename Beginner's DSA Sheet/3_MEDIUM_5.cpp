#include <iostream>
using namespace std;
// Beginner's DSA Sheet: MEDIUM - 5. Longest Increasing Subsequence

// Cách 1: Naive Approach - Không giải được
int longestSubsequence(int n, int a[])
{
    // Không dùng Naive Approach 3 vòng lặp được
}

int main()
{
    int n;
    cout <<"Nhap n:";cin >>n;
    int a[n];
    for (int i=0;i<n;i++)
    {
        cin >>a[i];
    }
    cout <<longestSubsequence(n,a);
}
