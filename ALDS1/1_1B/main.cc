#include <iostream>
using namespace std;

int get_gcd(int, int);

int main(int argc, char *argv[])
{
    int a, b;
    cin >> a >> b;

    cout << get_gcd(a, b) << endl;

    return 0;
}

int get_gcd(int x, int y)
{
    if (x < y)
    {
        using std::swap;
        swap(x, y);
    }
    int r = 0;
    while (y > 0)
    {
        r = x % y;
        x = y;
        y = r;
    }

    return x;
}