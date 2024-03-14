#pragma once
#ifndef DECK_H
#define DECK_H

#include <array>
#include "Card.h"
#include <random>//

class Deck {
private:
    array<int, 52> cards;
    int topCard;
    default_random_engine engine;

public:
    Deck();
    void Shuffle();
    int RandomCard();
    void Deal(Card& c);
};

#endif // DECK_H