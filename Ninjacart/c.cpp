#include<bits/stdc++.h>
using namespace std;

int bankNotes(int N,int A[]){
    stack<int> s;
    for(int i=0;i<N;i++){
        s.push(A[i]);
        while(s.size()>1){
            int a=s.top();
            s.pop();
            int b=s.top();
            if(a==b){
                s.pop();
                s.push(a+1);
            }
            else{
                s.push(a);
                break;
            }
        }
    }
    return s.size();
}

int main(){
    int n;cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    cout<<bankNotes(n,A);
return 0;
}