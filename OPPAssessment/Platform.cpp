#include"Platform.h"
#include"sfwdraw.h"

void Platform::draw() {
	sfw::drawLine(startX, startY, endX, endY);
}