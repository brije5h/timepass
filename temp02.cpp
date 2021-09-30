#include <iostream>
#include <string>
using namespace std;

int alpha(char a)
{
    bool check;
    if ((a > 65 && a < 90) || (a > 60 && a < 122))
    {
        check = 1;
    }
    else
    {
        check = 0;
    }
    return check;
}

int main()
{

    char name[20];
    // while (name[i])
    // {
    //     cin >> name[i];
           int x = alpha(name[20]);
    //     if(x ==0){
    //         cout<<"change the vLUE HERE";
    //         break;
    //     // if (alpha(name[i]) == 0)
    //     // {
    //     //     cout << "change the vLUE HERE";
    //     //     break;
    //     // }
    // }

    //i++;
//}
    for(int i=0; i<name.length(); i++){
        if(x!=0){
            cout<<"Error: This field requires alphabets only!"<<endl;
        }
    }
return 0;
}