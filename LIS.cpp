#include <bits/stdc++.h>
#define maxn 10005
using namespace std;
int maxx=-999999,a[maxn],n,f[maxn],ma;
int main()//day con tang dai nhat
{
    //O(n^2)
    /*cin >> n;
    for(int i=1;i<=n;i++) cin >> a[i];
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(a[j]<a[i])
            {
                f[i]=f[j]+1;
                maxx=max(f[i],maxx);
            }
        }
        //maxx=max(f[i],maxx);
    }
    cout << maxx;*/
    //O(n.log(n))
    cin >> n;
    for(int i=1;i<=n;i++) cin >> a[i];
    for(int i=1;i<=n;i++)
    {
        int j=lower_bound(f+1,f+ma+1,a[i])-f-1;
        f[j+1]=a[i];
        ma=max(ma,j+1);
    }
    cout << ma;
    return 0;
}
