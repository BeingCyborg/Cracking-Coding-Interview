#include <iostream>
#include <string>
using namespace std;
std ::string ShuffledString(string s,int indices[],int n)
{
    char shuffledString[n];
    for(int i=0;i<n;i++)
    {
        shuffledString[indices[i]]=s[i];
    }
    return std::string(shuffledString, n);
}

int main()
{
    string s;
    cout<<"Enter the string: ";
    cin>>s;
    int n=s.length();
    int indices[n];
    cout<<"Enter "<< n<< " indices: ";
    for(int i=0;i<n;i++)
    {
        cin>>indices[i];
    }
    cout<<ShuffledString(s,indices,n);
    return 0;
}
