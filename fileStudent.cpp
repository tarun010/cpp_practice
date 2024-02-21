#include <iostream>
#include <string>
#include <vector>
#include <fstream>

class Student
{
    std::string m_firstName = "First";
    std::string m_lastName = "Last";
    int m_id = 0;
    float m_avg = 0;

public:
    Student() {}

    Student(std::string firstName, std::string lastName, int id, float avg)
        : m_firstName(firstName)
        , m_lastName(lastName)
        , m_id(id)
        , m_avg(avg)
    {
    
    }

    int getAvg() const
    {
        return m_avg;
    }

    int getId() const
    {
        return m_id;
    }

    std::string getFirstName()
    {
        return m_firstName;
    }

    std::string getLastName() const
    {
        return m_lastName;
    }

    void print() const
    {
        std::cout << m_firstName << " " << m_lastName << " " << m_id << " " << m_avg << std::endl;
    }
    
};


class Course
{
    std::string m_name = "Course";
    std::vector<Student> m_student;

public:
    Course() {}
    Course(const std::string& name)
        : m_name(name)
    {
    }

    void addStudent(const Student& s)
    {
        m_student.push_back(s);
    }

    const std::vector<Student>& getStudent() const
    {
        return m_student;
    }

    void loadFromFile(const std::string& fileName)
    {
        std::ifstream fin(fileName);
        std::string temp;

        while (fin >> temp)
        {
            std::cout << temp << std::endl;
        }
    }


    void print() const
    {
        for (auto& s : m_student)
        {
            s.print();
        }
    }
};

int main (int argc, char *argv[])
{
    Course c("COMP 4444");
    c.loadFromFile("students.txt");
    c.print();
    return 0;
}
