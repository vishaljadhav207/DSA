// Binary Search in C++

#include <iostream>
using namespace std;

int binarySearch(int array[], int x, int beg, int end)
{

    while (beg <= end)
    {
        int mid = (beg+end) / 2;

        if (array[mid] == x)
            return mid;

        if (array[mid] < x)
            beg = mid + 1;

        else
            end = mid - 1;
    }

    return -1;
}

int main(void)
{
    int arr[] = {3, 4, 5, 6, 7, 8, 9};
    int x;
    cout << "enter data" << endl;
    cin >> x;
    int n = sizeof(arr) / sizeof(arr[0]);
    int index = binarySearch(arr, x, 0, n - 1);
    if (index != -1)
        cout << "found item at "<<index+1;
    else
        cout << "itrm not found"<< endl;
}