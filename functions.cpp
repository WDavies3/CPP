#include <iostream>
using namespace std;

string reverseString(string);

int main()
{
    string word = "";
    cout << "type a string to be reversed and hit enter: ";
    getline(cin, word);
    string revWord = reverseString(word);
    cout << "String reversed: " << revWord << endl;
    return 0;
}

string reverseString(string str1)
{
    
    for(int i = 0; i < str1.length()/2; i++)
    {
        int lastInd = str1.length() - 1 - i;
        char swap = str1[i];
        str1[i] = str1[lastInd];
        str1[lastInd] = swap;
    }
    return str1;
}