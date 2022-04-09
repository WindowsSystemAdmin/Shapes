#include "triangle.hh"

using namespace std;
Triangle::Triangle() {
    base = 6.55;
    height = 193.2032;
    side_a = 34.56;
    side_c = 101.112;
}
Triangle::Triangle(double _base, double _height, double _side_a, double _side_c) {
    base = _base;
    height = _height;
    side_a = _side_a;
    side_c = _side_c;

}
double Triangle::GetArea() {
try{
    if(base == 0 && pow(side_c,2)-pow(side_a,2) < 0){
	throw base;
    }
    else if (base == 0 && pow(side_c,2)-pow(side_a,2) >= 0){
    	base = sqrt(pow(side_c,2) - pow(side_a,2));
    	result = .5 * base  *height;
    }
    else if (base != 0){
	result = .5 * base  *height;
	}
 }
 catch(double error){
 	cout << "Not a right triangle because c^2 - a^2 < 0." << endl;
}
    	return result;
}
double Triangle::GetParameter() {
try{
if(side_a !=0 && base != 0 && side_c != 0){
    result = side_a + base + side_c;
}
else if(side_a == 0 && base != 0 && side_c != 0){
	if(pow(side_c,2) - pow(base,2) < 0){
		string message = "Not a right triangle because c^2 - base^2 < 0.";
		throw message;
		}
	else{
    		side_a = sqrt(pow(side_c,2) - pow(base,2));
    		}
    	result = side_a + base + side_c;
}
else if(side_a != 0 && base == 0 && side_c != 0){
	if(pow(side_c,2)-pow(side_a,2) < 0){
		string message = "Not a right triangle because c^2 - a^2 < 0.";
		throw message;
		}
	else{
    		base = sqrt(pow(side_c,2)-pow(side_a,2));
    		}
    	result = side_a + base + side_c;
}
else if(side_a != 0 && base != 0 && side_c == 0){
    side_c = sqrt(pow(side_a,2)+pow(base,2));
    result = side_a + base + side_c;
}
}
catch(string response){
	cout << response << endl;
	}
return result;
}
