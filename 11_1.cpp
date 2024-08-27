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
