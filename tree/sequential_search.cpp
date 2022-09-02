#include <iostream>
using namespace std;
int main()
{
    {
        int arr[10];
        int n;
        int location = -10;
        cout << "Enter 5 numbers to store in array: " << endl;
        for (int i = 0; i < 10; i++)
        {
            cin >> arr[i];
        }
        cout << endl;
        cout << "Enter the number you want to find :";
        cin >> n;
        cout << endl;

        for (int k = 0; k < 10; k++)
        {
            if (arr[k] == n)
                location = k;
        }
        if (location != -10)
        {
            cout << "Required number is found out at the location:" << location;
            cout << endl;
        }
        else
            cout << "Number is not found ";
    }
    return 0;
}
