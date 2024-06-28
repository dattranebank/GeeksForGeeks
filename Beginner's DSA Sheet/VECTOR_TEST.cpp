#include <iostream>
#include <numeric> // Dùng iota
#include <vector> // Khai báo thư viện vector
using namespace std;

int main()
{
    // Cách 1: Thêm từng phần tử vào vec1
    vector <int> vec1;
    vec1.push_back(10);
    vec1.push_back(20);
    vec1.push_back(30);
    cout <<"vec1: ";
    for (int i=0;i<vec1.size();i++) cout <<vec1[i]<<" ";
    cout <<endl;

    // Cách 2: Thêm n phần tử 99 vào vec2
    int n=10;
    vector <int> vec2(n,99);
    cout <<"vec2: ";
    for (int i=0;i<vec2.size();i++) cout <<vec2[i]<<" ";
    cout <<endl;

    // Cách 3: Thêm phần tử giống array
    vector <int> vec3({1,2,3,4,5});
    cout <<"vec3: ";
    for (int i=0;i<vec3.size();i++) cout <<vec3[i]<<" ";
    cout <<endl;

    // Cách 4: Thêm phần tử từ array đã tồn tại
    int m=5;
    int A[m]={10,11,12,13,14};
    vector <int> vec4(A,A+m);
    cout <<"vec4: ";
    for (int i=0;i<vec4.size();i++) cout <<vec4[i]<<" ";
    cout <<endl;

    // Cách 5: Thêm phần tử từ vector đã tồn tại
    vector <int> vec5a{21,22,23};
    vector <int> vec5b(vec5a.begin(),vec5a.end());
    // Hoặc vector <int> vec5b(vec5a);
    cout <<"vec5: ";
    for (int i=0;i<vec5b.size();i++) cout <<vec5b[i]<<" ";
    cout <<endl;

    // Cách 6: Thêm phần tử có giá trị nhất định
    vector <int> vec6(5);
    int value=7;
    fill(vec6.begin(),vec6.end(),value);
    cout <<"vec6: ";
    for (int i=0;i<vec6.size();i++) cout <<vec6[i]<<" ";
    cout <<endl;

    // Cách 7: Thêm phần tử liên tiếp
    vector <int> vec7(5);
    iota(vec7.begin(),vec7.end(),1);
    cout <<"vec7: ";
    for (int i=0;i<vec7.size();i++) cout <<vec7[i]<<" ";
    cout <<endl;
}
