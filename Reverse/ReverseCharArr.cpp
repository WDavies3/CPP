#include <iostream>

using namespace std;

char *reverse(char *, int);

int main()
{
    char someText[] = "hello there";
    char *reversedText = reverse(someText, sizeof(someText) - 1);
    cout << reversedText << endl;
    return 0;
}

char *reverse(char *text, int length)
{
    char *startPtr = text;
    char *endPtr = text + length - 1;
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