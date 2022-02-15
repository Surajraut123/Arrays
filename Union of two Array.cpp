#include <bits/stdc++.h>
using namespace std;

void UnionOfArray(int a[], int n, int b[], int m){
    unordered_set<int> set;
    for(int i=0;i<n;i++){
        set.insert(a[i]);
    }
    for(int i=0;i<m;i++){
        set.insert(b[i]);
    }
    cout<<"Total Number of Union Element : "<<set.size()<<endl;
}

int main(){
    int n,m;
    cout<<"Size of Both Array : ";
    cin>>n>>m;
    int a[n];
    int b[m];
    cout<<"Element in First Array : ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Element in Second Array : ";
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    UnionOfArray(a,n,b,m);
}