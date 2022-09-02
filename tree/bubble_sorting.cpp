#include <iostream>//eg 5 4 3 2 1  =======1 2 3 4 5 //ascending//bubblesort
using namespace std;
int main()
{
    int arr[5];
    int i, n = 5, j, swap;

    cout << "enter array:" << endl;
    for (i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    for (j = 0; j < n-1 ; j++)
    {
        for (i = 0; i < n-1 ; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                swap = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = swap;
            }
        }
    }
    for (i = 0; i < n ; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}