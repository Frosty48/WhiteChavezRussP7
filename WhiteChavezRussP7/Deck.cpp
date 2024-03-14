#include "Deck.h"
#include <random>
#include <chrono>
#include <algorithm>


// Constructor to initialize the deck and shuffle it
Deck::Deck(): topCard(0), engine(chrono::system_clock::now().time_since_epoch().count()) {
    for (int i = 0; i < 52; ++i) {// Initialize cards with the indices representing each card in a deck
        cards[i] = i;
    }
    Shuffle();
}

void Deck::Shuffle()
{
    // Swap the current card with a randomly selected card
    for (int i = 0; i < 52; ++i) {
        int randomIndex = RandomCard();
        swap(cards[i], cards[randomIndex]);
    }
}

//Generates random card indexs
int Deck::RandomCard()
{
    uniform_int_distribution<int> dist(0, 51);
    return dist(engine);
}


//Deal a card from the deck
void Deck::Deal(Card& c)
{
    c = Card(cards[topCard]);// Creates a new card with the index of the top card
    topCard++;


    // If more than half of the deck has been dealt, shuffle the deck
    if (topCard > 34) {
        Shuffle();
        topCard = 0;
    }
}
