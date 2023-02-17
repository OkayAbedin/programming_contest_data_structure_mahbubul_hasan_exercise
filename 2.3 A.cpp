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
	int arr[1000];

	int x=0;
	for(int i=0; i<=9; i++) 
	{
		arr[x] = i;
		x++;
	}
	for(int i=11; i<=99; i++) 
	{
		if(i%11==0)
		{
			arr[x] = i;
			x++;
		}
	}
	for(int i=101; i<999; i++) 
	{
		if(i%10==(i/100))
		{
			arr[x] = i;
			x++;
		}
	}
	int n;
	cin >> n;
	cout << arr[n] << endl; 
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
