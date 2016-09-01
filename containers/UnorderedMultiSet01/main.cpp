#include <iostream>
#include <unordered_set>
#include <string>

using namespace std;

void print(unordered_multiset<string> cities);

int main()
{
    cout << "Unsorted Set 01" << endl;

    unordered_multiset<string> cities = {
        "Braunschweig", "Hanover", "Frankfurt", "New York",
        "Chicago", "Toronto", "Paris", "Frankfurt"
    };

    print(cities);

    cities.insert({"London", "Munich", "Hanover", "Braunschweig"});

    print(cities);

    return 0;
}

void print(unordered_multiset<string> cities)
{
    for (const auto& elem: cities)
    {
        cout << elem << ' ';
    }

    cout << endl;
}
