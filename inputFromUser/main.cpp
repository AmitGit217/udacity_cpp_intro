#include <iostream>

using namespace std;

int main()
{
    string name = "";
    int age{};

    cout << "Hello there! what is your name? " << endl;
    cin >> name;

    cout << "And your age? " << endl;
    cin >> age;

    cout << "Hello " << name << " You are " << age << " Years old" << endl;

    return 0;
}