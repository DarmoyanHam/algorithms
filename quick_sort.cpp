#include <iostream>

void swap(int&, int&);
int partition(int*, int, int);
void quick_sort(int*, int, int);


int main()
{
    int arr[] = {23, 21, 52, 30, 8, 1, 13};
    quick_sort(arr, 0, 7);

    for(int i = 0; i < 7; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

void quick_sort(int* arr, int low, int high)
{
    if(low < high)
    {
        int pi = partition(arr, low, high);

        quick_sort(arr, low, pi);
        quick_sort(arr, pi + 1, high);
    }
}

int partition(int* arr, int low, int high)
{
    int pivot = arr[low];
    int i = 0;
    int j = high;

    while(i < j)
    {
        do
        {
            ++i;
        }while(arr[i] < pivot);
        do
        {
            --j;
        }while(arr[j] > pivot);

        if(i < j)
        {
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[j], arr[low]);

    return j;
}

void swap(int& a, int& b) 
{
    int tmp = a;
    a = b;
    b = tmp;
}