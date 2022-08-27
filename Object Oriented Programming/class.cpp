#include <iostream>
class HelloWorld
{
public:
    void sayHello()
    {
        std::cout << "Hello World!" << std::endl;
    }
};
int main()
{
    HelloWorld hw;
    hw.sayHello();
    return 0;
}