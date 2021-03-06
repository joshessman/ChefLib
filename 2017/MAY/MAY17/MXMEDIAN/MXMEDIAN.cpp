// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// ~~~~~~~© Aashutosh Rathi~~~~~~
// ~~~~~~~~aashutosh001~~~~~~~~~~
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

// Result = Correct Answer (100 marks)

#include <bits/stdc++.h>
#include <stdio.h>

using namespace std;

#define mod(x) 			x%1000000007;
#define MIN(n1, n2 )    ((n1) > (n2) ? (n2) : (n1))
#define MAX(n1, n2 )    ((n1) > (n2) ? (n1) : (n2))
#define MID(s, e)       (s+(e-s)/2)
#define FOR(i, a, b) 	int i; for(i=(a);i<(b);i++)
#define FORD(i, a, b) 	int i; for(i=(a);i>(b);i--)
#define show(a)			for(i=0;i<sizeof(a);i++) cout<<a[i]<<" ";
#define get(a)			for(i=0;i<sizeof(a);i++) cin>>a[i];
#define scanint(a) 		scanf("%d",&a)
#define scanLLD(a) 		scanf("%lld",&a)
#define scanstr(s) 		scanf("%s",s)
#define scanline(l) 	scanf(" %[^\n]",l);

typedef long int BIG;
typedef long long PAPA;

int main()
{
	std::ios_base::sync_with_stdio(false);
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int dn = 2*n;
		int a[dn], i;
		for (i = 0; i < dn; ++i) {
			cin >> a[i];
		}
		sort(a, a+dn);
		cout << a[n+n/2] << endl;
		for (i = 0; i < n; i++) {
			cout << a[i] << " " << a[n+i] <<" ";
		}
		cout << endl;
	}
	return 0;	
}