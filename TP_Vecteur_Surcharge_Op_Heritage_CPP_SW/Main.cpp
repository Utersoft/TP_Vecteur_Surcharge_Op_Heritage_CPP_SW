#include "CVecteur2D.h"
#include <iostream>

using namespace std;


int main() {

	CVect2D Vecteur1(1.5, 4.4);
	CVect2D Vecteur2(2.0, 8.6);

	CVect2D Vecteur3(Vecteur1);

	Vecteur3.afficheVecteur2D();

	//Vecteur3 = Vecteur1.sommeVecteur2D(Vecteur2);

	//Vecteur3.afficheVecteur2D();

	cout << coincide2D(Vecteur1, Vecteur2) << endl;
	//cout << coincide2D(Vecteur1, Vecteur3) << endl;


	return 0;
}