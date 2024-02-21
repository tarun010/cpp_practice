#include <iostream>

int main (int main, char** argv)
{
    int *p = new int[3];
    p[0] = 5;
    p[1] = 10;
    *(p+2) = 20;

    int n = 2;

    

    std::cout<< n[p] << p[n] <<std::endl;
}