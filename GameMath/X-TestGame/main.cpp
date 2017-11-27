#include "myGuy.h"
#include "sfwdraw.h"
#include "Transform.h"
int main() 
{
	sfw::initContext(800,800);

	Transform myTrans;
	myTrans.position = vec2{ 400,300 };
	myTrans.dimension = vec2{ 1,1 };
	myTrans.angle = 0;
	

	while (sfw::stepContext())
	{
		myTrans.angle += sfw::getDeltaTime() * 20;
		DrawMatrix(myTrans.getGlobalTransform(), 30);
	}

	sfw::termContext();
}

myGuy::myGuy(float speed, float rotSpeed, vec2 pos, vec2 dim, float anglez) {
	Speed = Speed;
	turnSpeed = rotSpeed;
	myTrans.position = pos;
	myTrans.dimension = dim;
	myTrans.angle = anglez;
}

void myGuy::update() {//const mat3 &t) {
	mat3 t = myTrans.getGlobalTransform();

	vec2 Dir = norm((t[1].xy)) * Speed;

	if (sfw::getKey('W')) {
		myTrans.position += Dir;
	}
	if (sfw::getKey('S')) {
		myTrans.position -= Dir;
	}
	if (sfw::getKey('A')) {
		myTrans.angle += turnSpeed;
	}
	if (sfw::getKey('D')) {
		myTrans.angle -= turnSpeed;
	}
}

void myGuy::draw(const mat3 &t) {
	vec2 pos = t[2].xy;

	sfw::drawCircle(pos.x, pos.y, 300, 450, RED);
	DrawMatrix(myTrans.getGlobalTransform(), 300);
}

//#include "sfwdraw.h"
//#include "Transform.h"
//#include "myGuy.h"
//#include "mat3.h"
//#include <cmath>
//
//int main() {
//	sfw::initContext();
//
//	myGuy me(3, 5, vec2{ 300, 400 }, vec2{ 256,256 }, 0);
//
//}