//use size of to determine array length

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    //declare array
    int arr[] = {2,4,6,8};
    //iterate through array and output the elements
    cout << "--------1D Array--------" << endl;
    for (int i = 0; i < sizeof(arr)/sizeof(int); i++)
    {
        cout << setw(4) << arr[i];
    }
    cout << endl;
    
    //declare 2d array
    int multArr[12][6];
    //iterate through 2d array and initialize it
    for (int i = 0; i < sizeof(multArr)/sizeof(multArr[0]); i++)
    {
        for(int j = 0; j < sizeof(multArr[0])/sizeof(int); j++)
        {
            multArr[i][j] = (i+1)*(j+1);
        }
    }
    //iterate through 2d array and output values
    cout << "--------2D Array--------" << endl;
    for (int i = 0; i < sizeof(multArr)/sizeof(multArr[0]); i++)
    {
        for(int j = 0; j < sizeof(multArr[0])/sizeof(int); j++)
        {
            cout << setw(5) << multArr[i][j];
        }
        cout << endl;
    }
    

    return 0;
}