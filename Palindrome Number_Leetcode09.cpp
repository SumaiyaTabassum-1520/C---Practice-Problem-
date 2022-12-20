#include<bits/stdc++.h>
using namespace std;
    bool isPalindrome(int x) {

    long int t,num,ret=0;
    t=x;
    cout<<t<<endl;
    while(x!=0)
    {
        num=x%10;
        ret=(ret*10)+num;
        x=x/10;
    }

    if(t==ret)
    {
       cout<< "true";
    }
    else
    {
        cout<< "false";
    }
  }

int main()
{
    int n;
    cin>>n;
    isPalindrome(n);

}
