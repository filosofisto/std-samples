#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<char> chars;

    for (char c = 'a'; c <= 'z'; c++)
    {
        chars.push_back(c);
    }

    for (auto elem: chars)
    {
        cout << elem << ' ';
    }

    cout << endl;

    return 0;
}
