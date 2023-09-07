#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#define MAX_N 105

int n,m;
char s[MAX_N];
int x[MAX_N*2],y[MAX_N*2];
bool visited[MAX_N];
int beauty_values[MAX_N];
int graph[MAX_N][MAX_N];

int beauty(int n,int m,char s[],int x[],int y[]){
    int count[26]={0};
    for(int i=0;i<n;i++){
        count[s[i]-'a']++;
    }
    for(int i=0;i<n;i++){
        beauty_values[i]=count[s[i]-'a'];
    }
    for(int i=0;i<m;i++){
        graph[x[i]-1][y[i]-1]=1;
        graph[y[i]-1][x[i]-1]=1;  n      
    }
    int max_beauty=0;
    for(int i=0;i<n;i++){
        max_beauty=max_beauty>beauty_values[i]? max_beauty:beauty_values[i];
    }
    if(max_beauty==1){
        return -1;
    }
    memset(visited,0,sizeof visited);
    int res=-1;
    for(int i=0;i<n;i++){
        if(!visited[i] && beauty_values[i]==max_beauty){
            int stack[MAX_N],top=0;
            stack[top++]=i;
   
            while(top>0){
                int node=stack[--top];
                if(!visited[node]){
                    visited[node]=true;
                    for(int j=0;j<n;j++){
                        if(!visited[j] && graph[node][j]){
                            stack[top++]=j;
                        }
                    }
                }
            }
            res=max_beauty;
            break;
        }
    }
    return res;
}
int main(){
    scanf("%d%d%s",&n,&m,s);
    for(int i=0;i<m;i++){
        scanf("%d",&x[i]);
    }
     for(int i=0;i<m;i++){
        scanf("%d",&y[i]);
    }
    printf("%d\n",beauty(n,m,s,x,y));
    return 0;
}

if(!s.insert(p.second).second){
    return false;
}