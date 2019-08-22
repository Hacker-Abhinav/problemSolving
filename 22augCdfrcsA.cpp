#include <bits/stdc++.h>
#include<unordered_map>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
    int b,p,f;
    cin>>b>>p>>f;
    int h,c;
    cin>>h>>c;
    int maxx;
    if(c>=h)
    {
        if(b>=2*f){
        maxx=f*c;
        b=b-2*f;
        }
        else
        {
            maxx=b/2*c;
            b=0;
            //flag=1;
            //break;
        }
        if(p>=b/2)
        {
            maxx+=b/2*h;
        }
        else
        {
            maxx+=p*h;
        }
    }
    else{
        if(b>=2*p){
        maxx=p*h;
        b=b-2*p;
        }
        else
        {
            maxx=b/2*h;
            b=0;
            //flag=1;
            //break;
        }
        if(f>=b/2)
        {
            maxx+=b/2*c;
        }
        else
        {
            maxx+=f*c;
        }

    }
    cout<<maxx<<endl;
    }
}
