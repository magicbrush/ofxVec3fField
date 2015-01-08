#include "ofApp.h"
#include "ofxVec3fField.h"
#include "ofxVec3fField_Radial.h"
#include "ofxVec3fField_Rand.h"

//--------------------------------------------------------------
void ofApp::setup(){

	pVF1.reset(new ofxVec3fField_Radial);
	pVF2.reset(new ofxVec3fField_Rand);
	pVF = pVF1;

	P.setup("Test_ofxVec3fField");
	P.setPosition(0,0);
	P.add(pVF1->getParamGroup());
	P.add(pVF2->getParamGroup());

}

//--------------------------------------------------------------
void ofApp::update(){

	ofMatrix4x4 M= pVF1->getPostTrans();
	M.rotate(0.1f,0,0,1);
	pVF1->setPostTrans(M);

}

//--------------------------------------------------------------
void ofApp::draw(){
	
	float x = -1.0f;
	float y = -1.0f;
	float xs = 0.1f;
	float ys = 0.1f;

	for(int i=0;i<20;i++)
	{
		for(int j=0;j<20;j++)
		{
			float xv,yv;
			xv = x + xs*i;
			yv = y + ys*j;

			ofPoint P(xv,yv);
			ofVec3f V = pVF->getVec(P);

			ofPushStyle();
			ofPushMatrix();
			ofSetColor(ofColor::black);
			ofTranslate(ofPoint(ofGetWidth()/2,ofGetHeight()/2));
			ofScale(300.0f,300.0f,1.0f);
			ofDrawArrow(P,(P+0.1f*V),0.01f);
			ofPopMatrix();
			ofPopStyle();
		}
	}

	P.draw();

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

	if(OF_KEY_F1==key)
	{
		pVF = pVF1;
	}
	else if(OF_KEY_F2==key)
	{
		pVF = pVF2;
	}

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
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
