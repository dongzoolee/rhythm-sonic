#pragma once

#include "ofMain.h"

struct line {
	int x1, y1, x2, y2;
};

struct dot {
	int x, y;
};

class ofApp : public ofBaseApp {

public:
	void setup();
	void update();
	void draw();

	void keyPressed(int key);

	void keyReleased(int key);
	void mouseMoved(int x, int y);
	void mouseDragged(int x, int y, int button);
	void mousePressed(int x, int y, int button);
	void mouseReleased(int x, int y, int button);
	void mouseEntered(int x, int y);
	void mouseExited(int x, int y);
	void windowResized(int w, int h);
	void dragEvent(ofDragInfo dragInfo);
	void gotMessage(ofMessage msg);

	// custom functions
	void drawRhythmElement(int x, int y);
	void drawPlayBox();

	// custom shapes
	void roundedRect(float x, float y, float w, float h, float r) {
		ofBeginShape();
		ofVertex(x + r, y);
		ofVertex(x + w - r, y);
		quadraticBezierVertex(x + w, y, x + w, y + r, x + w - r, y);
		ofVertex(x + w, y + h - r);
		quadraticBezierVertex(x + w, y + h, x + w - r, y + h, x + w, y + h - r);
		ofVertex(x + r, y + h);
		quadraticBezierVertex(x, y + h, x, y + h - r, x + r, y + h);
		ofVertex(x, y + r);
		quadraticBezierVertex(x, y, x + r, y, x, y + r);
		ofEndShape();
	}
	void quadraticBezierVertex(float cpx, float cpy, float x, float y, float prevX, float prevY) {
		float cp1x = prevX + 2.0 / 3.0 * (cpx - prevX);
		float cp1y = prevY + 2.0 / 3.0 * (cpy - prevY);
		float cp2x = cp1x + (x - prevX) / 3.0;
		float cp2y = cp1y + (y - prevY) / 3.0;

		// finally call cubic Bezier curve function  
		ofBezierVertex(cp1x, cp1y, cp2x, cp2y, x, y);
	};

	// font variable
	ofTrueTypeFont consolas15;
	ofTrueTypeFont consolas30;
	// flag variables
	bool isMainPage = 0;
	bool isPlayPage = 0;
	// Line segment and dot related variables

	/* WaterFall-related member functions */

	void processOpenFileSelection(ofFileDialogResult openFileResult);
	void initializeWaterLines(); // 2nd week portion.
};
