#include <iostream>
using namespace std;
// Beginner's DSA Sheet: MEDIUM - 6. Longest Common Subsequence

// Cách 1: Naive Approach
int lcs(int n, int m, string str1, string str2)
{
    int maxLength=0;
    for (int i=0;i<n;i++)
    {
        int Length=0;
        for (int j=0;j<n;j++)
        {
            for (int k=0;k<m;k++)
            {
                if (str1[j]==str2[k])
                {
                    Length++;
                }
            }

        }
        if (maxLength<Length) maxLength=Length;
    }
    return maxLength;
}

int main()
{
    string str1, str2;
    cout <<"Input str1:"; getline(cin,str1);
    cout <<"Input str2:"; getline(cin,str2);
    int n=str1.length();
    int m=str2.length();
    cout <<lcs(n,m,str1,str2);
}
