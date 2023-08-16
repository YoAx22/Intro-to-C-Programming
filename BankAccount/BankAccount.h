/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BankAccount.h
 * Author: cse278
 *Copyright 2020  Yoann-Axel Ahyi
 * Created on March 12, 2021, 3:00 PM
 */

#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <string>

class BankAccount {
public:
    BankAccount(const std::string& owner = "",
            const double balance = 0,
            const std::string& address = "");
    BankAccount();
    virtual ~BankAccount();

private:
    std::string owner;
    double balance;
    std::string address;

public:
    void depositMoney(double money);

    void withdrawMoney(double money);

    double getBalance();

    void updateAddress(std::string address);

    std::string getAddress();
};

#endif /* BANKACCOUNT_H */

