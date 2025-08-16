#include <bits/stdc++.h>
using namespace std;
void buble_sort(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                // int temp;
                // temp =arr[j];
                // arr[j]=arr[j+1];
                // arr[j+1]=temp;
            }
        }
    }
}

int main()
{

    vector<int> arr = {9, 7, 8, 4, 2, 1, 5, 3};
    buble_sort(arr);

    for (auto i : arr)
    {
        cout << i <<" ";
    }
}