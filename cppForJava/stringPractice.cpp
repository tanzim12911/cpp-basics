// stringPractice.cpp
// By JK

#include <iostream>
#include <cstring>
#include <cctype>
#include <string>
using namespace std;

int main(int argc, char* argv[])
{
    for (int i = 0; i < argc; i++)
    {
        cout << argv[i] << "\n";
    }
    
    char name[10] = "Jane";
    for (int i = 0; i < 10; i++)
    {
        cout << name[i] << " ";
    }
    cout << endl;
    
    cout << strlen(name) << "\n";

    cout << isupper(name[0]) << "\n";

    cout << islower(name[0]) << " " << islower(name[1]) << "\n";

    name[4] = 't';
    name[5] = 0; // same as '\0'

    cout << name << endl;

    cout << (name == "Janet") << endl;

    string name2 = "Jane";
    cout << name2.length() << "\n";
    cout << name2.size() << "\n";

    cout << (name2 == "Jane") << endl;

    cout << (name2 == name) << endl;


    cout << "Enter your name: ";
    //cin >> name2;
    //cin >> name;
    getline(cin, name2);

    cout << name2 << endl;
    //cout << name << endl;
}