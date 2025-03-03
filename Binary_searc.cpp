#include <iostream>
using namespace std;
int binary_search(int arr[], int key, int low, int high)
{
    int mid = (low + high) / 2;
    if (low > high)
        return -1;
    if (arr[mid] == key)
    {
        return mid;
    }
    else if (arr[mid] < key)
    {
        return binary_search(arr, key, mid + 1, high);
    }
    else
        {
           return binary_search(arr, key, low, mid - 1);
        }
}
int main()
{
    int n;
    cout << "Enter array size : ";
    cin >> n;
    int arr[n], key;
    cout << "Enter key : ";
    cin >> key;
    cout << "Enter Array Elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int index = binary_search(arr, key, 0, n - 1);
    if (index != -1)
    {
        cout << "Find " << key << " index number : " << index;
    }
    else
        cout << "Not Find.";
}