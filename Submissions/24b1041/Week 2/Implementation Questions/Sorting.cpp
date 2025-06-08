#include<bits/stdc++.h>
using namespace std;

void selection_sort(int arr[],int n){
    for(int i=0;i<n;i++){
        int min=i;
        int mine=arr[i];
        for(int j=i;j<n;j++){
            if(arr[j]<=mine){
                mine=arr[j];
                min=j;
            }
        }
        arr[min]=arr[i];
        arr[i]=mine;
    }
}

void Insertion_sort(int arr[], int n){
    for(int i=1;i<n;i++){
        int x=i;
        for(int j=i-1;j>=0;j--){
            if(arr[x]<arr[j]){swap(arr[x--],arr[j]);}
        }
    }
}

void bubblesort(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j+1]<arr[j]){swap(arr[j],arr[j+1]);}
        }
        
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    selection_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    Insertion_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    bubblesort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}