#pragma once
#ifndef __OFXVEC3FFIELD_RAND_H__
#define __OFXVEC3FFIELD_RAND_H__

#include "ofMain.h"
#include "ofxvec3ffield.h"

class ofxVec3fField_Rand :
	public ofxVec3fField
{
public:
	ofxVec3fField_Rand(float scl = 1.0f);
	virtual ~ofxVec3fField_Rand(void);

	float scl() const { return Scl; }
	void scl(float val) { Scl = val; }

	virtual ofParameterGroup getParamGroup();

protected:
	virtual ofVec3f _getVec( ofPoint Pos );

private:
	ofParameterGroup G;
	ofParameter<float> Scl;	

};


#endif

