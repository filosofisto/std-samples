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

    while (!chars.empty())
    {
        cout << chars.front() << ' ';
        chars.pop_front();
    }

    cout << endl;

    return 0;
}
