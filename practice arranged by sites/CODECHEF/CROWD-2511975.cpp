#include<iostream>
#include<time.h>
#include<cstdio>
using namespace std;
#define mod 1000000007
long long int calc(long long int n)
{
if(n<=1) return 2;
if(n%2==1)
{
unsigned long long int k=calc(n/2)%mod;
return ((k*k)%mod*2)%mod;
}
else
{
unsigned long long int k=calc(n/2)%mod;
return (k*k)%mod;
}
}
void mul(unsigned long long a[3][3], unsigned long long b[3][3])
{
unsigned long long int c[3][3];
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
{
c[i][j]=0;
for(int k=0;k<3;k++)
{
c[i][j]+=(a[i][k]*b[k][j])%mod;
}
}
}
int i,j;
for(i=0;i<3;i++)
for(j=0;j<3;j++)
a[i][j]=c[i][j];
}
 
void multiply(unsigned long long F[3][3],unsigned long long int a)
{
if(a==0 || a==1)return;
unsigned long long temp[3][3]={{1,1,1},{1,0,0},{0,1,0}};
multiply(F,a/2);
mul(F,F);
if(a%2!=0)
mul(F,temp);
}
unsigned long long trib(unsigned long long n)
{
unsigned long long int F[3][3] = {{1,1,1},{1,0,0},{0,1,0}};
if(n == 0)
return 0;
multiply(F, n-1);
return F[0][0]%mod;
}
int main()
{
int test,i,j,k;
long long int n;
int F[3][3];
scanf("%d",&test);
while(test--)
{
scanf("%lld",&n);
unsigned long long int m=trib(n+2);
//cout<<m<<endl;
unsigned long long int s=calc(n);
if(m>s)
cout<<(s+mod-m)%mod<<endl;
else cout<<s-m<<endl;
}
}