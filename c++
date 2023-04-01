 #include <iostream>
using namespace std;
class square{
     int x;
    public:
    square(){
        cout<<"enter the length of side :";
        cin>>x;
    }
    square(square &s){
        cout<<"Area of square is "<<s.x*s.x<<"units";    }
};
int main(){
square s;
square s1=s;
return 0;
}
