#include <iostream>
using namespace std;
int main()
{
	float valorlitro, distanciakm, consumo, totallitros, totalgasto;
	
	cout << "\n informe o valor do litro do combustivel:";
	cin >> valorlitro;
	
	cout << "\n informe o a distancia em Km:";
	cin >> distanciakm;
	
	cout << "\n informe o consumo:";
	cin >> consumo;
	
	totallitros = distanciakm / consumo;
	totalgasto = totallitros * valorlitro;
	
	cout << "\n o total de litros consumidos foi de:" << totallitros;
	cout << "\n o valor gasto foi:" << totalgasto;

return 0;

}
