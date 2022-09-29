#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>  
#include <complex>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <chrono>
#include <random>
#include <iostream>
#include <algorithm>
#define trace1(x) cerr<<#x<<x<<endl
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <fstream>
 
using namespace std;
 
#define all(x) (x).begin(),(x).end()
#define int long long int
#define pb push_back
#define ppb pop_back
#define pf push_front
#define ppf pop_front
#define F first
#define S second
#define inf 1e18
#define vi vector<int>
#define Point complex<int>
#define X real()
#define Y imag()
#define pii pair<int,int>
#define num0Beg(x) __builtin_clz(x) // no. of zero in beginning of bit representation
#define num0end(x) __builtin_ctz(x) // no. of zero in the end
#define numOf1(x) __builtin_popcount(x) // no. of ones in bit rep.
#define parity(x) __builtin_parity(x) // parity of 1
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 

int32_t main()
{
    FAST
    int tt=1;
    while(tt)
    {         
      int h,u,d,f;
      cin>>h>>u>>d>>f;
      if(h==0 && u==0 && d==0 && f==0)
        break;
      double hh=h,uu=u,dd=d,ff=f,rs=0;
      ff/=100;
      int fl=0,day=1;
      while(fl==0)
      {
        if(uu>0)
          rs+=uu;
        uu-=ff*u;
        if(rs>hh)
        {
          cout<<"success on day "<<day<<"\n";
          fl=1;
          break;  
        }
        rs-=dd;
        if(rs<0)
        {
          cout<<"failure on day "<<day<<"\n";
          fl=1;
          break;  
        }
        day++;
      }       
    }
    return 0;
}
