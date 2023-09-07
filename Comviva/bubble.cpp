#include<bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> &arr){
    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            if(arr[i]>arr[j]) swap(arr[i],arr[j]);
        }
    }
}

int main(){
   vector<int> v={0,2,3,1,3,5,6,3,4,2,5,6};
   bubbleSort(v);
   for(auto i:v) cout<<i<<" ";
return 0;
}