#include "ofxVec3fField_Rand.h"


ofxVec3fField_Rand::ofxVec3fField_Rand(float scl)
{
	Scl.set("Scale",scl,0.01f,10000.0f);
}

ofxVec3fField_Rand::~ofxVec3fField_Rand(void)
{

}

ofVec3f ofxVec3fField_Rand::_getVec( ofPoint Pos )
{
	ofVec3f V(
		ofRandom(-Scl,Scl),
		ofRandom(-Scl,Scl),
		ofRandom(-Scl,Scl));

	return V;
}

ofParameterGroup ofxVec3fField_Rand::getParamGroup()
{
	G.clear();
	G.add(Scl);

	return G;
}
