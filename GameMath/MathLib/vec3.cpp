#include "vec3.h"
#include <cmath>
#include <cfloat>


vec3 operator+=(vec3 &lhs, const vec3 &rhs) {
	lhs = lhs + rhs;

	return lhs;
}

bool operator==(const vec3 &lhs, const vec3 &rhs) {
	if (abs(lhs.x - rhs.x) < FLT_EPSILON &&
		abs(lhs.y - rhs.y) < FLT_EPSILON &&
		abs(lhs.z - rhs.z) < FLT_EPSILON) {
		return true;
	}
	return false;
}

bool operator!=(const vec3 & lhs, const vec3 & rhs){
	if (abs(lhs.x - rhs.x) < FLT_EPSILON &&
		abs(lhs.y - rhs.y) < FLT_EPSILON &&
		abs(lhs.z - rhs.z) < FLT_EPSILON) {
		return false;
	}
	return true;
}

vec3 operator+(const vec3 &lhs, const vec3 &rhs) {
	vec3 result;
	result.x = lhs.x + rhs.x;
	result.y = lhs.x + rhs.x;
	result.z = lhs.x + rhs.x;

	return result;

	// rewrite?
	for (int i = 0; i < 3; ++i) {
		result.v[i] = lhs.v[i] + rhs.v[i];
	}
}

vec3 operator-(const vec3 &lhs, const vec3 & rhs)
{
	vec3 result;
	result.x = lhs.x - rhs.x;
	result.y = lhs.x - rhs.x;
	result.z = lhs.x - rhs.x;

	for (int i = 0; i < 3; ++i) {
		result.v[i] = lhs.v[i] - rhs.v[i];
	}
	return result;
}

vec3 operator*(const vec3 &lhs, const float rhs)
{
	vec3 result;
	result.x = lhs.x * rhs;
	result.y = lhs.x * rhs;
	result.z = lhs.x * rhs;

	for (int i = 0; i < 3; ++i) {
		result.v[i] = lhs.v[i] - rhs[i];
	}
	return result;
}

vec3 operator*(const float lhs, const vec3 & rhs)
{
	return vec3();
}

vec3 operator/(const vec3 & lhs, const vec3 & rhs)
{
	return vec3();
}

vec3 operator*(const vec3 & lhs, const vec3 & rhs)
{
	return vec3();
}
