#include<iostream>
using namespace std;
void printarr(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={7,8,3,1,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n-1;i++){
        int smallest=i;
        for(int j=i;j<n;j++){
            if(arr[j]<arr[smallest]){
                smallest=j;

            }
        }
        int temp=arr[smallest];
        arr[smallest]=arr[i];
        arr[i]=temp;
    }
    printarr(arr,n);
    //Time complexity is O(n^2)
}