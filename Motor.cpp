#include "Motor.hpp"


using namespace std;

Motor::Motor()
	{
		NumCilindro = 0;
		Potencia = 0;
	}
Motor::Motor(int C, int P)
	{
		NumCilindro = C;
		Potencia = P;
	}

void Motor::get()
{
	cout << "cilindros: \n";
	cin >> NumCilindro;
	cout << "potencia: \n";
	cin >> Potencia;
	}	
void Motor::print()
{
	cout << "Cilindros: " << NumCilindro << endl;
	cout << "Potencia: " << Potencia << endl;
}

