        #include<iostream>
        #include<math.h>
        using namespace std;
        //153
        //1+125+27=153
        int main(){
        int n=407,originalN=407,sum=0;
        //cout<<n<<endl;
        while(n>0){
            int lastdigit=n%10;
           // cout<<lastdigit<<endl;
            sum+= pow(lastdigit,3);
            n=n/10;
           // cout<<sum<<endl;
        }
       // cout<<sum<<endl;
       // cout<<n<<endl;
        if(sum==originalN){
            cout<<"yes armstrong"<<endl;

        }
        else{
        cout<<"no";
        }
        }