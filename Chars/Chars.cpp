#include <iostream>

using namespace std;

int main()
{
    char hi[] = "hello";
    string hi2 = "hello";
    for (int i = 0; i < sizeof(hi); i++)
    {
        cout << hi[i];
    }
    cout << endl;

    cout << hi[1] << '\n'
         << hi2[1] << endl;
    cout << sizeof(hi) << '\n'
         << sizeof(hi2) << endl;

    cout << sizeof(string) << endl;
    cout << hi2.length() << endl;

    return 0;
}