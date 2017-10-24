#include"vec2.h"
#include<climits>
#include<cmath>
#include<cfloat>

vec2 operator+(const vec2 &lhs, const vec2 &rhs) {
	vec2 result;
	result.x = lhs.x + rhs.x;
	result.y = lhs.y + rhs.y;

	return result;

	//return{ lhs.x + rhs.x, lhs.y + rhs.y };
}


vec2 operator-(const vec2 &lhs, const vec2 &rhs) {
	vec2 result;
	result.x = lhs.x - rhs.x;
	result.y = lhs.y - rhs.y;

	return result;

	//return{ lhs.x + rhs.x, lhs.y + rhs.y };
}

vec2 &operator*(const vec2 & lhs, const float rhs)
{
	vec2 result;
	result.x = lhs.x * rhs;
	result.y = lhs.y * rhs;

	return result;

}

vec2 & operator*(const float lhs, const vec2 & rhs)
{
	vec2 result;
	result.x = lhs * rhs.x;
	result.y = lhs * rhs.y;

	return result;
}

vec2 operator/(const vec2 &lhs, const vec2 &rhs) {
	vec2 result;
	result.x = lhs.x / rhs.x;
	result.y = lhs.x / rhs.x;

	return result;
}

bool operator==(const vec2 &lhs, const vec2 &rhs) {
	//return lhs.x == rhs.x && lhs.y == rhs.y;
	if (abs(lhs.x - rhs.x) < FLT_EPSILON && abs(lhs.y - rhs.y) < FLT_EPSILON) {
		return true;
	}
	return false;
}

bool operator!=(const vec2 &lhs, const vec2 &rhs) {
	//return lhs.x != rhs.x && lhs.y != rhs.y
	if (abs(lhs.x - rhs.x) < FLT_EPSILON && abs(lhs.y - rhs.y) < FLT_EPSILON) {
		return false;
	}
	return true;
}

vec2 &operator+=(vec2 &lhs, const vec2 &rhs) {
	lhs.x += rhs.x;
	lhs.y += rhs.y;

	lhs = lhs + rhs;

	return lhs;
}

vec2 &operator-=(vec2 &lhs, const vec2 &rhs) {
	lhs.x -= rhs.x;
	lhs.y -= rhs.y;

	lhs = lhs - rhs;

	return lhs;
}

vec2 &operator*=(vec2 &lhs, const float rhs) {
	lhs.x *= rhs;
	lhs.y *= rhs;

	//lhs = lhs * rhs;

	return lhs;
}

vec2 &operator/=(vec2 &lhs, const float rhs) {
	lhs.x /= rhs;
	lhs.y /= rhs;

	//lhs = lhs * rhs;

	return lhs;
}

vec2 operator && (const vec2 &lhs, const vec2 &rhs) {
	lhs.x && rhs.x;
	lhs.y && rhs.y;

	
}

float & vec2::operator[](unsigned idx)
{
	return v[1];
	return v[2];
}

float vec2::operator[](unsigned idx) const
{
	return v[1];
	return v[2];
}
