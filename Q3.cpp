#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
    int arr[5][6]={{0,0,0,0,1,1},{0,0,1,1,1,1},{0,0,0,1,1,1},{0,1,1,1,1,1},{0,0,0,1,1,1}};
    int m=5;//rows
    int n=6;//column
    int row=-1;
    int maxones=-1;
    int x=1;
    for(int i=0;i<m;i++){
        int count=0;
        int lo=0;
        int hi=n-1;
        int firstidex=-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(arr[i][mid]==x){
                if(mid==0){
                    firstidex=mid;
                    break;
                }
                else if(arr[i][mid-1]!=x){
                    firstidex=mid;
                    break;
                }
                else{
                    hi=mid-1;
                }
            }
            else if(arr[i][mid]>x){
                hi=mid-1;
            }
            else{
                lo=mid+1;
            }
        }
        if(firstidex==-1) count=0;
        else count=n-firstidex;
        if(maxones<count){
            maxones=count;
            row=i;
        }
    }
    cout<<row<<" "<<maxones;
}