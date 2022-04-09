#include "square.hh"
#include "circle.hh"
#include "triangle.hh"
#include "trapezoid.hh"

using namespace std;
void AddShapes(Shapes ** &list,int& CurrentShapes, int& MaxShapes, Shapes* const moot);
void PrintTotalArea(Shapes ** &list, int& CurrentShapes);
void PrintTotalParameter(Shapes ** &list, int& CurrentShapes);
int main() {
	Shapes ** list = new Shapes * [12];
	int pick;
	int CurrentShapes = 0;
  int MaxShapes = 10;
	char anotherround;
	double side1, side2,sidea,sidec,base0,base1,base2, height, rad;
	side1 = side2 = sidea = sidec = base0 = base1 = base2 = height = rad = 0.00;
	do{
		cout << "Pick a shape"<< endl;
		cout << " 1. Square \n 2. Rectangle \n 3. Circle \n 4. Trapezoid \n 5. Triangle \n 6. Print total area \n 7. Print total parameter \n 8. Exit. \n Your response: ";
		cin >> pick;
		switch(pick){
		case 1:
			{
			cout << "Enter a side of the square: ";
			cin >> side1;
			Square* s = new Square(side1);
			AddShapes(list, CurrentShapes, MaxShapes, s);
			break;
				}
		case 2:
			{
			cout << "Enter side 1 of the rectangle: ";
			cin >> side1;
			cout << "Enter side 2 of the rectangle: ";
			cin >> side2;
			Rectangle* r = new Rectangle(side1,side2);
			AddShapes(list, CurrentShapes, MaxShapes, r);
			break;
				}
		case 3:
			{
			cout << "Enter a radius: ";
			cin >> rad;
			Circle* c = new Circle(rad);
			AddShapes(list, CurrentShapes, MaxShapes, c);
			break;
				}
		case 4:
			{
			cout << "Enter base 1 and base 2 of the trapezoid separated by a space: ";
			cin >> base1 >> base2;
			cout << "Enter side 1 and side 2 of the trapezoid separated by a space: ";
			cin >> side1 >> side2;
			cout << "Enter the height of the trapezoid: ";
			cin >> height;
			Trapezoid* a = new Trapezoid(base1, base2, side1, side2, height);
			AddShapes(list, CurrentShapes, MaxShapes, a);
			break;
				}
		case 5:
			{
			cout << "Enter the base of the triangle: ";
			cin >> base0;
			cout << "Enter the hypotenuse of the triangle: ";
			cin >> sidec;
			cout << "Enter side A of the triangle: ";
			cin >> sidea;
			cout << "Enter the height of the triangle: ";
			cin >> height;
			Triangle* t = new Triangle(base0, height, sidea, sidec);
			AddShapes(list, CurrentShapes, MaxShapes, t);
			break;
				}
			case 6:
				{
					PrintTotalArea(list, CurrentShapes);
					break;
				}
			case 7:
				{
					 PrintTotalParameter(list, CurrentShapes);
						break;
				}
		default:
			{
			cout << "Invalid argument. Try again. \n";
				}
			}
	cout << "Add another shape? ";
	cin >> anotherround;
	anotherround = toupper(anotherround);
	}
	while(anotherround == 'Y');
	cout << "Exiting now and everything goes to the rubbish bin...\n";
}

void AddShapes(Shapes ** &list,int& CurrentShapes, int& MaxShapes,Shapes* const moot){
	if (CurrentShapes == MaxShapes){
		int newsize = MaxShapes + 10;
		Shapes * temp[newsize];
		for (int i = 0; i < MaxShapes; i++){
      temp[i] = list [i];
    }
  	for(int i = 0; i < CurrentShapes; i++){
			delete[] list[i];
		}
		delete[] list;
		list = temp;
		MaxShapes = newsize;
	}
  list[CurrentShapes++] = moot;
}
void PrintTotalArea(Shapes ** &list, int& CurrentShapes){
	double aggregate = 0.00;
	for(int i = 0; i < CurrentShapes; i++){
		aggregate += list[i]->GetArea();
	}
	cout << "Total area of ALL shapes: " << aggregate << endl;
}
void PrintTotalParameter(Shapes ** &list, int& CurrentShapes){
	double aggregate = 0.00;
	for(int i = 0; i < CurrentShapes; i++){
		aggregate += list[i]->GetParameter();
	}
	cout << "Total parameter of ALL shapes: " << aggregate << endl;
} 