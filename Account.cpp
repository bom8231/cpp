#include "Account.h"

Account::Account(string n, int i, int b):name(n), id(i), balance(b){}

void Account:: deposit(int d){
 balance += d;

}
int Account:: withdraw(int w){
   if (balance < w) //잔고가 인출하려는 금액보다 작으면
     return 0;
   balance -= w;
   return w;
  
}

int  Account::inquiry(){
  return balance; 
}

string Account:: getOwner(){
  return name;
}