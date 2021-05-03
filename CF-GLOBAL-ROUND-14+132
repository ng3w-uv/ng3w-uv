#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))
#define clr(x) memset(x, 0,sizeof(x))

#define deb(x) cout << #x << "->" << x << "\n";

template<typename... T>
void read(T&... args) {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	srand(chrono::high_resolution_clock::now().time_since_epoch().count());
	((cin >> args), ...);
}

template<typename... T>
void write(T&&... args) {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	srand(chrono::high_resolution_clock::now().time_since_epoch().count());
	((cout << args << " "), ...);
}

// int mpow(int base, int exp);
// const int mod = 1000000007;


// ========================================================================
// ========================================================================


void solve() {

	ll n, m, x, z = 0, diff = 0, d = 0, s = 0;

	read(n, m, x);
	// deb(n);
	// deb(x);

	// deb(x);
	vector<ll> v;
	vector<ll> va;
	for (ll i = 0; i < n ; i++) {
		cin >> z;
		v.push_back(z);

	}
	for (ll i = 0; i < m ; i++) {

		d = n / m;
		for (ll j = 0; j < d; j++) {
			s = s + v[i];
			i++;
			n--;
		}
		va.push_back(s);
		s = 0;
		m--;
	}
	for (ll i = 0; i < va.size(); i++) {
		if ((*max_element(va.begin(), va.end()) - *min_element(va.begin(), va.end()) ) <= x) {
			cout << "YES\n";

		}
	}

}





int main()
{

	ios_base::sync_with_stdio(false); cin.tie(NULL);
	srand(chrono::high_resolution_clock::now().time_since_epoch().count());

	// #ifndef ONLINE_JUDGE
	// 	freopen("Input.txt", "r", stdin);
	// 	freopen("Output.txt", "w", stdout);
	// #endif

	int t  = 1;
	read(t);
	while (t--) {
		solve();
		cout << "\n";
	}
	cerr << (float)clock() / CLOCKS_PER_SEC << "secs" << endl;
	return 0;
}






// int mpow(int base, int exp) {
// 	base %= mod;
// 	int result = 1;
// 	while (exp > 0) {
// 		if (exp & 1) result = ((ll)result * base) % mod;
// 		base = ((ll)base * base) % mod;
// 		exp >>= 1;
// 	}
// 	return result;
// }
