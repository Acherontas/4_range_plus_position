#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
    long double a;
    long double b;
    long double c;
    long double d;
    long double rst_one;
    long double rst_two;
    int pos;
    int preci;
    cout<<"enter a number\n";
    cin>>a;
    cout<<"enter a position of that number between 1 to 4\n";
    cin>>pos;
    cout<<"enter precision\n";
    cin>>preci;
    if (pos==1){
        b=a+1;
        c=b+1;
        d=c+1;

    }
    if(pos==2){
        b=a;
        a=b-1;
        c=b+1;
        d=c+1;

    }
    if(pos==3){
        c=a;
        b=c-1;
        a=b-1;
        d=c+1;
    }

    if(pos==4){
        d=a;
        c=d-1;
        b=c-1;
        a=b-1;
    }

        rst_one=a+d;
        rst_two=b+c;
        cout<<std::setprecision(preci)<<a<<"\n";
        cout<<std::setprecision(preci)<<b<<"\n";
        cout<<std::setprecision(preci)<<c<<"\n";
        cout<<std::setprecision(preci)<<d<<"\n";
        cout<<std::setprecision(preci)<<a << " + " <<std::setprecision(preci)<< d << " = "<<std::setprecision(preci)<< rst_one <<"\n";
        cout<<std::setprecision(preci)<<b << " + " <<std::setprecision(preci)<< c << " = "<<std::setprecision(preci)<< rst_two <<"\n";
    return 0;
}
