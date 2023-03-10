using namespace std;
#include<bits/stdc++.h>
#define endl "\n"
#define ll unsigned long long int
#define ui unsigned int
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pi acos(-1.0) 
#define MOD 10000007
const int N = 1e6+10;

int max2num(int a, int b)
{
	if(a>b) return a;
	else return b;
}

int max3num(int a, int b, int c)
{
	if(a>b && a>c) return a;
	else if(b>a && b>c) return b;
	else return c;
}

void solve()
{
	int a, b, c;
	cin >> a >> b >> c;
	cout << max2num(a,b) << endl;
	cout << max3num(a,b,c) << endl;
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
