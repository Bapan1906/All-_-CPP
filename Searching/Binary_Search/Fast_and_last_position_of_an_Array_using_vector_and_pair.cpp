#include <bits/stdc++.h>

int fastOcc(std::vector<int> &arr, int n, int key)
{
    int s = 0;
    int e = n - 1;
    int mid = ((s + e) / 2);
    int ans = -1;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
        mid = ((s + e) / 2);
    }
    return ans;
}

int lastOcc(std::vector<int> &arr, int n, int key)
{
    int s = 0;
    int e = n - 1;
    int mid = ((s + e) / 2);
    int ans = -1;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
        mid = ((s + e) / 2);
    }
    return ans;
}

std::pair<int, int> firstAndLastPosition(std::vector<int> &arr, int n, int k)
{
    std::pair<int, int> p;

    p.first = fastOcc(arr, n, k);
    p.second = lastOcc(arr, n, k);

    return p;
}

int main()
{
    std::vector<int> arr = {1, 2, 2, 3, 4, 4, 4, 5, 6};
    int n = arr.size();
    int k = 4;

    std::pair<int, int> result = firstAndLastPosition(arr, n, k);

    std::cout << "First occurrence: " << result.first << std::endl;
    std::cout << "Last occurrence: " << result.second << std::endl;

    return 0;
}
