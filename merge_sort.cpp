#include <iostream>

void merge_sort(int*, int, int);
void merge(int*, int, int, int);

int main()
{
    int arr[] = {10, 2, -5, 9, 126, 25};
    merge_sort(arr, 0, 5);

    for(int i = 0; i < 6; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

void merge_sort(int* arr, int left, int right)
{
    if(left >= right)
    {
        return;
    }
    int mid = left + (right - left) / 2;
    merge_sort(arr, left, mid);
    merge_sort(arr, mid + 1, right);
    merge(arr, left, mid, right);
    
}

void merge(int* arr, int left, int mid, int right)
{
    int i = 0;
    int j = 0;
    int size1 = mid - left + 1;
    int size2 = right - mid;
    int* leftArr = new int[size1];
    int* rightArr = new int[size2];

    while(i < size1)
    {
        leftArr[i] = arr[i + left];
        ++i;
    }
    while(j < size2)
    {
        rightArr[j] = arr[mid + j + 1];
        ++j;
    }

    i = 0;
    j = 0;
    int k = left;

    while(i < size1 && j < size2)
    {
        if(leftArr[i] < rightArr[j])
        {
            arr[k] = leftArr[i];
            ++i;
        }
        else
        {
            arr[k] = rightArr[j];
            ++j;
        }
        ++k;
    }
    
    while(i < size1) 
    {
        arr[k] = leftArr[i];
        ++i;
        ++k;
    }
    while(j < size2)
    {
        arr[k] = rightArr[j];
        ++k;
        ++j;
    }
}