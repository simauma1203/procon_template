//#include <bits/stdc++.h>
#include<iostream>
#include<cstdio>
#include<cmath>
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

ll mCn(ll m,ll n){
    ll a=1,b=1;
    REP(i,n)a*=m-i;
    REP(i,n)a/=n-i;
    return a/b;
}

ll mPn(ll m,ll n){
    ll a=1,b=1;
    REP(i,m)a*=i+1;
    REP(i,m-n)b*=i+1;
    return a/b;

}


int main(){
    

    


    return 0;
}