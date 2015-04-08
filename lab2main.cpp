#include<iostream>
#include<string>
#include<fstream>
#include<cstdlib>
#include"lab2.h"
using namespace std;

int main(){
  lab2 lab2;
  float m,h,bmi;
  string a;
  ifstream opr("file.in",ios::in);
  if(!opr){
    cerr<<"Failed opening file.in"<<endl;
    exit(1);
  }
  ofstream opw("file.out",ios::out);
  if(!opw){
    cerr<<"Failed open file.out"<<endl;
    exit(1);
  }

  opw<<"height"<<"\t"<<"weight"<<"\t"<<"bmi"<<"\t"<<endl;
  while(opr>>h>>m){
    bmi=m/((h/100)*(h/100));
    opw<<h<<"\t"<<m<<"\t"<<bmi<<"\t";
    lab2.check(bmi,a);
    opw<<a<<endl;
  }
}
