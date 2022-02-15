#include <iostream>
#include <queue>
using namespace std;

int main(){

    int n;
    cout<<"Size: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //K'th Smallest Element
    int k;
    cout<<"Kth Element : ";
    cin>>k;
    //Sample Solution is Sort array first then take ar[k-1] values.

    //Using Priority Queue.
    priority_queue <int> pq;
    priority_queue <int> p;
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
        //Storing values in queue by default maxValue.
        if(pq.size() > k){
            pq.pop();
        }
    }
    cout<<"K'th Smallest Element is : "<<pq.top()<<endl;

    for(int i=0;i<n;i++){
        p.push(-arr[i]);
        //Storing values in queue Min Value.
        if(p.size() > k){
            p.pop();
        }
    }
    cout<<"K'th Largest Element is : "<<-p.top()<<endl;

    
}