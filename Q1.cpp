#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
    int arr[]={1,2,3,3,4,4,4,5};
    int n=8;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int x=4;
    int lo=0;
    int hi=n-1;
    bool flag=false;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(arr[mid]==x){
                if(arr[mid+1]==x){
                    lo=mid+1;
                }
                else{
                    flag=true;
                    cout<<mid;
                    break;
                }
                // cout<<mid;
                // lo=mid+1;
            }
            else if(arr[mid]>x){
                hi=mid-1;
            }
            else{
                lo=mid+1;
            }
        }
        if(flag==false) {
        cout<<"element is not found";
        }
}