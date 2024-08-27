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
