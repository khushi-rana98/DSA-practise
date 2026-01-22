#include <iostream>
using namespace std;
int main(){
//    Pattern1:
  for(int i=0;i<=5;i++){
      for(int j=0;j<=4;j++){
          cout<<"*"<<" ";
      }
      cout<<endl;
  }

//   Pattern2:
cout<<endl;
cout<<"Pattern 2: "<<endl;
for(int j=1;j<=5;j++){
for(int i=1;i<=5;i++){
    cout<<j<<" ";
}
cout<<endl;}

// Pattern 3:
cout<<"Pattern 3"<<endl;
for(int r=1;r<=5;r++){
for(int c=5;c>=1;c--){
    cout<<c<<" ";
}
cout<<endl;}

// Pattern 4:
cout<<"Pattern 4: "<<endl;
for(char row='a';row<='e';row++){
    
    for(int col=1;col<=5;col++){
        cout<<row<<" ";
    }
    cout<<endl;
}

// Mthod2:
for(int row=1;row<=5;row++){
    char name ='a'+(row-1);
    for(int col=1;col<=5;col++){
        cout<<name<<" ";
    }
    cout<<endl;
}
// Pattern 5: a b c d e
            //a b c d e
cout<<endl<<"Pattern 5: ";
for(int row=1;row<=5;row++){
for(char c='a';c<='e';c++){
    
    cout<<c<<" ";
}
cout<<endl;
}

// Pattern 6:
// 1 2 3 4 5
// 6 7 8 9 10
for(int row=1;row<=5;row++){
    for(int col=1;col<=5;col++){
        cout<<5*(row-1)+col<<" ";
    }
    cout<<endl;
}

}