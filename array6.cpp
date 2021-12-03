//finding element in sorted and then rotated array
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
int searchPivot(int arr[],int start, int end){
    int i=0;
   if(end<start){
       return -1;
   }
   else if(start==end){
       return start;
   }
    
}
int BS(int arr[], int start, int end, int searchElement){
   if (start==end){
       if(start==searchElement){
           return start;
       }
       else
       return false;
   }
    int mid=(start+end)/2;
    if(mid==searchElement){
        return searchElement;
    }
    if(mid>searchElement){
        BS(arr,0,mid-1,searchElement);
    }
    else
    BS(arr,mid+1,end,searchElement);

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
    cout<<"enter element you want to search";
    int searchElement;
    cin>>searchElement;
    int pivot= searchPivot(arr,0, arrSize);
    if (pivot==searchElement){
        cout
    }
    int index;
    index= BS(arr,0,pivot-1,searchElement);
    index= BS(arr,pivot+1,arrSize, searchElement);
    return 0;
}