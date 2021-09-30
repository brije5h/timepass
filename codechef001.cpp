#include<iostream>
#include <math.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        int x,m,d;
        cin>>x>>m>>d;
        int res = min(m*x,x+d);
        cout<<res<<endl;
    }
return 0;
}