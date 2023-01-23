#include<bits/stdc++.h>
using namespace std;
#define ll long long

int minVal(int a, int b) {

        int count = 0;

        for(int i =0;i<30;i++){

            if(b & (1<<i)){
              cout<<(b & (1<<i))<<" "<<i<< endl;
                count++;

            }

        }

        // cout<<endl;
        //cout<<count<<endl;

        int val =0;

        // for(int i =29;i>=0;i--){

        //     if(count>0){

        //         if(a & (1<<i)){

        //             count--;

        //             val+=(1<<i);

        //         }

        //     }else{

        //         break;

        //     }

        // }

        

        // for(int i =0;i<30;i++){

        //     if(count>0){

        //         if(!(val & (1<<i))){

        //             count--;

        //             val+=(1<<i);

        //         }

        //     }else{

        //         break;

        //     }

        // }

        return val;

}



int main() {

  int n,B,A,k;cin>>A>>B;

  cout<<minVal(A,B);

}
