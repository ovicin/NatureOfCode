/**
 * Acceleration with Vectors
 * Original Processing code by Daniel Shiffman.
 * OF rendition by firmread
 *
 * Demonstration of the basics of motion with vector.
 * A "Mover" object stores location, velocity, and acceleration as vectors
 * The motion is controlled by affecting the acceleration (in this case towards the mouse)
 */

#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    ofSetFrameRate(60);
    
    ofEnableSmoothing();
    ofEnableAlphaBlending();
    ofBackground(255);
    for (int i = 0; i < NUM_MOVER ; i++) {
        movers[i].setup();
    }
}

//--------------------------------------------------------------
void testApp::update(){
    
    for (int i = 0; i < NUM_MOVER ; i++) {
        movers[i].update(mouseX, mouseY);
    }
}

//--------------------------------------------------------------
void testApp::draw(){
    
    for (int i = 0; i < NUM_MOVER ; i++) {
        movers[i].display();
    }
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}