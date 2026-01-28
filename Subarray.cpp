#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

// divide the subarray wd equal sums:
bool divide(vector<int>arr){
    int  prefix=0;
    int total_sum=0;
    int size=arr.size();
    int remaining=0;
    for(int i=0;i<size-1;i++){
        total_sum+=arr[i];
    }
    for(int i=0;i<size-2;i++){
        prefix+=arr[i];
        remaining=total_sum-prefix;
        if(remaining==prefix)
        return true;

    }
    return false;

}
int main(){
    int n;
    cout<<"Pls enter the size of array";
    cin>>n;
    vector<int>v(n);
    cout<<"pls enter the elemnts in array";
    for(int i=0;i<n;i++){
    cin>>v[i];
    }
    bool ans=divide(v);
    if(ans)
    cout<<"Can be divided into equal halves";
    else 
    cout<<"Cant be divided!";
    return 0;
}
