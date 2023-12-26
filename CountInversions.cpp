#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define all(v) v.begin(), v.end()
#define vl vector<ll>
#define vi vector<int>
#define vp vector<pair<ll, ll>>
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define ull unsigned long long
#define MAX 1000007
const ll MOD = 1000000007;
void SPEED()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
int a[200002];
ll Inversions(int l,int r){
    if(l>=r)return 0;
    int mid=(l+r)/2;
    ll ans=Inversions(l,mid);
    ans+=Inversions(mid+1,r);
    vi v;
    for(int i=mid+1;i<=r;i++)v.pb(a[i]);
    sort(all(v));
    for(int i=l;i<=mid;i++)ans+=(lower_bound(all(v),a[i])-v.begin());
    return ans;
}
int main()
{
    SPEED();
    int t = 1;
    cin >> t;
    //int T=0;
    while (t--)
    {   
        int n;cin>>n;
        for(int i=0;i<n;i++)cin>>a[i];
        cout<<Inversions(0,n-1)<<'\n';
    }
    return 0;
}
