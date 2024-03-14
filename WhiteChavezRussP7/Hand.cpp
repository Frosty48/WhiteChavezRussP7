#include "Hand.h"

void Hand::AddCard(Card c)
{
    if (numCards < MAX_CARDS) {
        cards[numCards++] = c;
    }
}

string Hand::Show(bool isDealer, bool hideFirstCard)
{
    string handString;
    if (isDealer && hideFirstCard) {
        handString = "Hidden, " + cards[1].GetValue() + " of " + cards[1].GetSuit();
    }
    else {
        for (int i = 0; i < numCards; ++i) {
            handString += cards[i].GetValue() + " of " + cards[i].GetSuit() + ", ";
        }
    }
    return handString;
}

bool Hand::BlackJack()
{
    if (numCards == 2) {
        int totalValue = 0;
        for (int i = 0; i < numCards; ++i) {
            totalValue += cards[i].GetIValue();
        }
        return totalValue == 21;
    }
    return false;
}

bool Hand::Under(int n)
{
    int totalValue = 0;
    for (int i = 0; i < numCards; ++i) {
        totalValue += cards[i].GetIValue();
    }
    return totalValue < n;
}

int Hand::BestScore()
{
    int score = 0;
    int numAces = 0;
    for (int i = 0; i < numCards; ++i) {
        score += cards[i].GetIValue();
        if (cards[i].GetIValue() == 1) {
            numAces++;
        }
    }
    while (score <= 11 && numAces > 0) {
        score += 10; // Using Ace as 11
        numAces--;
    }
    return score;
}

bool Hand::MustHit()
{
	return BestScore() < 17;
}

bool Hand::Busted()
{
	return BestScore() > 21;
}

void Hand::ClearHand()
{
	numCards = 0;
}
