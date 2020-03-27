//https://www.codechef.com/submit/LECANDY
#include<bits/stdc++.h>

#define ll long long int
#define llu unsigned long long int
#define f(n) for(ll i=0;i<n;i++)
#define fr(n) for(ll i=n-1;i>=0;i--)
#define endl "\n"
#define mod 1000000007

using namespace std;

int main()
{
	#ifdef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	std::ios_base::sync_with_stdio(false);

	ll t;
	cin>>t;
	while(t--)
	{
		ll n,c;
		cin>>n>>c;
		ll s=0;
		f(n)
		{
			ll x;
			cin>>x;
			s+=x;
		}
		if(s>c)
			cout<<"No"<<endl;
		else
			cout<<"Yes"<<endl;
	}
	
	return 0;
}
