//#include <bits/stdc++.h>
#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) FOR(i,0,n)
#define pb push_back
#define INF 93193111451418101
#define MIN -93193111451418101
using namespace std;
typedef long long ll;//int64
typedef unsigned long long ull;
ll gcd(ll a,ll b){return b?gcd(b,a%b):a;}
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
//----------program from here----------


int dp[510][510];//とおった記録
char c[510][510];//めいろ本体
ll h,w;
queue<int> qx;
queue<int> qy;

int in(ll x,ll y){
    if(x<0 || y<0 || w<=x || h<=y){
        return 0;
    }
    return 1;
}

ll DFS(ll sx,ll sy){
    ll nx,ny,x,y;

    REP(i,w)REP(j,h)dp[i][j]=-1;

    qx.push(sx);
    qy.push(sy);

    dp[sx][sy]=0;

    for(;;){
        if(qx.empty()){return 0;}

        x=qx.front();
        y=qy.front();
        qx.pop();
        qy.pop();

        REP(i,4){
            nx=x+dx[i];
            ny=y+dy[i];
            if(in(nx,ny) && dp[nx][ny]==-1){

                //if障害物ですすめない
                //if(c[nx][ny]=='#')continue;

                dp[nx][ny]=dp[x][y]+1;
                qx.push(nx);
                qy.push(ny);
            }
        }

    }
    return 0;
}




int main(){

    cin>>h>>w;
    
    
    DFS(0,0);//(x,y)から探索

    //dp[x][y]でx,yまでの最短がわかる -1:到達不能

    return 0;
}