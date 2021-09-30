#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int D,d,P,Q;
        cin>>D>>d>>P>>Q;
        int n=0,ans=0;
        do{
            ans=d*(P+(n*Q));
            n++;
            D-=d;
        }while((D-d)>=(D%d));
        if((D%d)!=0){
            ans=(D%d)*(P+(n*Q));
        }
    }
    return 0;
}