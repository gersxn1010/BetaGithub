#include <iostream>
using namespace std;
class Juego{
private:
	int suma;
	int resta;
public:
	Juego(int suma, int resta);	
	void setSuma(int s) { suma = s; }
	void setResta(int r) { resta = r; }
	int getSuma() const { return suma; }
	int getResta() const { return resta; }
};

