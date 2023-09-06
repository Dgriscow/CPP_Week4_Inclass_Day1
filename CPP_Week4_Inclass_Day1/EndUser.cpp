#include <iostream>
using namespace std;


int main() {

	int i = 5, j = 2;

	double u = static_cast<double>(i) / j;//Example of Converting a Int to a double (or promoting to a double)

	int k = static_cast<int>(u); //converting again to a integer (or demoting)

						//Combining them into one expression might not give the desired expression, 
						// 
						//ALWAYS convert at least one before preforming math, NOT the entire expression 
						// 
						//if you do (i/j) what it does is FIRST divide i/j as a INTEGER, and then it converts it do a double, 
						// 
						//which is already just 2
					
	cout << "i / j = " << u << " " << k << endl; 


	

	return 0;
}