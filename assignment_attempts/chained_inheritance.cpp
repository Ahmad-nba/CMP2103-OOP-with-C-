#include <iostream>
using namespace std;

class  Student {
    private: 
        string name;
        int age;
        string registrationNumber;

    public: 
        Student(string name, int age, string registrationNumber)
        :name(name), age(age), registrationNumber(registrationNumber) {}

        string getName() {
            return name;
        }

        int getAge() {
            return age;
        }

        string getRegistrationNumber() {
            return registrationNumber;
        }   


};

class GraduateStudent : public Student {
    private:
        string researchTopic;

    public:
        GraduateStudent(string name, int age, string registrationNumber, string researchTopic)
        : Student(name, age, registrationNumber), researchTopic(researchTopic) {}

        string getResearchTopic() {
            return researchTopic;
        }
};

class UndergraduateStudent : public Student {
    private:
        string major;

    public:
        UndergraduateStudent(string name, int age, string registrationNumber, string major)
        : Student(name, age, registrationNumber), major(major) {}

        string getMajor() {
            return major;
        }
};

int main() {
    GraduateStudent gradStudent("Alice", 25, "G12345", "Artificial Intelligence");
    UndergraduateStudent undergradStudent("Bob", 20, "U67890", "Computer Science");

    cout << "Graduate Student: " << gradStudent.getName() << ", Age: " << gradStudent.getAge()
         << ", Registration Number: " << gradStudent.getRegistrationNumber()
         << ", Research Topic: " << gradStudent.getResearchTopic() << endl;

    cout << "Undergraduate Student: " << undergradStudent.getName() << ", Age: " << undergradStudent.getAge()
         << ", Registration Number: " << undergradStudent.getRegistrationNumber()
         << ", Major: " << undergradStudent.getMajor() << endl;

    return 0;
}