#include<iostream>
#include<cctype>
using namespace std;
int main()
{
    string str;
    int st,end,n;
    cout<<"Enter the string :"<<endl;
    getline(cin,str);
    n=str.length();
    st=0,end=n-1;
    while(st<=end)
    {
        if(!isalnum(str[st]))
        {
            st++;
            continue;
        }
        if(!isalnum(str[end]))
        {
            end--;
            continue;
        }
        if(tolower(str[st])!=tolower(str[end]))
        {
            cout<<"String is not palindrome!";
            return 0;
        } 
        st++;
        end--;
    }
      cout<<"String is palindrome!";
    
}