#include<iostream>
#include "../../Headers/variabless.h"

using namespace std;

void hospital(int why){
  if(why==0){
    cout<<"\nWelcome to Whoosh Center!\nWe have restored your health to full.\nWe hope to see you again!";
  }
  else if(why==1){
    cout<<"\nYou were defeated. Your health has been fully restored.\nBetter luck next time!";
  }
  healthy=hp[0];
}
