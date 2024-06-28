#include <iostream>
#include <map> // Dùng map
using namespace std;

// Beginner's DSA Sheet: EASY - 15. Anagram

// Cách 1: Dùng map
// 222/222, 0.18s
bool isAnagram(string a, string b)
{
    map <char,int> mp1;
    map <char,int> mp2;
    for (int i=0;i<a.length();i++) mp1[a[i]]++;
    for (int i=0;i<b.length();i++) mp2[b[i]]++;
    bool check=true;
    if (mp1!=mp2) check=false;
    return check;
}

int main()
{
    string a,b;
    cout <<"Nhap a:"; getline(cin,a);
    cout <<"Nhap b:"; getline(cin,b);
    cout <<isAnagram(a,b);
}



