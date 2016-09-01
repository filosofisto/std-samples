#include <iostream>
#include <set>
#include <string>

using namespace std;

void print(multiset<string> cities);

int main()
{
    cout << "MultSet 01" << endl;

    multiset<string> cities = {
        "Braunschweig", "Hanover", "Frankfurt", "New York",
        "Chicago", "Toronto", "Paris", "Frankfurt"
    };

    print(cities);

    cities.insert({"London", "Munich", "Hanover", "Braunschweig"});

    print(cities);

    return 0;
}

void print(multiset<string> cities)
{
    for (const auto& elem: cities)
    {
        cout << elem << " ";
    }

    cout << endl;
}
