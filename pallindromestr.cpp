#include<iostream>
#include<string>
using namespace std;
    string s1;
bool ispallindrome(){
    int n;
    cout<<"enter string" <<endl;
    cin>>s1;
    n= s1.length();
    int l=0 ,r=n-1;
    while( l<=r){
        if(s1[l]!=s1[r]){
            return false;
        }
        l++;
        r--;

    }
    return true ;
}

int main()
{
    if (ispallindrome())
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}