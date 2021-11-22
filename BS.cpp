#include <bits/stdc++.h>
using namespace std;
//bianry search
class BS{
public:
int binarySearch(int, int, int[], int);

};

int BS::binarySearch(int a, int b,int arr[], int x)
{
    cout<<"binary search caled";
    int mid,search=x;
    
    if(a==b){
        cout<<"single element";
        if (arr[a]==x)
        return a;
        //else return -1;
    }
    else{
        cout<<"calling middle";
        mid= (b+a)/2;
        cout<<mid<<endl;
        int pos;
        if(arr[mid]==x){
        return mid;
        }
        else{
            if(arr[mid]>x){
                cout<<"left array";
                 pos=binarySearch(0,mid-1,arr,x);
                 return pos;
            }
            else{
             cout<<"right array";
             pos= binarySearch(mid+1,b,arr,x);
             
             return pos;
            }
            return -1;
        }
    }
};
int main()
{
    int arrSize;
    cout << "enter array size";
    cin >> arrSize;
    //vector<int> arr;
    int arr[arrSize];
    cout << "input the array elements";
    for (int i = 0; i < arrSize; i++)
    {
        cin >> arr[i];
    }
    cout << "input array";
     for (int i = 0; i < arrSize; i++)
    {
        cout << arr[i]<<" ";
    }

    //sort(arr.begin(),arr.end());
    //BS *obj = new BS(arr);
    for (int i = 0; i < arrSize; i++)
    {
        cout << arr[i];
    }
    int p=0,q,x;
    BS *obj= new BS();
    
    int pos= obj->binarySearch(0, arrSize-1, arr, 10);
    cout<<pos;
}