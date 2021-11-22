#include<iostream>
using namespace std;

int main(){
    /*int a=45;
    int c=45/10;
    int remainder=45%10;
    int e= remainder*10+c;
    std::cout<<e<<endl;*/
    int n=4321;
    int reverse=0,remainder=0;
    while(n>0){
        remainder= n%10;
        reverse = (reverse*10) +remainder;
        
        n=n/10;
        
    }
    cout<< reverse;
    return 0;
}