#pragma once
#ifndef __OFXVEC3FFIELD_H__
#define __OFXVEC3FFIELD_H__

#include "ofMain.h"

class ofxVec3fField
{
public:
	ofxVec3fField(
		ofMatrix4x4 preTF = ofMatrix4x4(),
		ofMatrix4x4 postTF = ofMatrix4x4());
	~ofxVec3fField();

	ofMatrix4x4 getPreTrans() const { return PreTrans; }
	void setPreTrans(ofMatrix4x4 val) { PreTrans = val; }
	ofMatrix4x4 getPostTrans() const { return PostTrans; }
	void setPostTrans(ofMatrix4x4 val) { PostTrans = val; }

	ofVec3f getVec(ofPoint Pos);
	virtual ofParameterGroup getParamGroup()=0;
protected:
	virtual ofVec3f _getVec(ofPoint Pos)=0;

private:
	ofMatrix4x4 PreTrans;	
	ofMatrix4x4 PostTrans;
	
};


#endif