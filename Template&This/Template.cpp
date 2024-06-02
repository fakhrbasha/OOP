#include<iostream>
using namespace std;
template <class T>
// T abs(T n){
//     return (n<0) ? -n:n;
// };
T Getmax(T a , T b){
    T result;
    result=(a>b)?a:b;
    return result;

};
int main(){
    int i=5 , j=6 , k;
    long l=10 , m= 5 , n;
    k=Getmax<int>(i,j);
    n=Getmax<long>(l,m);
    cout << k <<endl;
    cout << n<<endl;
    // int a=5;
    // int b=-6;
    // long l=70000L;
    // long l2=-80000L;
    // double d=5.23;
    // double d2=-75.2;
    // cout << "\n Abs (""<< int >>"") : " << abs(a);
    // cout << "\n Abs (""<< int >>"") : " << abs(b);
    // cout << "\n Abs (""<< long >>"") : " << abs(l);
    // cout << "\n Abs (""<< long >>"") : " << abs(l2);
    // cout << "\n Abs (""<< double >>"") : " << abs(d);
    // cout << "\n Abs (""<< double >>"") : " << abs(d2);
}