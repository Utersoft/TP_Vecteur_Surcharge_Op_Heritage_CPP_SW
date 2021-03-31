#include "CVecteur2D.h"
#include <iostream>

using namespace std;

//Constructeur
CVect2D::CVect2D(float flt_x, float flt_y)
{
	this->flt_x = flt_x;
	this->flt_y = flt_y;
}

//Constructeur de copie
CVect2D::CVect2D(CVect2D& Vect)
{
	this->flt_x = Vect.flt_x;
	this->flt_y = Vect.flt_y;
}

//Destructeur
CVect2D::~CVect2D()
{
	cout << "Destruction du Vecteur." << endl;
}

//Somme de 2 vecteurs
CVect2D CVect2D::sommeVecteur2D(CVect2D& Vect)const
{
	CVect2D c_tmp;

	c_tmp.flt_x = this->flt_x + Vect.flt_x;
	c_tmp.flt_y = this->flt_y + Vect.flt_y;

	return c_tmp;
}

//Soustraction de 2 vecteurs
CVect2D CVect2D::soustractionVecteur2D(CVect2D& Vect) const
{
	CVect2D c_tmp;

	c_tmp.flt_x = this->flt_x - Vect.flt_x;
	c_tmp.flt_y = this->flt_y - Vect.flt_y;

	return c_tmp;
}

//Multiplication de 2 vecteurs
CVect2D CVect2D::multiplicationVecteur2D(CVect2D& Vect) const
{
	CVect2D c_tmp;

	c_tmp.flt_x = this->flt_x * Vect.flt_x;
	c_tmp.flt_y = this->flt_y * Vect.flt_y;

	return c_tmp;
}

//Affichage des valeurs de x et de y du vecteur
void CVect2D::afficheVecteur2D()
{
	cout << "X : " << this->flt_x << endl << "Y : " << this->flt_y << endl;
}

//Accesseurs
float CVect2D::getX()
{
	return this->flt_x;
}

float CVect2D::gety()
{
	return this->flt_y;
}

//Mutateurs
void CVect2D::setX(float flt_x)
{
	this->flt_x = flt_x;
}

void CVect2D::setY(float flt_y)
{
	this->flt_y = flt_y;
}

//Fonction amie qui permet de vérifier si 2 vecteurs sont égaux
bool coincide2D(CVect2D& const Vect1, CVect2D& const Vect2)
{
	if (Vect1.flt_x == Vect2.flt_x && Vect1.flt_y == Vect2.flt_y) {
		return true;
	}
	
	return false;
}
