#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    int test;
    cin>>test;
    
    while (test--)
    {   
        int a,b,c;
        cin>>a>>b>>c;
        
        if (a+b==c || b+c==a|| c+a==b) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}