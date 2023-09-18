#include <iostream>

class Entity
{
private:
    mutable float X, Y;

public:
    Entity() = delete;

    Entity(float x, float y) : X(x), Y(y) {}

    virtual void Move(float ax, float ay, float speed)
    {
        X += (speed * ax);
        Y += (speed * ay);
    }
};

int main()
{
    Entity e(9.03f, 02.3f);
    e.Move(92.2f, 3.23f, 32.03f);

    std::cout << "Hello Git hub" << std::endl;
}