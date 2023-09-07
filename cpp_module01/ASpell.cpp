#include "ASpell.hpp"

ASpell::ASpell() {}
ASpell::ASpell(std::string const &name, std::string const &effects) {
	_name = name;
	_effects = effects;
}

ASpell::ASpell(ASpell const &copy) {
	*this = copy;
}

ASpell& ASpell::operator=(ASpell const &copy) {
	if (this != &copy) {
		_name = copy._name;
		_effects = copy._effects;
	}
	return *this;
}


ASpell::~ASpell() {}

const std::string& ASpell::getName() const {
	return _name;
}

const std::string& ASpell::getEffects() const {
	return _effects;
}

void ASpell::launch(ATarget const &target) const {
	target.getHitBySpell(*this);
}
