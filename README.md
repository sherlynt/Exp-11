# EXPERIMENT 11
# Aim 
To Study and Implement Classes and Objects
# Software 
Visual Studio Code
# Theory
Classes and objects are the fundamental building blocks of C++'s object-oriented programming. In this article, we'll learn about C++ classes and objects, how they work, and how to use them in our C++ program.

Classes: 

A class is a user-defined data type that contains its own data members and member functions, which can be accessed and used by creating an instance of the class. A C++ class serves as a blueprint for an object.
A Class is a user-defined data type that includes data members and member functions.
Data members are data variables, and member functions are functions that manipulate these variables together. Together, data members and member functions define the properties and behavior of the objects in a class.

Objects:

When a class is defined, it only specifies the object; no memory or storage is allocated. To use the data and access functions defined in the class, you must first create objects.

Syntax to Create an Object
```
ClassName ObjectName;
```
CODES:

1.
```
#include <iostream>
using namespace std;
class cube{
    public:
    double height=3.4;
    double length=9.2;
    double width=4.1;

};
int main(){
    cube c1;
    double volume=c1.height*c1.length*c1.width;
    cout<<"Volume:"<<volume<<endl;
    
}
```

O/P:



2.
```
#include <iostream>
using namespace std;
class cube{
    public:
     double height=3.4;
    double length=9.2;
    double width=4.1;
    double volume(){
        double v;
        v=height*width*length;
        return v;
    }
};
int main(){
    cube c1;
    cout<<"Volume:"<<c1.volume()<<endl;
}
```

O/P:



3.
```
#include<iostream>
using namespace std;
class cube{
    private:
    double height=3.4;
    double length=9.2;
    double width=4.1;
    public:
    double volume()
    {
        double v;
        v=height*length*width;
        return v;
    }
};
int main()
{
    cube c1;
    cout<<"Volume:"<<c1.volume()<<endl;
}
```

O/P:


4.
```
#include <iostream>
using namespace std;
class cube{
    public:
    double height=3.4;
    double length=9.2;
    double width=4.1;
     double volume(){
     double v;
     v=height*width*length;
        return v;
}
void disp_vol(double vol){
    cout<<"Volume:"<<vol<<endl;

}
};
int main()
{
    cube cube1;
    double vol=cube1.volume();
    cube1.disp_vol(vol);
}
```

O/P:



5.
```
#include <iostream>
using namespace std;

class Volume 
{
    public:
        float length;
        float breadth;
        float height;
        
        void input() {
            cout << "Enter the value of length: ";
            cin >> length;
            cout << "Enter the value of breadth: ";
            cin >> breadth;
            cout << "Enter the value of height: ";
            cin >> height;
        }
                float vol() {
            return length * breadth * height;
        }
        
        void display() {
            double a = vol();
            cout << "The volume is " << a;
        }
};

int main() {
    Volume volume1;
    volume1.input();
    float a = volume1.vol();
    cout << a;
    return 0;
}
```

O/P:



# Conclusion
These C++ code examples show how the program improves step by step to calculate the volume of a cube or box.

The first version is simple: it calculates the volume right in the main() function using values that anyone can see and change. The second version is a bit better because the calculation is done inside the class, but the values are still out in the open. The third version hides these values, so only the class can use them, making the code more secure. The fourth version adds a method just for showing the volume, which makes the code more organized. Finally, the fifth version lets you enter your own numbers for the dimensions, making it more user-friendly and practical, while keeping everything safely inside the class.
