#include <iostream>

void pp(int &i)
{
    std::cout << &i << " "<< i << sizeof(i) << std::endl;
}

class IntArray
{
    int * m_arr;
    size_t m_size;

public:
    IntArray(size_t size)
        : m_size(size)
        , m_arr (new int[size])
    {
        std::cout << "Array constructor" << std::endl;
    }

    ~IntArray()
    {
        delete[] m_arr;
        std::cout << "Array destructor" << std::endl;
    }

    int get(size_t index) const
    {
        return m_arr[index];
    }

    void set(size_t index, int value)
    {
        m_arr[index] = value;
    }

    void print() const
    {
        for (size_t i = 0; i < m_size; i++)
        {
            std::cout << i << " " << m_arr[i] << std::endl;
        }
    }
};


int main(int argc, char * argv[])
{
    IntArray myArray(10);

    myArray.set(4, 7);
    myArray.set(2, 134);

    myArray.print();

    return 0;
}