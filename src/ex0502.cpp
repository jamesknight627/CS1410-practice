#include <iostream>
#include <string>

using namespace std;

int main(){
    int age;
    string fullName;

    cout << "Enter age: ";
    cin >> age;

    // cin.ignore();   Tested!
    cin.ignore();

    cout << "Enter Full Name: ";
    getline(cin, fullName);

    cout << "Hello! You are " << age << " years old, and your full name is " << fullName << endl;

    return 0;
}