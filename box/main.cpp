#include <iostream>
using namespace std;

class Box{
private:
double x;
double y;
double z;
public:
Box(double l, double h, double s){
  setX(l);
  setY(h);
  setZ(s);
  cout<<"Enter the dimensions of the box"<<endl<< 2*(x*y + x*z + y*z)<<endl;
}
void setX(double l1){
  x = l1;
  
}
void setY(double h1){
  y = h1; 
}
void setZ(double s1){
  z = s1; 
}
double getX(){
  return x;
}
double getY(){
  return y;
}
double getZ(){
  return z;
}

/*double calculateSurfaceOfArea(){
  cout<<"Enter the dimensions of the box"<<endl;
  cin>>x>>y>>z;
  return 2*x*y + 2*x*z + 2*y*z;
}*/
};


int main(){
  /*Box obj;

  cout<<obj.calculateSurfaceOfArea();*/
  double x, y, z;
  cout << "\nPlease enter dimensions(w l h) : ";
        cin >> x >> y >> z;
  Box boxobj(x, y, z);
  
  return 0;
}