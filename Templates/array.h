#ifndef ARRAY_H
#define ARRAY_H

template <typename T>
class Array
{
private:
    T m_A;
public:
    Array();
    ~Array();

    T getArray();
    void setArray(T value);
};

#endif // ARRAY_H
