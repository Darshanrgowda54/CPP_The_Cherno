#include "player.h"
#include <iostream>
#include <ostream>

Player::Player() {}


void Player::displayDetails(std::string name, int age)
{
    this->m_name = name;
    this->m_age = age;
    std::cout<<m_name <<"  "<<m_age <<std::endl;
}
