#include <iostream>
using namespace std;

void insertionSort(int arr[], int size)
{
    int i = 1;
    while (i < size)
    {
        int temp = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j] = temp;
        i++;
    }
}

int main()
{
    int arr[5] = {1, 4, 53, 532, 34};
    int size = 5;
    insertionSort(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}