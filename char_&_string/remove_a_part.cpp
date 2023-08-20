#include<iostream>
using namespace std;
string removeOccurrences(string s, string part) 
    {
        while(s.length()!=0 && s.find(part)<s.length())
        {
            s.erase(s.find(part),part.size());
        }return s;
        
    }
    int main()
    {
        string s="daabcbaabcbc";
        string part="abc";
        cout << removeOccurrences(s,part);
        return 0;
    }
    /*
    s.find() is to find the element
    s.erase is to remove the element
    
    */