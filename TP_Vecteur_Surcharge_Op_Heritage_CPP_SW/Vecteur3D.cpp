#include "Vecteur3D.h"


CVect3D::CVect3D(float flt_x, float flt_y, float flt_z):CVect2D(flt_x, flt_y)
{
	this->flt_z = flt_z;
}

CVect3D::CVect3D(const CVect3D& Vect):CVect2D(Vect)
{
	this->flt_z = Vect.flt_z;
}

CVect3D::~CVect3D()
{
	cout << "Desctruction du vecteur 3D" << endl;
}

CVect3D CVect3D::operator+(const CVect3D& Vect) const
{
	CVect3D c_tmp;

	c_tmp.setX(this->getX() + Vect.getX());
	c_tmp.setY(this->getY() + Vect.getY());
	c_tmp.flt_z = this->flt_z + Vect.flt_z;
	

	return c_tmp;
}

CVect3D CVect3D::operator-(const CVect3D& Vect) const
{
	CVect3D c_tmp;

	c_tmp.setX(this->getX() - Vect.getX());
	c_tmp.setY(this->getY() - Vect.getY());
	c_tmp.flt_z = this->flt_z - Vect.flt_z;


	return c_tmp;
}

CVect3D CVect3D::operator*(const CVect3D& Vect) const
{
	CVect3D c_tmp;

	c_tmp.setX(this->getX() * Vect.getX());
	c_tmp.setY(this->getY() * Vect.getY());
	c_tmp.flt_z = this->flt_z * Vect.flt_z;


	return c_tmp;
}

CVect3D& CVect3D::operator=(const CVect3D& Vect)
{
	this->setX(Vect.getX());
	this->setY(Vect.getY());
	this->flt_z = Vect.flt_z;

	return *this;
}

void CVect3D::affichVecteur3d() const
{
	this->afficheVecteur2D();
	cout << "Z : " << this->flt_z << endl;
}

float CVect3D::getZ() const
{
	return this->flt_z;
}

void CVect3D::setZ(float flt_z)
{
	this->flt_z = flt_z;
}

ostream& operator<<(ostream& os, const CVect3D& Vect)
{
	os << "X : " << Vect.getX() << endl << "Y : " << Vect.getY() << endl << "Z : " << Vect.getZ() << endl;

	return os;
}

bool coincide3D(CVect3D Vect1, CVect3D Vect2)
{
	if (Vect1.getX() == Vect2.getX() && Vect1.getY() == Vect2.getY() && Vect1.flt_z == Vect2.flt_z) {
		return true;
	}

	return false;
}
