#include <iostream>

using namespace std;

struct Vector
{
    int x, y;

    Vector(int x, int y):x(x),y(y)
    {

    }

    Vector add(const Vector& v)const
    {
        return Vector(x+ v.x, y+ v.y);
    }

    Vector operator + (const Vector& v)const 
    {
        return add(v);
    }

    Vector operator * (const Vector& v)const
    {
        return multiply(v);
    }

    Vector multiply(const Vector& v)const
    {
        return Vector(x* v.x, y* v.y);
    }

    bool operator ==(const Vector& v)const
    {
        return x == v.x && v.y;
    }
};


std::ostream& operator<<(std::ostream& stream,const Vector& v)
{
    stream<< v.x<<" , "<<v.y;
    return stream;
}

int main()
{
    Vector position(1,2);
    Vector speed(1, 2);
    Vector powerup(1, 4);

    Vector result = position.add(speed.multiply(powerup));
    Vector result1 = position+speed*powerup; ///  position + (speed * powerup)

    if(result == result1)
    std::cout<<"Both are Equal"<<std::endl;

    std::cout<<result<<std::endl;
    std::cout<<result1<<std::endl;
    return 0;
}
