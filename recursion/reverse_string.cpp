#include<iostream>
using namespace std;
void reverse(string& str,int s, int e)
{
    //base case
    if(s>e){
        return ;
    }
    swap(str[s],str[e]);
    s++;
    e--;
    //Recursive call
    reverse(str,s,e);
    
}
int main()
{
    string name ="abcd";
    int s=0;
    int e=name.length()-1;
    reverse(name,s,e);
    cout<<"reversed name is "<< name<< endl;
    return 0;


}