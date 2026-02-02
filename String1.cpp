#include <iostream>
using namespace std;
int main(){
    // Method1:
    char c[]={'a','p','p','l','e'};
    cout<<c;
    // Method2:
    // char arr[5]; //max size
    // cin>>arr;
    // arr[3]='\0';
    // cout<<"The string is: "<<arr;

    // Strings
    string s="Khushi Rana";
    cout<<s;

    // user input:
    string s1;
    cin>>s1;
    cout<<s1; //only first string input get print

    // taking paragraph as user input
    string s2;
    getline(cin,s2);
    cout<<"The string i entered is: "<<s2;

    // Escape character:
    string s3="ROhit negi is a \"gud\" boy";
    cout<<s3;
    // example of escape character: prinitng \

    string s4="\\";
    cout<<s4;

    string s5="\"";
    cout<<s5;

    // operations on strings:
    cout<<"Operations on strings"<<endl;
    string a1="hey";
    cout<<a1.size();

    string a2="rohit";
    string a3="Mohit";
    string a4=a2+a3;
    cout<<a4<<endl;
    a3.push_back('I');
    cout<<a3;

    // print the  null character
    string a5="\\0";
    cout<<a5;

    // reverse string
    string z="Khushi";
    int start=0;
    int end=z.size()-1;
    while(start<=end){
        swap(s[start],s[end]);
        start++;
        end--;
    }
    cout<<z;
    return 0;
}