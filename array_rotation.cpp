#include<iostream>
using namespace std;


void rotateByOne(int arr[], int arrSize){
    int temp;
    temp=arr[0];
    for(int i=0;i<arrSize;i++){
        arr[i]=arr[i+1];
    }
    arr[arrSize-1]=temp;
}
void rotate(int arr[], int d, int arrSize){
    for(int i=0;i<d;i++){
        rotateByOne(arr,arrSize);
    }
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