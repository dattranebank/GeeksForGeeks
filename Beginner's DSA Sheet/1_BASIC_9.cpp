#include <iostream>
#include <utility> // Pair
using namespace std;

// Beginner's DSA Sheet: 9. Find minimum and maximum element in an array

// Cách 1: Naive Approach
// 30/85 case, 1.8s
pair <long long, long long> getMinMax1(long long a[], int n)
{
    for (int i=0;i<n-1;i++)
    {
        for (int j=i+1;j<n;j++)
        {
            if (a[i]>a[j])
            {
                int dem=a[i];
                a[i]=a[j];
                a[j]=dem;
            }
        }
    }
    return make_pair(a[0],a[n-1]);
}

// Cách 2: Naive Apporach cải tiến
// 85/85 case, 0.45s
pair <long long, long long> getMinMax2(long long a[], int n)
{
    long long minValue=a[0];
    long long maxValue=a[0];
    for (int i=1;i<n;i++)
    {
        if (a[i]<minValue) minValue=a[i];
        if (a[i]>maxValue) maxValue=a[i];
    }
    if (minValue>maxValue) return make_pair(maxValue,minValue);
    else return make_pair(minValue,maxValue);
}



int main()
{
    int n;
    cout <<"Nhap n:"; cin >>n;
    long long a[n];
    for (int i=0;i<n;i++) cin >>a[i];
    pair <long long, long long> answer=getMinMax2(a,n);
    cout <<answer.first<<" "<<answer.second;
}
