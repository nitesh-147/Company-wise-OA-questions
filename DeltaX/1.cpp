#include <bits/stdc++.h>
using namespace std;

int main()
{
   string t;getline(cin,t);
   int x=stoi(t);
   while(x--){
    string s;getline(cin,s);
    size_t at=s.find('@');
    size_t dot = s.find('.',at);
    size_t space=s.find(' ');
    if(space==string::npos && at != string::npos && dot!=string::npos && at!=0 && at<dot){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }
   }
    return 0;
}