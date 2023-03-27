#include <iostream>
#include <sstream>

using namespace std;
class Student{
  private:
    int age, standard;
    string firstname ,lastname;
  public:
  void set_age(int ag){
      age = ag;
  }
    void set_standard(int st){
      standard = st;
  }
    void set_first_name(string fn){
      firstname = fn;
  }
      void set_last_name(string ln){
      lastname = ln;
  }
  int get_age(){
      return age;
  }
    int get_standard(){
      return standard;
  }
    string get_first_name(){
      return firstname;
  }
    string get_last_name(){
      return lastname;
  }
  string to_string(){
      stringstream ss1, ss2;
      string str1,str2, text;
      ss1<<age;
      ss1>>str1;
      ss2<<standard;
      ss2>>str2;
      text = str1 + "," + firstname + "," + lastname+ "," + str2;
      return text;
  }
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
