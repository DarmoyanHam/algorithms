#include <iostream>

void counting_sort(int* arr, int size);

int main()
{
    int arr[] = {0, 2, 1, 2, 0, 1, 4, 2, 2};

    counting_sort(arr, 9);
    for(int i = 0; i < 9; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

void counting_sort(int* arr, int size)
{
    int max = arr[0];
    for(int i = 0; i < size; ++i)
    {
        if(arr[i] >= max)
        {
            max = arr[i];
        }
    }

    int output[size] = {};
    int count[max + 1] = {};

    for(int i = 0; i < size; ++i)
    {
        ++count[arr[i]];
    }

    for(int i = 1; i <= max; ++i)
    {
        count[i] = count[i] + count[i - 1];
    }

    for(int i = size - 1; i >= 0; --i)
    {
        output[count[arr[i]] - 1] = arr[i];
        --count[arr[i]];
    }

    for(int i = 0; i < size; ++i)
    {
        arr[i] = output[i];
    }
}