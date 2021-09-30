#include <iostream>
#include <ctype.h>
#include <string.h>
using namespace std;

void validate(string name, string mail, string phone, string regno)
{
    bool valid = false;

    //For validation of Register Number
    for (int k = 0; k < regno.length(); k++) 
    {
        if (regno.length() == 14)
        {
            if ((regno[k] > 64 && regno[k] < 91) || (regno[k] > 96 && regno[k] < 123) || (regno[k] > 47 && regno[k] < 58))
            {
                valid = true;
                break;
            }
            else
                valid = false;
        }
    }
    if (valid)
        cout << "valid regno" << endl;
    else
        cout << "invalid regno" << endl;

    valid = true;

    //For Validation of Name:
    for (int nameCount = 0; nameCount < name.length(); nameCount++)
    {
        if ((name[nameCount] > 64) && (name[nameCount] < 91))
            continue;
        else if ((name[nameCount] > 96) && (name[nameCount] < 123))
            continue;
        else
        {
            valid = false;
            cout << "Invalid Name" << endl;
            break;
        }
    }
    if (valid)
        cout << "Valid Name" << endl;

    valid = false;

    //For Validation of mail Id: 
    for (int i = 0; i < mail.length(); i++)
    {
        if (mail[i] == '@')
        {
            valid = true;
            break;
        }
        else
        {
            valid = false;
        }
    }
    if (valid)
        cout << "Valid Mail" << endl;
    else
        cout << "Invalid Mail" << endl;

    valid = false;

    //For Validation of Phone Number
    for (int j = 0; j < phone.length(); j++)
    {
        if (phone.length() == 10 && phone[j] > 47 && phone[j] < 58)
        {
            valid = true;
            break;
        }
    }
    if (valid)
        cout << "valid number" << endl;
    else
        cout << "invalid number" << endl;
}

int main()
{
    string name, mail, phone, regno;
    cout << "Enter Name:" << endl;
    cin >> name; //input name
    cout << "Enter Regno:" << endl;
    cin >> regno; //input regno
    cout << "Enter Number:" << endl;
    cin >> phone; //input phone number
    cout << "Enter mail id:" << endl;
    cin >> mail;//input mail id
    validate(name, mail, phone, regno); //pass by value

    return 0;
