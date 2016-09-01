#include <array>
#include <string>
#include <iostream>

using namespace std;

int main()
{
    array<string,5> arr = {"hello", "world"};

    for (unsigned int i = 0; i < arr.size(); i++)
    {
        cout << i << ": " << arr[i] << endl;
    }

    return 0;
}
