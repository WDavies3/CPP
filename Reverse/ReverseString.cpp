#include <iostream>
#include <string>

using namespace std;

string reverse(string);

int main()
{
    string someText = "hello there";
    string reversedText = reverse(someText);
    cout << "Original text: " << someText << endl;
    cout << "Reversed text: " << reversedText << endl;
    return 0;
}

string reverse(string text)
{
    if (text.length() < 1)
    {
        return text;
    }
    char *startPtr = &text[0];
    char *endPtr = &text[text.length() - 1];
    while (startPtr < endPtr)
    {
        char temp = *startPtr;
        *startPtr = *endPtr;
        *endPtr = temp;
        startPtr++;
        endPtr--;
    }

    return text;
}