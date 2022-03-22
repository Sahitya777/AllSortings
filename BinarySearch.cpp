#include<iostream>
using namespace std;
int  binarysearch(int arr[],int si,int mi,int x){
    if(mi>=1){
        int mid=si+(mi-si)/2;
        if(arr[mid]==x){
            return mid;
        }
        if(arr[mid]>x){
            return binarysearch(arr,si,mid-1,x);
        }
        return binarysearch(arr,mid+1,mi,x);
        
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
    int result=binarysearch(arr,0,n-1,x);
    (result==-1)
        ?cout<<"Not present"
        :cout<<result;
}