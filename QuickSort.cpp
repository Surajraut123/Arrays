#include <iostream>

using namespace std;


int partition(int arr[], int s, int e){
    int pivot = arr[s];
    int cnt = 0;
    for(int i=s+1;i<=e;i++){
        if(arr[i] <= pivot){
            cnt++;
        }
    }
    
    int pivotIndex = s+cnt;
    swap(arr[pivotIndex], arr[s]);
    
    int i=s, j=e ;
    while(i<pivotIndex && j>pivotIndex){
        while(arr[i] < pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotIndex;
}

void QuickSort(int arr[], int s, int e){
    if(s>=e){
        return ;
    }
    int p = partition(arr,s,e);
    QuickSort(arr, s, p-1);
    QuickSort(arr, p+1, e);
}

int main(){
    int n;
    cout<<"Size ";
    cin>>n;
    
    int *arr = new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    QuickSort(arr, 0, n-1);
    cout<<"Sorted Array : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}