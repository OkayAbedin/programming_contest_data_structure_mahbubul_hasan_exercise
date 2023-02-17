using namespace std;
#include<bits/stdc++.h>
#define endl "\n"
#define ll unsigned long long int
#define ui unsigned int
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pi acos(-1.0) 
#define MOD 10000007
const int N = 1e6+10;

void solve()
{
	int n;
    cin >> n;
    int sum=0;
    if(n>0)
    {
        for(int i=1; i<=n; i++)
        {
            sum+=i;
        }
    }
    else
    {
        for(int i=n; i<=1; i++)
        {
            sum+=i;
        }
    }
    cout << sum << endl;
}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("out2.txt", "w", stdout);
	#endif
	fastIO;
	solve();
	return 0;
}
