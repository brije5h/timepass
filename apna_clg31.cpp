#include <iostream>
#include <string>

using namespace std;
int main(){
  //  string str;
    //getline(cin, str);
    //cout<<str;

   // string s1="fam";s
    //string s2="ily";

    //s1.append(s2);
    //cout<<s1<<endl;
    //Or we can use
    //cout<<s1+s2<<<endl;

    //Clear function is used to clear the string
    //string abc="Hell o ladies\n";
    //cout<<abc;
    //abc.clear();
    //cout<<abc<<"abc is cleared";

    //compare function is used to compare two strings
    string s3="abc";
    string s4="xyz";

    cout<<s3.compare(s4)<<endl;
    if(!s3.compare(s4))
        cout<<"strings are equal"<<endl;
    cout<<"strings are not equal"<<endl;

    
    return 0;
}