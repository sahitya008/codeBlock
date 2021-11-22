    #include<iostream>
    using namespace std;
    int main(){
        int n= 5; //defining total rows
        for(int i=0;i<5;i++){
        for (int j=0;j<5;j++){
            if(j< n-(i+1)){     //consider as matrix values
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        // cout<<"*";   
        }
        cout<<endl;
        }
    }