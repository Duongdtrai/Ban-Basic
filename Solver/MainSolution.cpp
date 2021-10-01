/*Cre: Dylan*/
#include <bits/stdc++.h>
#define IOS(false) ios::sync_with_stdio(false)
#define tie() cin.tie(NULL)
/*Compact*/
#define fi first
#define se second
#define pb push_back
#define pob pop_back
#define mp make_pair
#define sz(Object) Object.size()
#define all(Object) Object.begin(), Object.end()
#define Re0(Object) memset(Object, 0, sizeof(Object))
#define Fu(tmp, L, R, Jump)	for(int tmp=L; tmp<R; tmp+=Jump)
#define Fd(tmp, R, L, Jump)	for(int tmp=R; tmp>=L; tmp-=Jump)
#define cinArr(Array)	for(auto &ele:Array)  cin >> ele;
#define coutArr(Array)	for(const auto &ele:Array)	cout << ele << ' ';
/*Constant*/
#define Pi atan(1)*4
#define oo INT_MAX
const int ArrLim = 1e6+5;
const int Mod = 1e9+7;
/*Declare*/
using namespace std;
typedef long long ll;
typedef double db;
typedef pair <int, int> pii;

/*Initialize*/
bool MultiTest = true;
int test = 1;
ll n;
vector<ll>a;
/*Function*/
void init(){
    cin >> n;
    for(ll i = 0; i < n; i++){
       ll x;
       cin >> x;
       a.push_back(x);
    }
}

void solve(){
    ll even = 0;
    ll odd = 0;
    if(n <= 2){
        cout << "0";
    }
    else{
        for(ll i = 0; i < n; i++){
            if(i%2 == 0){
                even = even + i*a[i];
            }
            else{
                odd = odd + i*a[i];
            }
        }
        ll ucln = __gcd(even,odd);
        ll bcnn = even*odd/ucln;
        cout << bcnn;
    }
    a.clear();
}

/*Main program*/
int main(){
    IOS(false);
    if(MultiTest)	cin >> test;
    while(test--){
        init();
        solve();
        cout << endl;
    }
    return 0;
}