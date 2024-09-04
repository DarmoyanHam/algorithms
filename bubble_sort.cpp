#include <iostream>

void bubble_sort(int*, int);
void swap(int&, int&);

int main()
{
    int arr[] = {1, 25, 8, -9, 11, 260, 10};
    bubble_sort(arr, 7);
    for(int i = 0; i < 7; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

void bubble_sort(int* arr, int size)
{
    bool swapped;
    for(int i = 0; i < size - 1; ++i)
    {
        swapped = false;
        for(int j = 0; j < size - i - 1; ++j)
        {
            if(arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        if(!swapped)
        {
            break;
        }
    }
}

void swap(int& a, int& b)
{
    int tmp = a;
    a = b;
    b = tmp;
}