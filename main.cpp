#include <iostream>
#include <string>

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

    virtual void GetPos() const
    {
        std::cout << "X = " << X << "\n" << "Y = " << Y << std::endl;
    }
};

int main()
{
    Entity e(9.03f, 02.3f);
    e.Move(92.2f, 3.23f, 32.03f);

    e.GetPos();
    
}