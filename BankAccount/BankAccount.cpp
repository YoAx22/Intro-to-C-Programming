/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BankAccount.cpp
 * Author: cse278
 * Copyright 2020 Yoann-Axel Ahyi
 * Created on March 12, 2021, 3:00 PM
 */
#include<string>
#include "BankAccount.h"
using namespace std;

BankAccount::BankAccount(const string& owner,
        const double balance,
        const std::string& address) {
    this->owner = owner;
    this->balance = balance;
    this->address = address;
}

BankAccount::~BankAccount() {
}

void BankAccount::depositMoney(double money) {
    this->balance += money;
}

void BankAccount::withdrawMoney(double money) {
    this->balance -= money;
}

double BankAccount::getBalance() {
    return balance;
}

void BankAccount::updateAddress(string address) {
    this->address = address;
}

string BankAccount::getAddress() {
    return address;
}

