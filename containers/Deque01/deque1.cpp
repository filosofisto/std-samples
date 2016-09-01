#include <deque>
#include <iostream>

using namespace std;

int main()
{
    deque<float> deque;

    for (int i=1; i<=6; i++)
    {
        deque.push_front(i*1.1);
    }

    for (unsigned int i=0; i<deque.size(); i++)
    {
        cout << deque[i] << ' ';
    }

    cout << endl;

    return 0;
}
