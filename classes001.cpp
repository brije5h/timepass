#include <iostream>
using namespace std;

class student
{
private:
    int mobile_no;
    char name, address;

public:
    int std, roll_no, dob;
    char sec;
  void setData(char name, int mobile_no, char address);
    void getData()
    {
        cout << "Name of student:" << name << endl;
        cout << "Class:" << std << endl;
        cout << "Section:" << sec << endl;
        cout << "Date of Birth: " << dob << endl;
        cout << "Mobile no.:" << mobile_no << endl;
        cout << "Address" << address << endl;
    }
};
//void student ::setData(char name, int mobile_no, char address)
//{
//    name1= name;

//}

int main()
{
    student Brijesh;
    Brijesh.setData(Brijes,9109085251);
    Brijesh.getData();
    return 0;
}