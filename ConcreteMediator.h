#pragma once
#include "Components.h"
/**
* Concrete Mediators implement cooperative behavior by coordinating several
* components.
*/
class ConcreteMediator : public Mediator {
private:
	Component1 * component1_;
	Component2 *component2_;

public:
	ConcreteMediator(Component1 *c1, Component2 *c2) : component1_(c1), component2_(c2) {
		this->component1_->set_mediator(this);
		this->component2_->set_mediator(this);
	}
	void Notify(BaseComponent *sender, std::string event) const override;
};