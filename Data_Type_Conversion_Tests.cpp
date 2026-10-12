#include <iostream>
#include <string>

using namespace std;
int main()
{
    string st1 = "43.22";

    int conver_to_int = stoi(st1);
    float conver_to_float = stof(st1);
    double conver_to_double = stod(st1);

	cout << "The string value is: " << st1 << endl 
		<< "The integer value is: " << conver_to_int << endl
		<< "The float value is: " << conver_to_float << endl 
		<< "The double value is: " << conver_to_double << endl
		<< "_____________________________________________________" << endl;
// _______________________________________________________________

	int N1 = 20;
	string convert_to_string = to_string(N1);
	double N2 = 33.5;
	string convert_to_double = to_string(N2);
	float N3 = 55.23;
	string convert_to_float = to_string(N3);

	cout << "The integer value is: " << N1 << endl
		<< "The string value is: " << convert_to_string << endl
		<< "The double value is: " << N2 << endl
		<< "The string value is: " << convert_to_double << endl
		<< "The float value is: " << N3 << endl
		<< "The string value is: " << convert_to_float << endl
		<< "_____________________________________________________" << endl;
	return 0;
}