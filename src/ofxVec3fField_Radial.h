#pragma once
#ifndef __OFXVEC3FFIELD_RADIAL_H__
#define __OFXVEC3FFIELD_RADIAL_H__

#include "ofMain.h"
#include "ofxVec3fField.h"

class ofxVec3fField_Radial:
	public ofxVec3fField
{
public:
	ofxVec3fField_Radial(float k=1.0f, float p = 0);
	~ofxVec3fField_Radial();
	float getK() const { return K; }
	void setK(float val) { K = val; }
	virtual ofParameterGroup getParamGroup();

protected:
	virtual ofVec3f _getVec( ofPoint Pos );

private:
	ofParameterGroup G;
	ofParameter<float> K;
	ofParameter<float> P;
	
};

#endif