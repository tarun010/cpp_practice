#include <iostream>
#include <vector>

int main (int argc, char *argv[])
{
    std::vector<int> myVector;
    myVector.push_back(1);
    myVector.push_back(2);
    myVector.push_back(3);
    myVector.push_back(4);
    myVector.push_back(5);
    for (size_t i = 0; i < myVector.size(); i++)
    {
        std::cout << myVector[i] << " ";

    }
    std::cout << std::endl;
    return 0;
}