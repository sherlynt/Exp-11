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
