#include "ATarget.hpp"


ATarget::ATarget() {}

ATarget::ATarget(std::string const &type) {
	_type = type;
}

ATarget::ATarget(ATarget const &copy) {
	*this = copy;
}

ATarget& ATarget::operator=(ATarget const &copy) {
	if (this != &copy)
		_type = copy._type;
	return *this;
}

ATarget::~ATarget() {}


const std::string& ATarget::getType() const {
	return _type;
}

void ATarget::getHitBySpell(ASpell const &spell) const {
	std::cout << _type << " has been " << spell.getEffects() << "!\n";
}
