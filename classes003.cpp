#include <iostream>
#include <string.h>
using namespace std;

class students
{
    string name;
    int age;

public:
    int Std;

    void setInfo()
    {
        cout << "Enter your name: ";
        cin >> name;
        cout << "Enter your age: ";
        cin >> age;
        cout << "Enter your class: ";
        cin >> Std;
    }
    void printInfo()
    {
        cout << "Your name is: " << name << endl;
        cout << "Your age is: " << age << endl;
        cout << "Your class is: " << Std << endl;
    }
};
int main()
{
    int n;
    cin >> n;
    students arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i].setInfo();
    }
    for (int i = 0; i < n; i++)
    {
        arr[i].printInfo();
    }
    return 0;
}