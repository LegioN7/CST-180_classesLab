// Name: Aaron Pelto
// Week: 12
// Program: Introduction to Classes Lab

// Rectangle Program
// Program designed to demonstrate OO concepts, class definition,
// attributes and methods, accessor and mutator functions, etc.

/*

Step 3: Extending Functionality. What if we wanted to strengthen the Crectangle class --- be able to calculate a perimeter . . .

E.G. A fence around the backyard.
E.G. A molding around the kitchen floor.

Questions to consider:
Do we need any new private data members?
Do we need any new public function prototypes?
Do we need to implement anything?
Do we need to change our Test Driver Program?
*/

#include <iostream>
using namespace std;
// Crectangle class
class Crectangle
{
private:
    double length; // rectangle’s length
    double width;  // rectangle’s width

public:
    // Default Constructor
    Crectangle();
    // Parameterized Constructor
    Crectangle(double, double);
    // set length & width of existing rect.
    void set_dimensions(double, double);
    // get length of existing rectangle
    double get_length(void);
    // get width of existing rectangle
    double get_width(void);
    // calculate area of existing rectangle
    double get_area(void);
    // calculate area of perimeter
    double get_perimeter(void);
};

// IMPLEMENTATION SECTION

// Default Constructor
// Set length and width to 0.0
Crectangle ::Crectangle()
{
    length = 0.0;
    width = 0.0;
}

// Parameterized Constructor
// Set length and width to passed values
Crectangle::Crectangle(double l, double w)
{
    length = l;
    width = w;
}
// Assign passed length and width
// to existing object
void Crectangle ::
    set_dimensions(double l, double w)
{
    length = l;
    width = w;
}

// return length of existing object
double Crectangle ::get_length(void)
{
    return length;
}
// return width of existing object
double Crectangle ::get_width(void)
{
    return width;
}
// calculate and return area of existing
// object based on its data
double Crectangle ::get_area(void)
{
    return length * width;
}

double Crectangle ::get_perimeter(void)
{
    return (2 * length) + (2 * width);
}

// DRIVER PROGRAM

int main()
{
    // Declare local variables for user input
    double howWide = 0.0;
    double howLong = 0.0;

    // Construct kitchen object with
    // Default Constructor
    Crectangle kitchen;

    // Use console I/O to get bedroom dimensions from user
    cout << "Enter the length of the bedroom: ";
    cin >> howLong;
    cout << "Enter the width of the bedroom: ";
    cin >> howWide;
    cout << "\n\n";

    // Construct bedroom object with
    // Parameterized Constructor
    Crectangle bedroom(howLong, howWide);

    // Display existing dimensions of
    // bedroom object
    cout << "The dimensions of the bedroom are ";
    cout << bedroom.get_length() << " by ";
    cout << bedroom.get_width() << endl;

    // Display calc’d area of bedroom obj.
    // using dimensions as initialized
    cout << "The area of the bedroom is ";
    cout << bedroom.get_area() << endl;

    cout << "The perimeter of the bedroom ";
    cout << "is " << bedroom.get_perimeter();
    cout << "\n\n";

    // Send kitchen dimensions to its obj.
    kitchen.set_dimensions(14.5, 12.0);
    // Display dimensions and calculated
    // area of kitchen object using
    // its data
    cout << "The area of the ";
    cout << kitchen.get_length() << " by ";
    cout << kitchen.get_width();
    cout << " kitchen is ";
    cout << kitchen.get_area() << endl;

    // Display perimeter of kitchen
    cout << "The perimeter of the kitchen ";
    cout << "is " << kitchen.get_perimeter();
    cout << "\n\n";

    // EOJ
    system("pause");
    return 0;
}
