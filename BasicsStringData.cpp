// BasicsStringData.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
using namespace std;

int main()
{
    cout << "Capturing String data type and showing limitations of cin>> \n";
    string myName;
    cout << "Input your full name : ";

    //getline() will output full Mike Franks
    getline(cin, myName);
   //cin>> will output Mike only
    //cin >> myName;
    cout << "\n";
   // cout << "Hey. Your name using cin>> is:" << myName<<endl;
    cout << "Hey. Your name using getline() function is:" << myName<<endl;
    // Input full name: Mike Franks


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
