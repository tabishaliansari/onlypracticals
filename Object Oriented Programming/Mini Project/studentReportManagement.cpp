#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Student {
private:
    int rollNumber;
    string name;
    vector<pair<string, float>> subjectMarks; 

public:
    Student() {
        cout << "Enter Roll Number: ";
        cin >> rollNumber;

        cout << "Enter Name: ";
        cin.ignore();
        getline(cin, name);

        vector<string> fixedSubjects = {"Data Structures", "Object-Oriented Programming", "Software Engineering", "Discrete Mathematics and Statistics"};

        for (const auto& subjectName : fixedSubjects) {
            float marks;

            cout << "Enter Marks for " << subjectName << ": ";
            cin >> marks;

            subjectMarks.push_back({subjectName, marks});
        }

        string optionalSubject;
        cout << "Choose an optional subject (python-nptel/digital-forensics-nptel): ";
        cin>>optionalSubject;

        float optionalSubjectMarks;
        cout << "Enter Marks for " << optionalSubject << ": ";
        cin >> optionalSubjectMarks;

        subjectMarks.push_back({optionalSubject, optionalSubjectMarks});
    }

    void displayDetails() const {
        cout << "Roll Number: " << rollNumber << "\nName: " << name << "\nSubject Marks:\n";
        for (const auto& subject : subjectMarks) {
            cout << subject.first << ": " << subject.second << endl;
        }
    }

    int getRollNumber() const {
        return rollNumber;
    }

    const vector<pair<string, float>>& getSubjectMarks() const {
        return subjectMarks;
    }
};

class SubjectReport : public Student {
public:
    SubjectReport() : Student() {}

    float calculateFinalScorePercentage() const {
        float totalMarks = 0.0;
        for (const auto& subject : getSubjectMarks()) {
            totalMarks += subject.second;
        }

        return (totalMarks / (getSubjectMarks().size() * 100.0)) * 100.0;
    }

    float calculateCGPA() const {
        float totalPoints = 0.0;
        for (const auto& subject : getSubjectMarks()) {
            totalPoints += (subject.second / 10.0);
        }

        return totalPoints / getSubjectMarks().size();
    }

    char calculateOverallGrade() const {
        float percentage = calculateFinalScorePercentage();
        if (percentage >= 0.0) {
            if (percentage >= 90.0) {
                return 'A';
            } else if (percentage >= 80.0) {
                return 'B';
            } else if (percentage >= 70.0) {
                return 'C';
            } else {
                return 'F';
            }
        } else {
            return 'N';
        }
    }

    bool isHonorRoll() const {
        float cgpa = calculateCGPA();
        return cgpa >= 6.5;
    }

    void displayMessage() const {
        char grade = calculateOverallGrade();
        if (grade == 'A') {
            cout << "Congratulations! You've excelled in your studies.\n";
        } else if (grade == 'F') {
            cout << "You need to work hard to improve your grades.\n";
        } else {
            cout << "Keep up the good work!\n";
        }
    }

    void displayReport() const {
        displayDetails();
        cout << "-----------------\n";

        float finalScorePercentage = calculateFinalScorePercentage();
        if (finalScorePercentage >= 0.0) {
            cout << "Final Score Percentage: " << finalScorePercentage << "%" << endl;
            cout << "CGPA: " << calculateCGPA() << endl;
            cout << "Overall Grade: " << calculateOverallGrade() << endl;
            if (isHonorRoll()) {
                cout << "Honor Roll Status: Yes\n";
            } else {
                cout << "Honor Roll Status: No\n";
            }
            displayMessage();
        } else {
            cout << "Final score percentage calculation failed. Unable to display additional information.\n";
        }
    }
};

int main() {
    char addAnother;
    int studentCount = 0;
    vector<SubjectReport> students;

    do {
        cout << "Add Student " << studentCount+1 << " Details:-"<<endl;
        SubjectReport student;
        students.push_back(student); 

        studentCount++;
        cout<<"\nDo you want to add another student's details? (y/n): ";
        cin >> addAnother;

    } while (addAnother == 'y' || addAnother == 'Y');

    for (const auto& student : students) {
        student.displayReport();
        cout << "-----------------\n";
    }

    return 0;
}
