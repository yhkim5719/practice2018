#include <vector>
#include <iostream>

using namespace std;

class Student{
private:
  //member variables;
  string name;
  char grade;
  
public:
  //default constructors
  Student();

  //Overload constructors
  Student(string, char);

  //Destructor
  ~Student();

  //Accessor Functions
  string getName() const;
  //getName
  //@return string - name of student

  char getGrade() const;
  //getGrade
  //@return char - grade of student

  //Mutator Functions
  void setName(string);
  //setName
  //@param string - name of student

  void setGrade(char);
  //setGrade
  //@param char - grade of student
};

Student::Student(){
  grade = ' ';
}

Student::Student(string student_name, char student_grade){
  name = student_name;
  grade = student_grade;
}

Student::~Student(){
}

string Student::getName() const{
  return name;
}

char Student::getGrade() const{
  return grade;
}

void Student::setName(string student_name){
  name = student_name;
}

void Student::setGrade(char student_grade){
  grade = student_grade;
}

void fillVector(vector<Student>&);
// fillVector - fill in student information
// @param vector<Student>& - students in class

void printVector(const vector<Student>&);
// printVector - prints the information of all students
// @param const vector<Student>& - students in class

int main(){

  vector<Student> myClass;

  fillVector(myClass);
  printVector(myClass);

  return 0;
}

void fillVector(vector<Student>& newMyClass){

  string name;
  char grade;

  cout << "How many students are in your class? ";
  int classSize;
  cin >> classSize;

  for (int i = 0; i < classSize; i++){
    cout << "Enter Student Name: ";
    cin >> name;
    cout << "Enter Student Grade: ";
    cin >> grade;

    Student newStudent(name, grade);
    newMyClass.push_back(newStudent);
    cout << endl;
  }
  cout << endl;
}

void printVector(const vector<Student>& newMyClass){

  unsigned int size = newMyClass.size();
  
  for (unsigned int i = 0; i < size; i++){
    cout << "Student Name: " << newMyClass[i].getName() << endl;
    cout << "Student Grade: " << newMyClass[i].getGrade() << endl;
    cout << endl;
  }
}
