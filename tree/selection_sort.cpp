#include <iostream>
using namespace std;
int main()
{
    int n, step, index, temp, min, i;
    cout << "Enter size of array:" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter array:" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (step = 0; step < n ; step++)
    {
        min = step;
        for (index=step+1; index < n; index++)
        {
            if (arr[index] < arr[min])
            {
                temp = arr[index];
                arr[index] = arr[min];
                arr[min] = temp;
            }
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