#include <iostream>
using namespace std;
int main(){
    cout<<"Star Pattern"<<endl;
    // Patter1: 
    cout<<"inverted right angle triangle"<<endl;
    int n=5;
    for(int row=1;row<=n;row++){
         char c='a';
        for(int col=1;col<n+1-row;col++){
            c='a'+col-1;
            cout<<c;
        }
        cout<<endl;
    }

    // Pattern 2:
    cout<<"Pattern 2: Right angled Trinagle"<<endl;
    for(int row=1;row<=5;row++){
        for(int col=1;col<=row;col++){
            cout<<"*";
        }
        cout<<endl;
    }
    

    // Pattern 2: right angled triangle
    cout<<"pattern 2 variation: "<<endl;
    for(int row=1;row<=5;row++){
        for(int col=1;col<=row;col++){
           cout<<col<<" ";
        }
        cout<<endl;
    }

    cout<<"Right Angled Triangle variation: "<<endl;
    for(int row=1;row<=5;row++){
        for(int col=1;col<=row;col++){
            cout<<row<<" ";
        }
        cout<<endl;
    }
    return 0;
}