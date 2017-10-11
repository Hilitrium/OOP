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

vec2 &operator+=(vec2 &lhs, const vec2 &rhs) {
	lhs.x += rhs.x;
	lhs.y += rhs.y;

	lhs = lhs + rhs;

	return lhs;
}

vec2 operator-(const vec2 &lhs, const vec2 &rhs) {
	vec2 result;
	result.x = lhs.x - rhs.x;
	result.y = lhs.y - rhs.y;

	return result;

	//return{ lhs.x + rhs.x, lhs.y + rhs.y };
}

vec2 operator*(const vec2 &lhs, const vec2 &rhs) {
	vec2 result;
	result.x = lhs.x * rhs.x;
	result.y = lhs.y * rhs.y;

	return result;

	//return{ lhs.x + rhs.x, lhs.y + rhs.y };
}

bool operator==(const vec2 &lhs, const vec2 &rhs) {
	//return lhs.x == rhs.x && lhs.y == rhs.y;
	if (abs(lhs.x - rhs.x) < FLT_EPSILON && abs(lhs.y - rhs.y < FLT_EPSILON)) {
		return true;
	}
	return false;
}

vec2 operator && (const vec2 &lhs, const vec2 &rhs) {

}