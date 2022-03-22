#ifndef __ACCOUNT_H
#define __ACCOUNT_H

#include <string>
using namespace std;

class Account{
  int id, balance;
  string name;

  public:
     Account (string name, int id, int balance); 
     void deposit(int amount);
     void withdraw(int amount);
     int inquiry();
     string getOwner();

};

#endif