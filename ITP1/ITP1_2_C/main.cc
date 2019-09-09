#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
    int arr[3];
    int temp;
    cin >> arr[0] >> arr[1] >> arr[2];

    for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])) - 1; i++)
    {
        for (int j = 1; j < (sizeof(arr) / sizeof(arr[0])); j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << arr[0] << " " << arr[1] << " " << arr[2] << endl;

    return 0;
}
