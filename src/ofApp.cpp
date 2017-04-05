#include "ofApp.h"

ofFbo fbo;
//ofImage leaf;
//--------------------------------------------------------------
void ofApp::setup(){
   // leaf.load("leaf.png");
    fbo.allocate(ofGetWidth(), ofGetHeight());  // higher precision alpha (no artifacts)
    
    fbo.begin();
    ofClear(255,255,255, 0);
    fbo.end();
}

float rX = 0;
float rY = 0;
float rZ = 0;

//--------------------------------------------------------------
void ofApp::update(){
    rX++;
    if(ofGetFrameNum()%3 == 0)
        rY++;
    if(ofGetFrameNum()%7 ==0)
        rZ++;
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(255);
    
    fbo.begin();
    ofSetColor(255,255,255, 10);
    ofDrawRectangle(0,0,ofGetWidth(),ofGetHeight());
    
    ofPushMatrix();
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    ofScale(0.3, 0.3, 0.3); //can be 3 dimensional
//    for(int i = 0, i < 100, i++){
//        float t = i *10;
//        float y = ofNoise(t);
//        ofDrawLine(-20, 30*y*i, 20, 50*y*i)
//    }
    ofRotateX(rX);
    ofRotateY(rY);
    ofRotateZ(rZ);
   // leaf.draw(0 - leaf.getWidth()/2, 0 - leaf.getHeight()/2); //draw at new 0,0
    ofSetColor(0);
    ofDrawLine(-20, 500, 20, 500);
    ofPopMatrix();
    
    fbo.end();
    fbo.draw(0,0);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
