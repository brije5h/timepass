#include <bits/stdc++. h> 

using namespace std;

int main(){
    int i=0;
//Name Validate:
    char name[30];
    cin>>name;
    int con1, con2, con3;

    con1=isalpha(name);

    if(con1!='0'){
        cout<<"Error: This field should contain alphabets only!"<<endl;
    }
//Register Number:
    char reg[20];
    cin>>reg;
    
    con2=isalnum(reg);

    if(con2!='1'){
        cout<<"This field should contain alphabets and digits only!"<<endl;
    }




//Mobile number validate:
    int mob_num;
    cin>>mob_num;
    con3=isdigit(mob_num);

    if(con3!='1'){
        cout<<"This field should contain digits only!"<<endl;
    }

//Age
    int age;
    cin>>age;    

    return 0;
}