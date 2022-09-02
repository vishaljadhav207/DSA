#include <iostream>//selection array
using namespace std;
int main()
{
    int arr[] = {15, 5, 2, 90, 25, 2};
    int i, n, j, c;
    n = 6;

    for (j = 0; j < n; j++)
    {
        i = j;
        while (i >= 0)
        {
            if (arr[i] < arr[i - 1])
            {
                c = arr[i];
                arr[i] = arr[i - 1];
                arr[i - 1] = c;
            }
            i--;
        }
    }
    cout << endl
         << "sorted array is : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}