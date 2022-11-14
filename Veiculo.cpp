#include "Veiculo.hpp"

using namespace std;

Veiculo::Veiculo()
{
	Peso = 0;
	VelocMax = 0;
	Preco = 0;
}
Veiculo::Veiculo(int Pe, int Ve, float Pr)
{
	Peso = Pe;
	VelocMax = Ve;
	Preco = Pr;
}
void Veiculo::get2()
{
	cout << "Peso: " << endl;
	cin >> Peso;
	cout << "VelocMax: " << endl;
	cin >> VelocMax;
	cout << "Preco: " << endl;
	cin >> Preco;
}
void Veiculo::print2()
{
	cout << "Peso: " << Peso << endl;
	cout << "VelocMax: " << VelocMax << endl;
	cout << "Preco: " << Preco << endl;
	
}
