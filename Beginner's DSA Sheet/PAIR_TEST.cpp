#include <iostream>
#include <utility> // Khai báo thư viện pair
using namespace std;


int main()
{
    pair <int, char> pai;
    pai.first=10;
    pai.second='G';
    cout <<"Pair.first:"<<pai.first<<endl;
    cout <<"Pair.second:"<<pai.second;
}

