#include<iostream>
using namespace std;
   void reversed(char name[],int n)
{
    
    int s=0;
   
     int e=n-1;
     while(s<e)
     {
        swap(name[s],name[e]);
        s++;
        e--;
     }
}
     int getlength(char name[])
{
    int count=0;
    for (int i = 0;name[i]!='\0'; i++)
    {
        count++;
    }
   return count; 
}

int main(){
    char name[20];
    cout<<"Enter your Name"<<endl;
    cin>>name;
    cout<<"Your Name is "<< name<<endl;
    int len=getlength(name);
    reversed(name,len);
    cout<< "reversed name is ";
    cout<<name;

    return 0;

}
