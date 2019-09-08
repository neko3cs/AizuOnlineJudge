#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
    int a;
    int b;
    int area;
    int round;

    cin >> a >> b;
    area = a * b;
    round = a * 2 + b * 2;
    cout << area << " " << round << endl;
}
