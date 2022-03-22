#ifndef __ACCOUNT_H
#define __ACCOUNT_H

#include <string>
using namespace std;

class Account{
  string name;
  int id, balance;


  public:
     Account (string n, int id, int b); 
     void deposit(int a);
     int withdraw(int a);
     int inquiry();
     string getOwner();

};

#endif