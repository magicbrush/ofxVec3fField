#include "ofxVec3fField_Radial.h"



ofxVec3fField_Radial::ofxVec3fField_Radial(
	float k/*=1.0f*/,
	float p)
{
	K.set("K",k,-100.0f,100.0f);
	P.set("P",p,-10.0f,10.0f);
}

ofxVec3fField_Radial::~ofxVec3fField_Radial()
{

}

ofVec3f ofxVec3fField_Radial::_getVec( ofPoint Pos )
{
	ofVec3f Vec = K*Pos/pow(Pos.length(),P);
	return Vec;
}

ofParameterGroup ofxVec3fField_Radial::getParamGroup()
{
	G.clear();
	G.add(K);
	G.add(P);
	return G;
}

