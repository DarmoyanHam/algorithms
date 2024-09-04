#include <iostream>

void selection_sort(int* arr, int size);
void swap(int&, int&);


int main()
{
    int arr[] = {25, 32, 10, 6, 800, 14};

    selection_sort(arr, 6);
    for (int i = 0; i < 6; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    

    return 0;
}

void selection_sort(int* arr, int size)
{
    int min_index = 0;
    for(int i = 0; i < size - 1; ++i)
    {
        min_index = i;
        for (int j = i + 1; j < size; ++j)
        {
            if(arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }

        swap(arr[i], arr[min_index]);
    }
}

void swap(int& a, int&b)
{
    int tmp = a;
    a = b;
    b = tmp;
}