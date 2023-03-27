#include <iostream>

using namespace std;
class Rectangle{
 protected:
    int lenght, width;
  public:
    void display(){
        cout<<lenght<<" "<<width<<endl;
    }     
};
class RectangleArea : public Rectangle{    
public:    
    void read_input(){
        cin>>lenght>>width;          
    }
    void display(){
        cout<<width*lenght;
    }
};

int main()
{
    /*
     * Declare a RectangleArea object
     */
    RectangleArea r_area;
    
    /*
     * Read the width and height
     */
    r_area.read_input();
    
    /*
     * Print the width and height
     */
    r_area.Rectangle::display();
    
    /*
     * Print the area
     */
    r_area.display();
    
    return 0;
}
