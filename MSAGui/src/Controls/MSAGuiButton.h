#pragma once

#include "MSAGuiValueControl.h"

namespace MSA {
	
	class GuiButton : public GuiValueControl<bool> {
	public:
		bool			beToggle;
		bool			beenPressed;
		
		GuiButton(string name, bool &value);	
		void setup();
		
		void loadFromXML(ofxXmlSettings &XML);	
		void saveToXML(ofxXmlSettings &XML);
		void keyPressed( int key );
		
		bool getValue();
		void setValue(bool b);
		void toggle();
		
		void setToggleMode(bool b);
		
		void onPress(int x, int y, int button);
		void onRelease(int x, int y, int button);
		void draw(float x, float y);
	};
}