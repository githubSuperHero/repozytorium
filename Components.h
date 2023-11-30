#pragma once
#include "BaseComponent.h"
#include "Mediator.h"
/**
* Concrete Components implement various functionality. They don't depend on
* other components. They also don't depend on any concrete mediator classes.
*/
class Component1 : public BaseComponent {
public:
	void DoA();
	void DoB();
};

class Component2 : public BaseComponent {
public:
	void DoC();
	void DoD();
};