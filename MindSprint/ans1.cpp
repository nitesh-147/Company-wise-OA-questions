#include<bits/stdc++.h>
using namespace std;

int main(){
 int s=5,x=4;
 long result=1;
 while(x!=0){
    result*=s++;
    --x;
 }
 cout<<result;
return 0;
}