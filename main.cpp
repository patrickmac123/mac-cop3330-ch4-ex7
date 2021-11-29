#include "std_lib_facilities.h"
#include <iostream>


int main()

{
	string operation;
	double x = 0;	
	double y = 0;	
	cout << "Please enter an operation (+, -, *, /, plus, minus, mul, div) followed by two values separated by a space: ";
	
	while(cin >> x >> y >> operation)
     {

        if(x >= 0 && x <= 9 || y >= 0 && y <= 9)
        {
		double result = 0;
		if (operation=="plus" || operation=="+")
        {
        result = x+y;
        }
        else if (operation=="minus" || operation=="-") 
        {
        result = x-y;
		}
        else if (operation=="mul" || operation=="*") 
        {
        result = x*y;
        }
		else if (operation=="div" || operation=="/") 
        {
			if (y==0) error("trying to divide by zero");
            {
                result = x/y;
            }

		}
		cout << x << operation << y << " = " << result <<'\n';
        }
        else
        {
            cout << "Operand must be between 0 and 9\n";
        }

		cout << "Please enter two values and an operation (+, -, *, /, plus, minus, mul, div) each seperated by a space: ";


	}
}

