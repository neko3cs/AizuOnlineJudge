#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[])
{
    vector<int> v;
    int buff;
    while (1)
    {
        cin >> buff;
        if (buff == 0)
            break;
        v.push_back(buff);
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << "Case " << i + 1 << ": " << v[i] << endl;
    }

    return 0;
}
