#include <iostream>

int binary_search(int*, int, int);
int binary_search(int*, int, int, int);

int main()
{
    int arr[] = {1, 3, 7, 15, 20, 21, 26};

    std::cout << binary_search(arr, 0, 6, 20) << std::endl;

    return 0;
}

int binary_search(int* arr, int size, int target)
{
    int start = 0;
    int end = size - 1;

    while(start <= end)
    {
        int mid = start + (end - start) / 2;
        if(arr[mid] == target)
        {
            return mid;
        }
        else if(arr[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return -1;
}

int binary_search(int* arr, int left, int right, int target)
{
    if(left <= right)
    {
        int mid = left + (right - left) / 2;
        if(arr[mid] == target)
        {
            return mid;
        }
        if(arr[mid] < target)
        {
            return binary_search(arr, mid + 1, right, target);
        }
        if(arr[mid] > target)
        {
            return binary_search(arr, left, mid - 1, target);
        }
    }

    return -1;
}
