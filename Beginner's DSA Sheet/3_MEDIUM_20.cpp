#include <iostream>
#include <vector> // Dùng vector
using namespace std;
// Beginner's DSA Sheet: MEDIUM - 20. K Sized Subarray Maximum


// Cách 1: Naive Approach
// 1034/1107, 1.59s
// O(n^2)
vector <int> max_of_subarrays1(int *arr, int n, int k)
{
    vector <int> answer;
    for (int i=0;i<n-k+1;i++)
    {
        int maxValue=arr[i];
        for (int j=i;j<i+k;j++)
        {
            if (arr[j]>maxValue) maxValue=arr[j];
        }
        answer.push_back(maxValue);
    }
    return answer;
}


// Cách 2: Sliding Window (Do Dat Tran tự code)
// Cho mảng A có n phần tử, hãy tìm mảng con có tổng lớn nhất
// với kích thước mảng con là K
// 6/1107, code sai
// Nguyên nhân là do chưa cập nhật giá trị maxValue mới cho từng Window
// Nếu code như bên dưới thì maxValue luôn là maxValue của một Window
// và những Window kế tiếp lại sử dụng maxValue của Window cũ
// Để thấy được code sai thì ta thử n=15, k=4
// arr[] = {1, 3, 1, 2, 0, 5, 6, 4, 3, 2, 1, 2, 3, 4, 5}
// Kết quả sai:  3 3 5 6 6 6 6 6 6 6 6 6
// Kết quả đúng: 3 3 5 6 6 6 6 4 3 3 4 5
vector <int> max_of_subarrays2(int *arr, int n, int k)
{
    vector <int> answer;
    int maxValue=arr[0];

    // Tính Window đầu tiên
    for (int i=1;i<k;i++)
    {
        if (maxValue<arr[i]) maxValue=arr[i];
    }
    answer.push_back(maxValue);

    // Tính những Window còn lại
    // Lấy left làm chuẩn
    for (int i=k-1;i<n-1;i++)
    {
        int left=i-k+1;
        int right=left+k; // Cộng giá trị bên phải
        if (arr[right]>maxValue)
        {
            maxValue=arr[right];
        }
        answer.push_back(maxValue);
    }
    return answer;
}


// Cách 3: Sliding Window (Do Dat Tran tự code)
// Dat Tran sửa lại từ cách 2 và tham khảo cách 4 sao cho giải được
// Để thấy được code sai thì ta thử n=15, k=4
// arr[] = {1, 3, 1, 2, 0, 5, 6, 4, 3, 2, 1, 2, 3, 4, 5}
// Kết quả sai:  3 3 5 6 6 6 6 6 6 6 6 6
// Kết quả đúng: 3 3 5 6 6 6 6 4 3 3 4 5
vector <int> max_of_subarrays3(int *arr, int n, int k)
{
    vector <int> answer;
    int maxValue=arr[0];

    // Tính Window đầu tiên
    for (int i=1;i<k;i++)
    {
        if (maxValue<arr[i]) maxValue=arr[i];
    }
    answer.push_back(maxValue);

    // Tính những Window còn lại
    for (int i=1;i<n-k+1;i++)
    {
        int left=i-1;
        int right=left+k;
        if (arr[left]==maxValue) // Nếu maxValue nằm ngoài Window mới
        {
            maxValue=arr[i]; // thì ta tìm maxValue nằm trong Window mới
            for (int j=i+1;j<i+k;j++)
            {
                if (arr[j]>maxValue) maxValue=arr[j];
            }
        }
        else // Ngược lại ta dò xem giá trị right trong Window mới
        {
            // có phải là maxValue hay không
            if (arr[right]>maxValue) maxValue=arr[right];
        }
        answer.push_back(maxValue);
    }
    return answer;
}


// Cách 4: Sliding Window (từ ChatGPT)
// 1107/1107, 0.31s
// O(n*k)
vector <int> max_of_subarrays4(int *arr, int n, int k)
{
    vector<int> answer;
    int maxValue=arr[0];

    // Find maximum for the first window of size k
    for (int i=1;i<k;i++)
    {
        if (arr[i]>maxValue) maxValue=arr[i];
    }
    answer.push_back(maxValue);

    // Slide the window across the array
    for (int i=1;i<=n-k;i++)
    {
        // If the element going out of the window is the current maximum, find new maximum
        if (arr[i-1]==maxValue)
        {
            maxValue=arr[i];
            for (int j=i+1;j<i+k;j++)
            {
                if (arr[j]>maxValue) maxValue=arr[j];
            }
        }
        else
        {
            // Otherwise, check if the new element entering the window is greater than current maximum
            if (arr[i+k-1]>maxValue) maxValue=arr[i+k-1];
        }
        answer.push_back(maxValue);
    }
    return answer;
}

int main()
{
    int n,k;
    cout <<"Nhap n:"; cin >>n;
    cout <<"Nhap k:"; cin >>k;
    vector <int> arr;
    for (int i=0;i<n;i++)
    {
        int a;
        cin >>a;
        arr.push_back(a);
    }
    vector <int> vec=max_of_subarrays3(arr.data(),n,k);
    for (int i=0;i<vec.size();i++) cout <<vec[i]<<" ";
}

