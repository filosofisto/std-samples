#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main()
{
    cout << "UnorderedMap 01" << endl;

    unordered_map<string, double> map { {"tim", 9.9}, {"struppi", 11.88} };

    for (pair<const string, double>& elem: map)
    {
        elem.second *= elem.second;
    }

    for (const auto& elem: map)
    {
        cout << elem.first << ": " << elem.second << endl;
    }

    return 0;
}
