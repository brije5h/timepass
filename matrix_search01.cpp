#include <iostream>
using namespace std;
int main()
{
    int r,c;
    cin>>r>>c;

    int m[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>m[i][j];
        }
    }
    int ans;
    cin>>ans;

    while(m[r][c]==ans){
        r=0;
        if(m[r][c-1]>ans){
            r--;
        }
        else if(m[r][c-1]<ans){
            c++;
        }
        else{
            cout<<r<<" "<<c;
        }
    }
    return 0;
}