#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define all(v) v.begin(), v.end()
#define vl vector<ll>
#define vi vector<int>
#define vlp vector<pair<ll,ll>>
#define vip vector<pair<int,int>>
#define pb push_back
#define ff first
#define ss second
#define ull unsigned long long
#define MAX 1000007
#define SPEED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0); 
const ll MOD = 1000000007;


#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

template <typename num_t>
using ordered_set = tree<num_t,null_type,less<num_t>,rb_tree_tag,tree_order_statistics_node_update>;


int main()
{
    SPEED;
    int t = 1;
    //cin >> t;
    // int T=0;
    while (t--)
    {   
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        ll divC=b/c-(a-1)/c;
        ll divB=b/d-(a-1)/d;
        ll g=(c*d)/__gcd(c,d);
        ll divCD=b/g-(a-1)/g;
        cout<<b-a+1-divC-divB+divCD<<'\n';
    }
    return 0;
}
