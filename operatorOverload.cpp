#include <iostream>

void pp(int &i)
{
    std::cout << &i << " "<< i << sizeof(i) << std::endl;
}

template <typename T>
class DynamicArray
{
    T * m_arr;
    size_t m_size;

public:
    DynamicArray(size_t size)
        : m_size(size)
        , m_arr (new T[size])
    {
        std::cout << "Array constructor" << std::endl;
    }

    ~DynamicArray()
    {
        delete[] m_arr;
        std::cout << "Array destructor" << std::endl;
    }

    T get(size_t index) const
    {
        return m_arr[index];
    }

    void set(size_t index, T value)
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


    const T &operator [](size_t index) const
    {
        return m_arr[index];
    }

    T &operator [](size_t index)
    {
        return m_arr[index];
    }
};


int main(int argc, char * argv[])
{
    DynamicArray <float> myArray(10);

    myArray[3] = 3.14159;
    
    std::cout << myArray[3] << std::endl;

    //myArray.print();

    return 0;
}