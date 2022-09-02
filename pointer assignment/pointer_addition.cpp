#include <iostream>
using namespace std;
class test
{
public:
    int x, y;
    test()
    {
        x = 10;
        y = 20;
    }
};
int main()
{
    test t1;
    test *p;
    p = &t1;
    cout << p->x + p->y;

    return 0;
}