#include <bits/stdc++.h>
using namespace std;

void printArr(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}

void shellSort(vector<int> &arr, int gap)
{
    int n = arr.size();
    if (gap == 0)
        return;
    if (gap > n)
    {
        gap /= n;
    }
    for (int i = gap; i < n; i++)
    {
        int temp = arr[i];
        int j = i;
        while (j >= gap && arr[j - gap] > arr[j])
        {
            arr[j] = arr[j - gap];
            j -= gap;
        }
        arr[j] = temp;
    }
    shellSort(arr, gap / 2);
}

int main()
{
    vector<int> arr = {1, 2, 32, 4, 5, 6, 7};
    shellSort(arr, 100);
    printArr(arr);
}