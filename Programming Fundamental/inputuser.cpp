#include <iostream>
using namespace std;
int main()
{
    int age;
    string name;
    cout << "Enter your name: ";
    getline(cin, name); // get line function is used to get input from user and store in string variable
    cout << "Enter your age: ";
    cin >> age; // cin >> age is used to get input from user and store in integer variable
    cout << "Hello " << name << " you are " << age << " years old." << endl;
}