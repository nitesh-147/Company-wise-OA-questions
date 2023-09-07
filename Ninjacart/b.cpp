#include<bits/stdc++.h>
using namespace std;

int positions(int N,int X,int A[]){
    int result=-1;
    if(X>N || X<1 || A[X-1]==0) return result;
    vector<int> v(N+1);
    v[0]=0;
    v[1]=A[0];
    for(int i=2;i<=N;i++){
        v[i]=A[i-1]+v[i-1];
    }
    cout<<v[X]-A[X-1]+1<<" ";
    return v[X];
}

int main(){
    int n;cin>>n;
    int x;cin>>x;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    cout<<positions(n,x,A)<<endl;
return 0;
}