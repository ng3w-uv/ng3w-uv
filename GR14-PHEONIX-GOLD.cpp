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

	ll n, x, y, sum = 0;

	read(n, x);
	// deb(n);
	// deb(x);

	// deb(x);
	vector<ll> v;

	for (ll i = 0; i < n; i++) {
		cin >> y;
		v.push_back(y);
		sum += v[i];
	}
	sort(v.begin(), v.end(), greater<int>());
	// deb(sum);
	if (sum == x) {
		cout << "NO";
		return;
	}
	else {
		cout << "YES\n";
		sum = 0;
		for (int i = 0; i < n; i++)
		{
			sum += v[i];
			if (sum == x) {
				swap(v[i], v[i + 1]);
				sum += v[i];
				i++;
			}
		}
		for (int i = 0; i < n; i++)
		{
			write(v[i]);
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
