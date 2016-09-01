#include <iostream>
#include <list>

using namespace std;

int main()
{
    cout << "Iterator 01" << endl;

    list<char> lst;

    for (char c = 'a'; c <= 'z'; ++c)
    {
        lst.push_back(c);
    }

    for (list<char>::const_iterator it = lst.begin(); it != lst.end(); ++it)
    {
        cout << *it << ' ';
    }

    cout << endl;

    return 0;
}
