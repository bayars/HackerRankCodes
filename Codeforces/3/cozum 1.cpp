#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ff first;
#define ss second;
#define forl(n) for(int i=0;i<n;i++)
#define fora(arr,n) for(int i=0;i<n;i++) cin>>arr[i];
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string t,s=" ";
    cin>>t;
    s=t[(t.length()-1)/2];
    for(int i=1;i<=t.length()/2;i++)
    {
    	s+=t[(t.length()-1)/2 + i];
    	if(i!=t.length()/2 || t.length()%2==1)
    	s+=t[(t.length()-1)/2 - i];
    }
    cout<<s<<endl;
	return 0;
}
