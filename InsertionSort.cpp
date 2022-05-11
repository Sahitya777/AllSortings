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
    for(int i=1;i<n;i++){
        int current=arr[i];
        int j=i-1;
        while(j>=0 && current <arr[j]){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }
    printarr(arr,n);

}