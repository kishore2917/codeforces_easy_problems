#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    int x=0;
    while(n--){
        cin>>s;
        if(s[0]=='+' || s[1]=='+') x++;
        else x--;
        
    }
    cout<<x;
}
