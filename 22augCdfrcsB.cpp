#include <bits/stdc++.h>
#include<unordered_map>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int A[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>A[i][j];
        }
    }
    int B[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            B[i][j]=0;
        }
    }
    int flag,count;
    flag=count=0;
    vector<int> v;
    //cout<<"jkkks";
    vector<int>::iterator it;
    for(int i=0;i<n-1;i++)
    {//cout<<"fiss";
        for(int j=0;j<m-1;j++)
        {
            //cout<<"kss";

           /* if(A[i][j]==0)
            {
               // cout<<"ye 0";
                if(A[i+1][j]==1||A[i][j+1]==1||A[i+1][j+1]==1)
                {
                    flag=1;
                    cout<<"-1";
                   break;
                }
            }*/

           /*  if(A[i][j]==1&&A[i][j+1]==1)
            {
                //cout<<"ye 1";
                if(A[i+1][j]==0&&A[i+1][j+1]==0)
                {
                    if(i+2>=n||j+2>=m){
                    flag=1;
                    cout<<"-1";
                   break;
                    }
                }
            }
            if(A[i][j]==1&&A[i+1][j]==1)
            {
                //cout<<"ye 1";
                if(A[i][j+1]==0&&A[i+1][j+1]==0)
                {
                    if(i+2>=n||j+2>=m){
                    flag=1;
                    cout<<"-1";
                   break;
                    }
                }
            }*/
            if(A[i][j]==1)
            {
                //cout<<"all 1";
                if(A[i+1][j]==1&&A[i][j+1]==1&&A[i+1][j+1]==1)
                {
                    B[i][j]=1;
                    B[i+1][j]=1;
                    B[i][j+1]=1;
                    B[i+1][j+1]=1;
                    v.push_back(i+1);
                    v.push_back(j+1);
                    count++;
                }
            }
        }

    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(A[i][j]!=B[i][j])
            {
                flag=1;
                cout<<"-1";
                break;
            }
        }
        if(flag==1)
        {
            break;
        }
    }
    //cout<<v.size();
    //cout<<flag;
    int x=0;
    if(flag==0)
    {
        cout<<count<<endl;
        for(it=v.begin();it!=v.end();it++)
        {
            x++;
            //cout<<"hi";
            cout<<*it<<" ";
            if(x%2==0)
            {
                cout<<endl;
            }
        }
        //cout<<endl;
    }
}
