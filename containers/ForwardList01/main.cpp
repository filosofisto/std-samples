#include <iostream>
#include <forward_list>

using namespace std;

int main()
{
    cout << "Forward List 01" << endl;

    forward_list<long> flist = { 2, 3, 5, 7, 11, 13, 17 };

    flist.resize(9);
    flist.resize(10,99);

    for (auto elem: flist)
    {
        cout << elem << ' ';
    }

    cout << endl;

    return 0;
}
