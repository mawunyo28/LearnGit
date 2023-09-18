#include <iostream>

class Entity
{
private:
    mutable float X, Y;

public:
    Entity() = delete;

    Entity(float x, float y) : X(x), Y(y) {}

    virtual void Move(int ax, int ay)
    {
        X += ax;
        Y += ay;
    }
};

int main()
{
    std::cout << "Hello Git hub" << std::endl;
}