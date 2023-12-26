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
int a[100002],aa[100002];

void merge_sort(int l,int r){
    if(l>=r)return;
    int mid=(l+r)/2;
    merge_sort(l,mid);
    merge_sort(mid+1,r);
    int la=l,ra=mid+1;
    for(int i=l;i<=r;i++){
        if(la>mid)aa[i]=a[ra++];
        else if(ra>r)aa[i]=a[la++];
        else if(a[la]<=a[ra])aa[i]=a[la++];
        else aa[i]=a[ra++];
    }
    for(int i=l;i<=r;i++)a[i]=aa[i];

}

int main()
{
    SPEED();
    int t = 1;
    //cin >> t;
    //int T=0;
    while (t--)
    {   
        int l=0;
        int x;
        while(cin>>x){
            a[l++]=x;
        }
        merge_sort(0,l-1);
        for(int i=0;i<l;i++)cout<<a[i]<<' ';
        cout<<'\n';
    }
    return 0;
}
