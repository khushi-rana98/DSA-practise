#include <iostream>
using namespace std;
int main(){
    for(int row=1;row<=5;row++){
        for(int col=1;col<=5;col++){
            if(col>=5-(row-1))
            cout<<"*";
            else
            cout<<" ";
        }
        cout<<endl;
    }
    int n;
    cout<<"Enter number of rows:"<<endl;
    cin>>n;
    for(int row=1;row<=n;row++){
        for(int col=1;col<=n;col++){
            if(col>=n-(row-1))
            cout<<row;
            else
            cout<<" ";
        }
        cout<<endl;
    }

    // method2:
    int row,col;
    for(row=1;row<=4;row++){
        for(col=1;col<=4-row;col++){
            cout<<" ";
        }
        for(col=1;col<=row;col++){
            cout<<row<<" ";
        }
        cout<<endl;
    }
    return 0;
}