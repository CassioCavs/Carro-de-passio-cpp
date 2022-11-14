#include "CarroPasseio.hpp"
#include "Motor.hpp"
#include "Veiculo.hpp"
using namespace std;

CarroPasseio::CarroPasseio() : Motor(), Veiculo()
{
	Cor = " ";
	Modelo = " ";
	NumCilindro = 0;
	Potencia = 0;
	Peso = 0;
	VelocMax = 0;
	Preco = 0;
	
}
CarroPasseio::CarroPasseio(string Cr, string Mod, int ncilindro, int npotencia, int npeso, int nvelocmax, float npreco) : Motor(ncilindro, npotencia), Veiculo(npeso, nvelocmax, npreco)
{
	Cor = Cr;
	Modelo = Mod;
	NumCilindro = ncilindro;
	Potencia = npotencia;
	Peso = npeso;
	VelocMax = nvelocmax;
	Preco = npreco;
	
}
void CarroPasseio::get3()
{
	
	cout << "cilindros: \n";
	cin >> NumCilindro;
	cout << "potencia: \n";
	cin >> Potencia;
	cout << "Peso: " << endl;
	cin >> Peso;
	cout << "VelocMax: " << endl;
	cin >> VelocMax;
	cout << "Preco: " << endl;
	cin >> Preco;
	cout << "Cor: " << endl;
	cin >> Cor;
	cout << "Modelo: " << endl;
	cin >> Modelo;
}
void CarroPasseio::print3()
{
	
	cout << "Cilindros: " << NumCilindro << endl;
	cout << "Potencia: " << Potencia << endl;
	cout << "Peso: " << Peso << endl;
	cout << "VelocMax: " << VelocMax << endl;
	cout << "Preco: " << Preco << endl;
	cout << "Cor: " << Cor << endl;
	cout << "Modelo: " << Modelo << endl;
}

