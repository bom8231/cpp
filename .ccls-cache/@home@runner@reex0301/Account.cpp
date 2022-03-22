#include "Account.h"

Account::Account(string n, int idn, int b){

 name = n;
 id = idn;
 balance = b;

}

void Account:: deposit(int a){



}
void Account:: withdraw(int a){}


int  Account::inquiry(){
  return balance; 
}

string Account:: getOwner(){
  return name;
}