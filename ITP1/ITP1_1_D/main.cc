#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
    int input_time = 0;
    int hour = 0;
    int minite = 0;
    int second = 0;

    cin >> input_time;

    hour = input_time / 3600;
    minite = input_time / 60 - (hour * 60);
    second = input_time - (hour * 3600 + minite * 60);

    cout << hour << ":" << minite << ":" << second << endl;
}
