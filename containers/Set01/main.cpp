#include <iostream>
#include <set>
#include <string>

using namespace std;

void print(set<string> cities);

int main()
{
    cout << "Set 01" << endl;

    set<string> cities = {
        "Braunschweig", "Hanover", "Frankfurt", "New York",
        "Chicago", "Toronto", "Paris", "Frankfurt"
    };

    print(cities);

    cities.insert({"London", "Munich", "Hanover", "Braunschweig"});

    print(cities);

    return 0;
}

void print(set<string> cities)
{
    for (const auto& elem: cities)
    {
        cout << elem << " ";
    }

    cout << endl;
}
