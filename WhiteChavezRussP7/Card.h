#pragma once
#ifndef CARD_H
#define CARD_H

#include <string>
using namespace std;

class Card {
private:
    int iValue;
    string value;
    string suit;

public:
    Card(int n);
    void SetIValue(int val);
    string GetValue();
    int GetIValue();
    string GetSuit();
};

#endif // CARD_H