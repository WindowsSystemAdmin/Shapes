#include <iostream>

using namespace std;

class Shapes{
	public:
		Shapes();
		//Shapes();
		~Shapes();
		Shapes & operator=(const Shapes & Alfa);
		Shapes(const Shapes & Bravo);
	protected:
		virtual double GetParameter() = 0;
		virtual double GetArea() = 0;
	private:
		/* something here*/
};