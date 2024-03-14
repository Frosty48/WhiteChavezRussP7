#include "Card.h"

Card::Card(int n)
{
    iValue = n % 13 + 1;//n remainder 13 plus 
    int iSuit = n / 13;

 
    switch (iSuit) {
    case 0:
        suit = "S"; // Spades
        break;
    case 1:
        suit = "H"; // Hearts
        break;
    case 2:
        suit = "C"; // Clubs
        break;
    case 3:
        suit = "D"; // Diamonds
        break;
    }

    switch (iValue) {//could use if statements just incase the switch doesn't work
    case 1:
        value = "Ace";
        break;
    case 11:
        value = "Jack";
        break;
    case 12:
        value = "Queen";
        break;
    case 13:
        value = "King";
        break;
    default:
        value = to_string(iValue);
        break;
    }
}

void Card::SetIValue(int val)
{
    iValue = val;
}

string Card::GetValue()
{
	return value;//Returns the value given in the Card(){};
}

int Card::GetIValue()
{
    return iValue;
}

string Card::GetSuit()
{
	return suit;
}
