#include <iostream>
#include <vector>

int main(int argc, char * argv[])
{
    int x=10, y=20, i=0;
    /*
    std::vector<int> v1;
    std::vector<int> * v2 = new std::vector<int>() ;

    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);

    v2->push_back(9);

    //std::cout << "hi";


    
    for (size_t i=0; i<v1.size(); i++)
    {
        std::cout << v1[i] << " ";
    }
    std::cout << std::endl;
    
    //v2 = &v1;

    for (size_t i=0; i< v2->size(); i++)
    {
        std::cout << (* v2)[i]<< " ";
    }
    std::cout << std::endl;

    
    
    
    v1.push_back(4);
    v2.push_back(5);

    for (size_t i=0; i<v1.size(); i++)
    {
        std::cout << v1[i] << " ";
    }
    std::cout << std::endl;


    for (size_t i=0; i<v2.size(); i++)
    {
        std::cout << v2[i] << " ";
    }
    std::cout << std::endl;


    

   */

    
    std::cout << "x = " << x++ << " and y = " << --y << std::endl;
    std::cout << "x = " << x-- << " and y = " << ++y << std::endl;


    for (i=0; i<3; i++)
        std::cout << i << " ";

    std::cout << std::endl;
    
    for (i=0; i<3; ++i)
        std::cout << i;


    return 0;
}