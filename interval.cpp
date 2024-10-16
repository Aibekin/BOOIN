#include <iostream>
#include <vector>
#include "interval.h"

using namespace std;

int main()
{
    bool end = false;
    while (!end)
    {
        string s;
        int a1, a2, b1, b2, escape;
        cout << "Enter a1: ";
        cin >> a1;
        cout << "Enter a2: ";
        cin >> a2;
        cout << "Enter b1: ";
        cin >> b1;
        cout << "Enter b2: ";
        cin >> b2;
        vector<int> a, b;
        a.push_back(a1);
        a.push_back(a2);
        b.push_back(b1);
        b.push_back(b2);
        binary bin(a, b);
        cout << "Add: " << bin.addition()[0] << ":" << bin.addition()[1] << endl;
        cout << "Sub: " << bin.subtraction()[0] << ":" << bin.subtraction()[1] << endl;
        cout << "Mul: " << bin.multiplication()[0] << ":" << bin.multiplication()[1] << endl;
        cout << "Div: " << bin.division()[0] << ":" << bin.division()[1] << endl;
        cout << "Enter start to continue, finish to exit: ";
        cin >> s;
        if (s == "start")
            end = false;
        else if (s == "finish")
            end = true;
        else
        {
            cout << "You made a mistake!" << endl;
            end = false;
        }
    }
    return 0;
}