#include <iostream>
using namespace std;

int main(){
    int str[100],i,j;
    for(i=0;i<'\n';i++){
        cin>>str[i];
    }
    for(j=0;j<i;j++){
        cout<<str[j];
    }
    return 0;
}