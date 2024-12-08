#include "triangle.h"
#include <exception>


Triangle::Triangle(float base, float height) : Shape(), _base(base), _height(height)
{
}

// The problem was with the implementation of the polymorphism.
// We can only make a virtual function if it has the same signature -
// and we can not add another argument since itll change the signature.
float Triangle::get_area() const
{
	return float(0.5 * _base * _height);
}
