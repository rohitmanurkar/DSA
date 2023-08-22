#include <iostream>
using namespace std;
//to check whether the alphabets are same or not 
bool checkequal(int a[26],int b[26])
{
    for(int i=0;i<26;i++)
    {
        if(a[i]==b[i])
        {
            return true;
        }
      
    }
      return false;
}

//this function work for traversing and to find whether permutation is present or not

bool checkpermutation(string s1, string s2)
{
    int count1[26] = {0};
    // This for loop checks the number of alphabets present in s1 string
    for (int i = 0; i < s1.length(); i++)
    {
        int index1 = s1[i] - 'a';
        count1[index1]++;
    }

    int count2[26] = {0};
    // This for loop checks the number of alphabets present in s2 string
    for (int i = 0; i < s2.length(); i++)
    {
        int index2 = s2[i] - 'a';
        count2[index2]++;
    }
    int len1 = s1.length();
    int i = 0;
    // This while loop will check only for the first window of alphabets
    while (i < len1)
    {
        char newch = s2[i];
        int index2 = newch - 'a';
        count2[index2]++;
        i++;
    }
    if (checkequal(count1, count2))
        return true;
    // This loop will check for the remaining string
    while (i < s2.length())
{
    // Add the next alphabet and remove the first one
    char newch = s2[i];
    int index_new = newch - 'a';
    count2[index_new]++;

    char ch = s2[i - len1];
    int index_old = ch - 'a';
    count2[index_old]--;
    i++;
    if (checkequal(count1, count2))
        return true;
}


    return false;
}

int main()
{
    string s1, s2;
    cout << "Enter the first string: ";
    cin >> s1;
    cout << "Enter the second string: ";
    cin >> s2;

    if (checkpermutation(s1, s2))
    {
        cout << "YES, one string is a permutation of the other." << endl;
    }
    else
    {
        cout << "NO, one string is not a permutation of the other." << endl;
    }

    return 0;
}
/*
Enter the first string: abcd
Enter the second string: cabd
Now, let's go through the code step by step:

The checkpermutation function is called with s1 = "abcd" and s2 = "cabd".

Two arrays count1 and count2 are initialized to keep track of the count of each alphabet in the strings. Initially, both arrays are set to all zeros.

The first loop counts the occurrences of each alphabet in s1 and updates count1 accordingly. After this loop, count1 might look like this:

sql
Copy code
count1 = {1, 1, 1, 1, 0, ... (all other elements are 0)}
Similarly, the second loop counts the occurrences of each alphabet in s2 and updates count2. After this loop, count2 might look like this:

sql
Copy code
count2 = {1, 1, 1, 1, 0, ... (all other elements are 0)}
len1 is set to the length of s1, which is 4. i is initialized to 0.

The while loop begins, and it processes the first window of characters in s2 that is the same length as s1. In this case, it processes "cabd", and count2 is updated accordingly. After processing the first window, count2 remains the same as the second loop.

The checkequal function is called with count1 and count2. It compares these arrays and checks if any alphabets have the same count in both strings. In this case, they are equal, so checkequal returns true.

Since checkpermutation received true from checkequal, it returns true.

In the main function, the result is checked, and it prints "YES, one string is a permutation of the other."

So, in this example, your code correctly determines that "cabd" is a permutation of "abcd". The code works by counting the occurrences of each alphabet in both strings and then comparing these counts to determine if one is a permutation of the other.

*/





