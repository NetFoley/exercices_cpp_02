#pragma once
#include <iostream>
#include "math.h"
#include "friends.h"

using namespace std;

static int nb = 0;
class friends;
class vect3D
{
private:
	float x, y, z;

public:
	inline vect3D();
	inline vect3D(float x, float y, float z)
	{
		nb++;
		cout << "Nouveau vect3D(" << nb << ") x: " << x << " y: " << y << " z: " << z << endl;
		this->x = x;
		this->y = y;
		this->z = z;
	}
	bool coincide(float x, float y, float z);
	bool coincide(vect3D* v);
	bool coincide(vect3D &v);
	vect3D normax(vect3D v);
	vect3D& normax(vect3D& v);
	vect3D* normax(vect3D* v);
	vect3D add(vect3D v);
	vect3D minus(vect3D v);
	float scalaire(vect3D v);
	friend bool friends::coincide(vect3D& v1, vect3D& v2);

	void afficher();
	float getNorm();
};

