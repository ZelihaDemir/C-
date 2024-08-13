#include <iostream>

using namespace std;
class Student {
private:
    string name;
    string surname;
    string studentNumber;
    int note1;
    int note2;
    int note3;

public:
    
    Student() : name("merve"), surname("yılmaz"), studentNumber("0987524"), note1(10), note2(10), note3(10) {}

    Student(string n,string sn,string number,int n1,int n2,int n3):name(n),surname(sn),studentNumber(number),note1(n1),note2(n2),note3(n3){}
    
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Surname: " << surname << endl;
        cout << "Student Number: " << studentNumber << endl;
        cout << "Note 1: " << note1 << endl;
        cout << "Note 2: " << note2 << endl;
        cout << "Note 3: " << note3 << endl;
    }

    void displayName() 
    {
        cout << "Name: " << name << endl;
    }

    void displaySurname()
    {
        cout << "Surname: " << surname << endl;
    }

    void displayStudentNumber()
    {
        cout << "Student Number: " << studentNumber << endl;
    }

    void displayNote1() 
    {
        cout << "Note 1: " << note1 << endl;
    }

    void displayNote2()
    {
        cout << "Note 2: " << note2 << endl;
    }

    void displayNote3()
    {
        cout << "Note 3: " << note3 << endl;
    }

    int calculateAverage()
    {
        return (note1 + note2 + note3)/3;
    }

    friend void compare( Student s1,Student s2);
};

void compare( Student s1,Student s2) 
{
     int avg1 = s1.calculateAverage();
     int avg2 = s2.calculateAverage();

    if (avg1 > avg2) {
        cout << "The first student has a higher average." << endl;
    } else if (avg1 < avg2) {
        cout << "The second student has a higher average." << endl;
    } else {
        cout << "Both students have the same average." << endl;
    }
}

int main() {
    Student s1,s2("Zeliha", "Demir", "030721043", 25,48,92);
    s1.display();
    cout << "Average: " << s1.calculateAverage() << endl;
    cout << endl;

    s1.displayName();
    s1.displaySurname();
    s1.displayStudentNumber();
    s1.displayNote1();
    s1.displayNote2();
    s1.displayNote3();
    cout << "Average: " << s1.calculateAverage() << endl;
    cout << endl;

    s2.display();
    cout << "Average: " << s2.calculateAverage() << endl;
    cout << endl;

    s2.displayName();
    s2.displaySurname();
    s2.displayStudentNumber();
    s2.displayNote1();
    s2.displayNote2();
    s2.displayNote3();
    cout << "Average: " << s2.calculateAverage() << endl;
    cout << endl;

    compare(s1, s2);

    return 0;
}
