#pragma once
#ifndef HAND_H
#define HAND_H

#include <array>
#include "Card.h"

const int MAX_CARDS = 12;

class Hand {
private:
    int numCards{ 0 };
    array<Card, MAX_CARDS> cards;

public:
    void AddCard(Card c);
    string Show(bool isDealer, bool hideFirstCard);
    bool BlackJack();
    bool Under(int n);
    int BestScore();
    bool MustHit();
    bool Busted();
    void ClearHand();
};
#endif  HAND_H