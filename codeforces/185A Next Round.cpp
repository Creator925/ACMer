#include<bits/stdc++.h>
using namespace std;
int a[55];
int main()
{
	int n, k, ans = 0;
	cin >> n >> k;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	for(int i = 1; i <= n; i++){
		if(a[i] >= a[k] && a[i] != 0)
			ans++;
	}
	cout << ans << endl;
	return 0;
}
