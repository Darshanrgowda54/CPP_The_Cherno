#ifndef ENTITY_H
#define ENTITY_H

class Entity
{
public:
    Entity();
    ~Entity();

    void printC(int newC);
    int m_c;

    int getB();
    void setB(int newB);

    int getA();
    void setA(int newA);

protected:
    int m_b;
private:
    int m_a;
};

#endif // ENTITY_H
