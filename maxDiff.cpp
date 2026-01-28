#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
using namespace std;
int maxDiff(vector<int>&arr){
    int n=arr.size();
        if(n<2) return 0;
            vector<int>suffix(n);
                 suffix[n-1]=arr[n-1];
                     for(int i=n-2;i>=0;i--){
                             suffix[i]=max(suffix[i+1],arr[i]);
                                 }
                                     int maxDiff=-1;
                                         // calculation
                                             for(int i=0;i<n;i++){
                                                     if(suffix[i+1]>arr[i])
                                                             maxDiff=max(maxDiff, suffix[i+1]-arr[i]);
                                                                 }
                                                                     return maxDiff;
                                                                     }
                                                                     int main(){
                                                                         int n;
                                                                             cout<<"ENter the size of array";
                                                                                 cin>>n;
                                                                                     cout<<"ENter the elmnts: ";
                                                                                         vector<int>v(n);
                                                                                             for(int i=0;i<n;i++){
                                                                                                     cin>>v[i];
                                                                                                         }
                                                                                                         int result=maxDiff(v);
                                                                                                         cout<<"The max differnce: "<<result;
                                                                                                         return 0;
                                                                                                         }
                                                                                                         