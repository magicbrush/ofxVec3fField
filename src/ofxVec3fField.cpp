#include "ofxVec3fField.h"

ofVec3f ofxVec3fField::getVec( ofPoint Pos )
{
	ofPoint P = Pos*PreTrans;
	ofVec3f V = _getVec(P);
	ofVec3f V2 = V*PostTrans;

	return V2;
}

ofxVec3fField::ofxVec3fField(
	ofMatrix4x4 preTF /*= ofMatrix4x4()*/, 
	ofMatrix4x4 postTF /*= ofMatrix4x4()*/ )
{
	PreTrans = preTF;
	PostTrans = postTF;
}

ofxVec3fField::~ofxVec3fField()
{

}


