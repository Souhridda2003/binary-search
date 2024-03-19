#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
    int arr[]={9,8,6,4,3,2,2,1};
    int x=8;
    int lo=0;
    int n=8;
    int hi=n-1;
    bool flag=false;
    while(hi>=lo){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==x){
            flag=true;
            break;
        }
        else if(arr[mid]<x){
            hi=mid-1;
        }
        else{
            lo=mid+1;
        }
    }
    if(flag==true) cout<<"Element is found";
    else cout<<"element not found";
}