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
int n;
vector<int>a;
/*Function*/
void init(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
}

void solve(){
    int even = 0;
    int odd = 0;
    for(int i = 0; i < n; i++){
        if(i%2 == 0){
            even = even + i*a[i];
        }
        else{
            odd = odd + i*a[i];
        }
    }
    int ucln = __gcd(even,odd);
    int bcnn = even*odd/ucln;
    cout << bcnn;
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