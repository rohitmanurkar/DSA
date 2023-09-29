#include<iostream>
using namespace std;
int power(int a, int b){
    //base case
    if(b==0)
    {
        return 1;
    }
    if(b==1){
        return a;
    }
    //recursvie call
   int ans= power(a,b/2);
   //for b even
     if(b%2==0){
       return ans *ans;
     }
     else{
        return a*ans*ans;
     }
}
int main(){
    int a,b;
    cout<<"Enter the values of a & b"<< endl;
    cin>> a>> b;
    cout<< endl;
    int ans =power(a,b);
    cout<<"a to the power b ans is :"<< ans<< endl;
    return 0;
}
