#ifndef PLAYER_H
#define PLAYER_H

#include <string>
class Player
{
public:
    std::string m_name;
    int m_age;

    void displayDetails(std::string name,int age);
    Player();

};

#endif // PLAYER_H
