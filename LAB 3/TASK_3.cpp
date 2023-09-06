#include<iostream>
#include<string>
#include<vector>
using namespace std;

struct study
{
    string course;
    float obatined_marks;
    float grade_point;


};

class student
{
private:
    string firstName;
    string lastName;
    string id;
    string birth_yr;
    vector<study>v;
    int total_std;
    float total;
    float avg;
    int index;
    bool graduation_status;
    bool scholarship_status;
    bool internship_status;
    int getIndex(string s)
    {
        for(int i=0; i<v.size(); i++)
        {
            if(v[i].course==s)
            {
                return i;
            }
        }
        return -1;
    }

public:
    student(string fn, string ln):firstName(fn),lastName(ln)
    {

    }
    void enrollInCourses(string courseName)
    {
        study k;
        k.course=courseName;
        k.obatined_marks=0;
        v.push_back(k);
    }
    void obtainedMarks(string courseName, float marks)
    {
        index=getIndex(courseName);
        if(index!=-1)
        {
            study k=v[index];
            k.obatined_marks=marks;


        }
        else
        {
            cout<<"COURSE NOT FOUND "<<endl;
        }

    }
    float getGradePointForEachCourse(string courseName)
    {
        index=getIndex(courseName);
        if(index!=-1)
        {
            study k=v[index];
            if(k.obatined_marks>=80)
            {
                k.grade_point=4.0;
            }
            else  if(k.obatined_marks>=70)
            {
                k.grade_point=3.0;
            }

            else if(k.obatined_marks>=60)
            {
                k.grade_point=1.0;
            }
            else
            {
                k.grade_point=0;
            }
            return k.grade_point;

        }
        return -1;

    }

    float displayAverageGradePoint()
    {
        for(int i=0; i<v.size(); i++)
        {
            total=total+v[i].grade_point;
        }
        avg=total/v.size();
        return  avg;

    }
    void willGraduate()
    {
        for(int i=0; i<v.size(); i++)
        {
            if(v[i].grade_point==0)
            {
                cout<<"WILL NOT GRADUATE"<<endl;
                graduation_status=false;
                return;
            }
        }
        cout<<"WILL GRADUATE"<<endl;
        graduation_status=true;

    }
    void applyForScholarship()
    {
        if(avg>3.8)
        {
            cout<<"APPLY FOR SCHOLARSHIP"<<endl;
            scholarship_status=true;
        }
        else
        {
            cout<<"Can not APPLY FOR SCHOLARSHIP"<<endl;
            scholarship_status=false;
        }

    }
    void participateInInternship(string courseName, string company)
    {
        if(avg>3.0)
        {
            index=getIndex(courseName);
                  if(index!=-1)
            {
                cout<<"SHE CAN DO INTERNSHIP AT Y COMPANY"<<endl;
            }
            internship_status=true;
        }
        else
        {
            cout<<"NOT POSSIBLE "<<endl;
            internship_status=false;
        }

    }
    ~student()
    {
        cout<<"FIRST NAME :"<<firstName<<endl;
        cout<<"LAST NAME :"<<lastName<<endl;
        cout<<"ID :"<<id<<endl;
        cout<<"Birth YEAR :"<<birth_yr<<endl;
        cout<<"GRADUATION STATUS :"<<graduation_status<<endl;
        cout<<"INTERNSHIP STATUS :"<<internship_status<<endl;
        cout<<"SCHOLARSHIP STATUS :"<<scholarship_status<<endl;
        cout<<"COURSES :"<<endl;
        for(int i=0; i<v.size(); i++)
        {
            cout<<v[i].course<<endl;
        }

    }


};


int main() {

    student student1("John", "Doe");
    student student2("Alice", "Smith");
    student student3("Bob", "Johnson");

    // Enroll students in courses
    student1.enrollInCourses("Math");
    student1.enrollInCourses("Physics");
    student1.enrollInCourses("Chemistry");

    student2.enrollInCourses("History");
    student2.enrollInCourses("Literature");

    student3.enrollInCourses("Computer Science");
    student3.enrollInCourses("English");

    // Set obtained marks for students
    student1.obtainedMarks("Math", 85);
    student1.obtainedMarks("Physics", 75);
    student1.obtainedMarks("Chemistry", 60);

    student2.obtainedMarks("History", 92);
    student2.obtainedMarks("Literature", 78);

    student3.obtainedMarks("Computer Science", 92);
    student3.obtainedMarks("English", 85);

    // Calculate and display the grade point for a course
    float gradePoint1 = student1.getGradePointForEachCourse("Math");
    cout << "Grade Point for Math: " << gradePoint1 << endl;

    // Calculate and display the average grade point for a student
    float averageGradePoint1 = student1.displayAverageGradePoint();
    cout << "Average Grade Point for John Doe: " << averageGradePoint1 << endl;

    // Check graduation status
    student1.willGraduate();

    // Apply for scholarships
    student2.applyForScholarship();
    student3.applyForScholarship();

    // Participate in internships
    student1.participateInInternship("Math", "Company X");
    student2.participateInInternship("History", "Company Y");
    student3.participateInInternship("Computer Science", "Company Z");



    return 0;
}

