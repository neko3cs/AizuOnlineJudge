#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

bool isPrime(const int);

int main(int argc, char *argv[])
{
    int n, tmp, cnt = 0;
    cin >> n;
    while (n-- > 0)
    {
        cin >> tmp;
        if (isPrime(tmp))
        {
            cnt++;
        }
    }
    cout << cnt << endl;

    return 0;
}

bool isPrime(const int x)
{
    if (x < 2)
    {
        return false;
    }
    if (x == 2)
    {
        return true;
    }
    if (x % 2 == 0)
    {
        return false;
    }
    int i = 3;
    while (i <= sqrt(x))
    {
        if (x % i == 0)
        {
            return false;
        }
        i += 2;
    }
    return true;
}
