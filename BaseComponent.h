#pragma once
#include <iostream>
/**
* The Base Component provides the basic functionality of storing a mediator's
* instance inside component objects.
*/

class Mediator;
class BaseComponent {
protected:
	Mediator * mediator_;

public:
	BaseComponent(Mediator *mediator = nullptr) : mediator_(mediator) {
	}
	void set_mediator(Mediator *mediator);
};