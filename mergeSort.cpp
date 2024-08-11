#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void mergesort(vector<int> &arr, int f, int l)
{
    if (arr.size() == 1)
        return;
    f = 0;
    l = arr.size();
    int mid;
    mid = (f + l) / 2;
    vector<int> left, right;
    for (int i = 0; i < mid; i++)
    {
        left.push_back(arr[i]);
    }
    for (int i = mid; i < l; i++)
    {
        right.push_back(arr[i]);
    }

    mergesort(left, f, mid);
    mergesort(right, mid + 1, l);
}

int main()
{
    vector<int> arr;
    arr.push_back(7);
    arr.push_back(6);
    arr.push_back(5);
    arr.push_back(4);
    arr.push_back(3);
    arr.push_back(2);
    arr.push_back(1);

    mergesort(arr, 0, 8);
    for (auto i : arr)
        cout << " " << i;

    return 0;
}