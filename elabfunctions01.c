#include <stdio.h>
#include <string.h>
#include <math.h>
int check_armstrong(int n){
    int sum=0,ans;
    while(n>=0){
        sum+=pow(3,(n%10));}
        if(sum==n)
        ans=n;
        return ans;
}
int main(){
    int start,end,i,answer;
    scanf("%d %d",&start, &end);
    for(i=start;i<=end;i++){
        answer=check_armstrong(i);
        printf("%d",answer);
    }
    return 0;
}
