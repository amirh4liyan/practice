#include <iostream>

using namespace std;

int main()
{
    int N = 0;
    cout << "Enter N: ";
    cin >> N;
    
    if (N % 2 == 0)
        cout << "Dog";
    else if (N % 5 == 0)
        cout << "Cat";
    else if (N % 10 == 0)
        cout << "Dog";
    else if (N % 2 != 0 and N % 5 != 0)
        cout << "None";
    return 0;
}