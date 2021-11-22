            #include<iostream>
            using namespace std;
            int main(){
            /*
            *      *
            **    **
            ***  ***
            ********
            ********
            ***  ***
            **    **
            *      *
            */

            //need to use indexing from 1 for this because of spaces
            int n=4; 
            for(int i=1;i<5;i++){
                for(int j=1;j<=i;j++){
                    cout<<"*";
                }
                int space= 2*n-2*i;
                for(int j=1;j<=space;j++){
                    cout<<" ";
                }
                for(int j=1;j<=i;j++){
                    cout<<"*";
                }
                cout<<endl;
            }
            //for lower part of loop
            for(int i=4;i>0;i--){
                for(int j=1;j<=i;j++){
                    cout<<"*";
                }
                int space= 2*n-2*i;
                for(int j=1;j<=space;j++){
                    cout<<" ";
                }
                for(int j=1;j<=i;j++){
                    cout<<"*";
                }
                cout<<endl;
            }
    }