#include<iostream>
using namespace std;
int main(){
    /*cout<<"printing only the numbers that are not divisible by 3 from 1-100";
    for(int i=0;i<=100;i++){
        if(i%3==0){
            continue; //this means it will skip the remaining the statments writtena after this and 
                      //move to the next iteration
        }
        cout<<i<<endl;
        //break statement terminates the loop 
    }*/
    //PRINTING ONLY THE PRIME
    /*   int count;
        for(int i=1;i<= 100;i++){
           count=0;
            for (int j=2;j<= i/2;j++){
                if(i%j==0){
                   count++;
                    break;
                }
            }
            if(count==0){
                cout<<"prime"<<i<<endl;
            }
        }*/
    cout<<"enter your choice";
    char s;
    cin>>s;
    switch(s){
        case 'a':
        cout<<"pressed a";
        break;
        case 'b':
        cout<<"pressed B";
        break;
        default:
        cout<<"random key";

    }
    return 0;
}