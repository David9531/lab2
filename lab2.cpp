#include<iostream>
#include<string>
#include<fstream>
#include<cstdlib>
#include"lab2.h"
using namespace std;

void lab2::check(float bmi, string &b){
  if(bmi<15)
    b="Very severely underweight";
  else if(bmi>15 && bmi<=16)
    b="Severely underweight";
  else if(bmi>16 && bmi<=18.5)
    b="Underweight";
  else if(bmi>18.5 && bmi<=25)
    b="Normal";
  else if(bmi>25 && bmi<=30)
    b="Overweight";
  else if(bmi>30 && bmi<=35)
    b="Obese Class I(Moderately obese)";
  else if(bmi>35 && bmi<=40)
    b="Obese class II(Severely obese)";
  else if(bmi>40)
    b="Obese Class III(Very severely obese)";
  else
    b="No data";
}
