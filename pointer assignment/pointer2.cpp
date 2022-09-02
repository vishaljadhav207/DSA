#include <iostream> //access value by pointer
using namespace std;
class test
{
public:
    int x, y;
    
};
int main()
{
    test *p;
    p = new test;
    p->x = 20;
    p->y = 30;
    cout << p->x + p->y;

    return 0;
}