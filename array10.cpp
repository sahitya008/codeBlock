//REARRANGING arrays SO THAT ARR[I]=I
#include <iostream>
using namespace std;

void rearrange(int *arr, int arrSize)
{
    cout<<"initial array";
     for (int i = 0; i < arrSize; i++)
        cout <<arr[i] << " ";
    for (int i = 0; i < arrSize; i++)
    {
       if (arr[i] != -1 && arr[i] != i)
        {
            int temp = arr[i];
            // check if arr[temp] has -1 or some other element
            while (arr[temp] != -1 && arr[temp]!=temp)
            {
                cout<<"checking for "<<i<<" "<<endl;
                int temp2 = arr[temp];
                arr[temp] = temp;
                temp = temp2;
                //arr[temp2] =-1;               
                //cout<<"value of temp"<<temp2<<endl;
            }
            
            //incase there is -1 in the array position
            cout<<arr[temp]<<endl;
           // if(arr[temp== -1]){
            arr[temp] = temp;
            //}
            if (arr[i] != i)
            {
                cout<<"entering blank values"<<i<<endl;
                arr[i] = -1;
            }
        }
    }

}

int main()
{
    int arr[] = {-1, -1, 6, 1, 9, 3, 2, -1, 4, -1};
    //int arrSize= 10;
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    //cout << arrSize;
    rearrange(arr,arrSize);
    for (int i = 0; i < arrSize; i++)
        cout <<arr[i] << " ";
}