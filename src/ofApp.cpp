#include "ofApp.h"
using namespace std;

//--------------------------------------------------------------
void ofApp::setup() {
	ofSetFrameRate(15); // Limit the speed of our program to 15 frames per second

	ofBackground(0);
	consolas30.load("consolas.ttf", 30, true, true);
	consolas15.load("consolas.ttf", 15, true, true);

	isMainPage = 1;
}

//--------------------------------------------------------------
void ofApp::update() { 

}

//--------------------------------------------------------------
int x = 30, y = 80;
void ofApp::draw() {
	ofSetFrameRate(100); // Limit the speed of our program to 15 frames per second
	ofSetColor(255, 255, 255);

	if (isMainPage) {
		consolas30.drawString("Rhythm Sonic", ofGetWidth() / 2 - 170, ofGetHeight() / 2);
		consolas15.drawString("dongzoolee / Sogang University", ofGetWidth() / 2 - 170, ofGetHeight() / 2 + 30);
		consolas15.drawString("press any key to start", ofGetWidth() / 2 - 170, ofGetHeight() / 2 + 60);
	}
	
	if (isPlayPage) {
		drawPlayBox();
		drawRhythmElement(x, y);
		y += 4;
	}

	
}

void ofApp::drawRhythmElement(int x, int y) {
	roundedRect(x, y, 50, 10, 20);
}

void ofApp::drawPlayBox() {
	int width = ofGetWidth();
	int height = ofGetHeight();

	glm::vec2 playbox_right_top = { width - 30, 80 };
	glm::vec2 playbox_right_bottom = { width - 30, height - 80 };
	glm::vec2 playbox_left_top = { 30, 80 };
	glm::vec2 playbox_left_bottom = { 30, height - 80 };

	ofDrawLine(playbox_left_top, playbox_right_top);
	ofDrawLine(playbox_right_top, playbox_right_bottom);
	ofDrawLine(playbox_right_bottom, playbox_left_bottom);
	ofDrawLine(playbox_left_bottom, playbox_left_top);
}
//--------------------------------------------------------------
void ofApp::keyPressed(int key) {
	if (isMainPage) {
		isMainPage = 0;
		isPlayPage = 1;
	}
	if (key == 'v') {
		// HACK: only needed on windows, when using ofSetAutoBackground(false)
		glReadBuffer(GL_FRONT);
		ofSaveScreen("savedScreenshot_" + ofGetTimestampString() + ".png");
	}
	/*if (key == 'q') {
		_Exit(0);
	}*/
	if (key == 's') {
	
	}
	if (key == 'd') {
		
	}
	if (key == 'f') {

	}
	if (key == ' ') {

	}
	if (key == 'j') {

	}
	if (key == 'k') {

	}
	if (key == 'l') {

	}
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key) {
	/*
	if (key == 'l') {
		// Open the Open File Dialog
		ofFileDialogResult openFileResult = ofSystemLoadDialog("Select a only txt for Waterfall");

		// Check whether the user opened a file
		if (openFileResult.bSuccess) {
			ofLogVerbose("User selected a file");

			// We have a file, so let's check it and process it
			processOpenFileSelection(openFileResult);
		}
	}
	*/
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h) {

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg) {

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo) {

}

void ofApp::processOpenFileSelection(ofFileDialogResult openFileResult) {
	//Path to the comma delimited file
	//string fileName = "input.txt";

	string fileName = openFileResult.getName();
	ofFile file(fileName);

	if (!file.exists()) cout << "Target file does not exists." << endl;
	else cout << "We found the target file." << endl;

	ofBuffer buffer(file);

	/* This variable is for indicating which type of input is being received.
	 IF input_type == 0, then work of getting line input is in progress.
	 IF input_type == 1, then work of getting dot input is in progress.
	 */
	int input_type = 0;


	/* COMSIL1-TODO 1 : Below code is for getting the number of line and dot, getting coordinates.
	 You must maintain those information. But, currently below code is not complete.
	 Also, note that all of coordinate should not be out of screen size.x
	 However, all of coordinate do not always turn out to be the case.
	 So, You have to develop some error handling code that can detect whether coordinate is out of screen size.
	*/


}

void ofApp::initializeWaterLines() {
	;
}