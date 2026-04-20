#include<iostream>
#include<iomanip>
#include<cstdio>
using namespace std;
int main(){
const double PI = 3.14159;
double r;
cin >> r ;
//if not add fixed 4 valid numbers;
// cout<< "A=" << fixed << setprecision(4) << PI*r*r<<endl;
printf("A=%.4lf\n", PI*r*r);
return 0;


}