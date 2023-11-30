#include "Components.h"

void Component1::DoA() {
	std::cout << "Component 1 does A.\n";
	this->mediator_->Notify(this, "A");
}

void Component1::DoB() {
	std::cout << "Component 1 does B.\n";
	this->mediator_->Notify(this, "B");
}

void Component2::DoC() {
	std::cout << "Component 2 does C.\n";
	this->mediator_->Notify(this, "C");
}

void Component2::DoD() {
	std::cout << "Component 2 does D.\n";
	this->mediator_->Notify(this, "D");
}