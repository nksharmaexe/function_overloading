#include <iostream>
using namespace std;

class unaryOperator
{
    int x;

public:
    void setData(int a)
    {
        x = a;
    }
    void showData()
    {
        cout << "x:" << x << endl;
    }

    unaryOperator operator++()
    {
        unaryOperator temp;
        temp.x = ++x;

        return temp;
    }
    unaryOperator operator++(int)
    {
        unaryOperator temp;
        temp.x = x++;

        return temp;
    }
};

int main()
{
    unaryOperator a1, a2;
    a1.setData(5);
    cout << "a1 data";
    a1.showData();

    // a2 = ++a1;
    // cout << "a1 data";

    // a2.showData();
    // cout << "a1 data";

    // a1.showData();

    a2 = a1++;
    cout << "a2 data";
    a2.showData();
    cout << "a1 data";

    a1.showData();

    return 0;
}