#include <bits/stdc++.h>
using namespace std;

void Intersection(int a[], int n, int b[], int m){
    int p=0;
    int c[100];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int k =a[i]^b[j];
            if(k==0){
                c[p] = b[j];
                p++;
            }
        }
        
    }
    cout<<"Intersection of Array : ";
    for(int i=0;i<p;i++){
        cout<<c[i]<<" ";
    }

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
    Intersection(a,n,b,m);
}