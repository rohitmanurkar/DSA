 #include <iostream>
 using namespace std;
 char getMaxOccuringChar(string str)
    {
        //array that store the value of character
        
        int arr[26]={};
        for(int i=0; i<str.length(); i++){
            char ch=str[i];
            int num=0; 
            num=ch-'a';
            arr[num]++;
        }
        int maxi=-1, ans=0;
        for(int i=0; i<26; i++){
            if(maxi<arr[i]){
               ans=i;
               maxi=arr[i];
            }
        }
        char finalAns='a'+ ans;
        return finalAns;
    }

int main()
{
    string s;
    cout<<"enter word"<< endl;
    cin>>s;
    cout<<"the alphabet which is occured maximum times is "<<getMaxOccuringChar(s);
return 0;
}