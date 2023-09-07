#include<bits/stdc++.h>
using namespace std;

regex regularExpression("(^[a-z]{1,6}(?:_[0-9]{0,4})?$)(@hackerrank\\.com)");

int main(){
    string s;cin>>s;
    cout<<regex_match(s,regularExpression);
return 0;
}