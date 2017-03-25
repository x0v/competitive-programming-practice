#include <iostream>
#include <math.h>

using namespace std;

int main()
{
int cases;
cin>>cases;

while(cases--)
{
double a1,a2,a3,a4,a5,a6;
cin>>a1>>a2>>a3>>a4>>a5>>a6;

double cosa=((a3*a3)+(a5*a5)-(a1*a1))/(2*a3*a5);
double cosb=((a5*a5)+(a6*a6)-(a4*a4))/(2*a5*a6);
double cosc=((a6*a6)+(a3*a3)-(a2*a2))/(2*a6*a3);

double sq=sqrt(1+2*cosa*cosb*cosc-(cosa*cosa)-(cosb*cosb)-(cosc*cosc));
double vol= (a3*a5*a6*sq)/6;

double s1=(a1+a2+a4)/2;
double area1=sqrt(s1*(s1-a1)*(s1-a2)*(s1-a4));

double s2=(a5+a6+a4)/2;
double area2=sqrt(s2*(s2-a4)*(s2-a5)*(s2-a6));

double s3=(a6+a2+a3)/2;
double area3=sqrt(s3*(s3-a6)*(s3-a2)*(s3-a3));

double s4=(a1+a3+a5)/2;
double area4=sqrt(s4*(s4-a1)*(s4-a3)*(s4-a5));

double totarea=area1+area2+area3+area4;

double ans=3*vol/totarea;

printf("%.4f\n",ans);

}

//system("PAUSE");

return 0;
}
