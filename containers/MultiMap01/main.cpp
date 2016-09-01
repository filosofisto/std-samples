#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    cout << "MultiMap 01" << endl;

    multimap<int, string> map;

    map = {
        {5, "tagged"},
        {2, "a"},
        {1, "this"},
        {4, "of"},
        {6, "strigns"},
        {1, "is"},
        {3, "multimap"}
    };

    for (auto elem: map)
    {
        cout << elem.second << ' ';
    }

    cout << endl;

    return 0;
}
