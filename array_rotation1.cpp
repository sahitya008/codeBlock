//this uses reversal algo to rotate the arrays
#include<iostream>
using namespace std;

void reverse(int arr[], int start, int end){
    while(start<end)
    {
        int temp= arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}

void rotate(int arr[], int d, int arrSize){
        int n= arrSize;
        reverse(arr,0,d-1);
        reverse(arr,d,n-1);
        reverse(arr,0,n-1);
    
}

int main(){
    int* arr;
    int arrSize;
    cout<<"enter array size"<<endl;
    cin>>arrSize;
    arr= new int[arrSize];
    cout<<"enter array elements"<<endl;
    for(int i=0;i<arrSize;i++){
        int temp;
        cin>>temp;
        arr[i]=temp;
    }
    cout<<"array elements are as"<<endl;
    for(int i=0;i<arrSize;i++){
        cout<<arr[i]<<endl;
    }
    //rotation code
    cout<<"enter valyue by which array should be rorated"<<endl;
    int rotateValue;
    cin>>rotateValue;
    rotate(arr,rotateValue, arrSize);
    cout<<"after rotation"<<endl;
    for(int i=0;i<arrSize;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}