#include <iostream>
using namespace std;
int main(){
    int n,arr[n];
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++){
        for (int j = i; j < n; j++)
        {
            if(arr[j]<arr[i]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
        
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
    
}