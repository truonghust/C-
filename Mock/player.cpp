#include "player.h"

const string &Player::getName() const
{
    return name;
}

void Player::setName(const string &newName)
{
    name = newName;
}

int Player::getNumberOfWin() const
{
    return numberOfWin;
}

void Player::setNumberOfWin(int newNumberOfWin)
{
    numberOfWin = newNumberOfWin;
}

int Player::getNumberOfDraw() const
{
    return numberOfDraw;
}

void Player::setNumberOfDraw(int newNumberOfDraw)
{
    numberOfDraw = newNumberOfDraw;
}

int Player::getNumberOfDefeat() const
{
    return numberOfDefeat;
}

void Player::setNumberOfDefeat(int newNumberOfDefeat)
{
    numberOfDefeat = newNumberOfDefeat;
}

double Player::winRate()
{
return ((numberOfWin+0.5*numberOfDraw)/(numberOfWin+numberOfDraw+numberOfDefeat));
}

Player::Player()
{

}

Player::Player(string name, int numberOfWin, int numberOfDraw, int numberOfDefeat)
{
    this->name=name;
    this->numberOfWin = numberOfWin;
    this->numberOfDraw = numberOfDraw;
    this->numberOfDefeat = numberOfDefeat;
}

Player::~Player()
{

}
