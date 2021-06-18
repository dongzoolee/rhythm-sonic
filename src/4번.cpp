#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {
	xPos = 5; // horizontal start position
	ofBackground(ofColor::black); // black background
}

void ofApp::update() {
	xPos += 2;
	if (ofGetWidth() < xPos) { // if horizontal position is off the screen (width) 		xPos = 5; // reset horizontal position
	}
}

void ofApp::draw() {
	ofSetColor(ofColor::red); // draw everything in red
	ofDrawCircle(xPos, 100, 10); // draw a circle at the (variable) horizontal position, 100 pixels from the top with a 10 pixel diameter
}


//--------------------------------------------------------------
void ofApp::keyPressed(int key) {

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key) {

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
