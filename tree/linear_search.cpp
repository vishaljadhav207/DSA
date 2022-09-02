#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    int i, n;

    cout << "enter array:" << endl;
    for (i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    bool f = false;
    cout << "enter data that you want to search:\n";
    cin >> n;
    for (i = 0; i < 5; i++)
    {
        if (arr[i] == n)
        {
            f = true;
            break;
        }
    }
    if (f == true)
    {
        cout << "fount item at position "<<i<<endl;
    }
    else
    {
        cout << "not fount\n";
    }

    return 0;
}