#include <iostream>

void insertion_sort(int*, int);

int main()
{
    int arr[] = {1, 32, 25, 1, 10, 3, 8};
    insertion_sort(arr, sizeof(arr)/sizeof(int));

    for(int i = 0; i < 7; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

void insertion_sort(int* arr, int size)
{
    for(int i = 1; i < size; ++i)
    {
        int j = i - 1;
        int result = arr[i];
        while(j >= 0 && result < arr[j])
        {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = result;
    }
}