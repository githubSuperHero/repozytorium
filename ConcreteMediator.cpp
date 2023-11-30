#include "ConcreteMediator.h"

void ConcreteMediator::Notify(BaseComponent *sender, std::string event)const{
	if (event == "A") {
		std::cout << "Mediator reacts on A and triggers following operations:\n";
		this->component2_->DoC();
	}
	if (event == "D") {
		std::cout << "Mediator reacts on D and triggers following operations:\n";
		this->component1_->DoB();
		this->component2_->DoC();
	}
}