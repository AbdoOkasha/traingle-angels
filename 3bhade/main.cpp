/*
Name : AbdulRahman Mohamed Hassan
ID : 20170150
Group : 1
Name : Mohamed Mostafa awad
ID : 20170257
Group : 10
*/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

#define pi 3.1415926535897


double toRadians(double angdeg)
{
    return angdeg / 180.0 * pi;
}
double sin(double x){
    double su=0;
    bool b=0;
    while(x>=360) x-=360;
    if(x==180){su=0; return su;}
    else if(x==360){su=0; return su;}
    else if(x==90){su=1; return su;}
    else if(x==270){su=-1; return su;}
    if (x>180) b=1;
    while (x>90) x-=90;

    x=toRadians(x);
    double y=x,z=1;
    for(int i=1;i<10;i++){
        y*=-x*x;
        z*=((2*i)*(2*i+1));
        su +=(y/z);
    }
    if (b) su*=-1;
    return (x+su);
}

double cos ( double x )
{
    double su=0 ;
    bool b=0;
    while(x>=360) x-=360;
    if(x==180){su=-1; return su;}
    if(x==360){su=1; return su;}
    else if(x==90){su=0; return su;}
    else if(x==270){su=0; return su;}
    if (x<180 && x>90 || x>270)  b=1;
    while (x>90) x-=90;

    x=toRadians(x);
    double y=1,z=1;
    for(int i=1;i<10;i++){
        y*=-x*x;
        z*=((2*i-1)*(2*i));
        su +=(y/z);
    }
    if (b) su*=-1;
    return (1+su);
}

double tan ( double x )
{
    return sin(x)/cos(x);
}


long double arctan ( double x )
{
    x=toRadians(x);
    double y=x,z=1,su=0;
    for (int i=0;i<10;i++){
        y*=-x*x;
        z+=2;
        su+=y/z;
    }
    return (x+su);
}

double e(long double x){
    double ee=0,y=1,z=1;
    for(int i=0;i<20;i++){
        y*=x;
        z*=(i+1);
        ee+=(y/z);
    }
    return (1+ee);

}

long double ln(long double x){
    x=toRadians(x);
    double y=(x),z=1,su=0;
    for (int i=2;i<20;i++){
        y*=-x;
        z*=i;
        su+=(y/z);
    }
return (x+su);
}

long double log(long long x  ){
    long double su=0;
su=ln(x)/ln(10);
return su ;
}



int main(){
    long long a;
    double re;
    char ch;
    bool b=1;
    while (b){
        cout <<"1-sin \n2-cos \n3-tan \n4-arctan \n5-ln \n6-log \n7-e \ne-exit \n";
        cout<<"enter the function number : ";
        cin>>ch;
        if (ch == 'e') break;
        cout<<"enter the number : ";
        cin>>a;
        if(ch=='1'){
            re=sin(a);
            cout<<"re= "<<re<<endl;
        }
        else if(ch=='2'){
            re=cos(a);
            cout<<"re= "<<re<<endl;
        }
        else if (ch=='3'){
            re=tan(a);
            cout<<"re= "<<re<<endl;
        }

        else if (ch=='4'){
            re=arctan(a);
            cout<<"re= "<<re<<endl;
        }

        else if (ch== '5'){
            re=ln(a);
            cout<<"re= "<<re<<endl;
        }
        else if (ch== '6'){
            re=log(a);
            cout<<"re= "<<re<<endl;
        }
        else if (ch== '7'){
            re=e(a);
            cout<<"re= "<<re<<endl;
        }
        cout <<endl;
    }
}
