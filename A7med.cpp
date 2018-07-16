#include <bits/stdc++.h>
using namespace std;

typedef unsigned int ui ;
typedef unsigned long int ul ;
typedef long long int ll ;
typedef unsigned long long int ull ;
typedef complex<double> point ;

#define endl '\n'
#define floop(i,q,w) 	for(int (i)=int(q) ; (i) < (int)(w) ; ++(i) )
#define itloop(i,v)     for( i = begin(v) ; i != end(v) ; ++i)
#define itrange(v)		begin(v),end(v)
/**** Geometry ****/
#define X real()
#define Y imag()
#define Polar (r,t)		((r)*exp(point(0,(t))))
#define Length(a)		hypot((a).X,(a).Y)
#define Angle(a)		aton2((a).Y,(a).X)
#define Vec(a,b)		((b)-(a))
#define DotProd(a,b)	((conj(a)*(b)).real())
#define CrossProd(a,b)	((conj(a)*(b)).imag())
#define LengthSqr(a)	DotProd(a,a)
#define Rotate(v,t)		((v)*exp(point(0,t)))
#define RotateAbout(v,t,a)	(Rotate(Vec(a,v),t)+(a))
#define Reflect(v,m)	(conj((v)/(m))*(m))

const int OO = (int) 1e9;
const double PI = 2 * acos(0.0);
const double eps = 1e-9;

/***    Short = 3e4 , Integer = 2e9 , Long = 9e18 ***/

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r" , stdin);
	//freopen("output.txt", "w", stdout);
#endif

	#TODO

	return 0;
}
