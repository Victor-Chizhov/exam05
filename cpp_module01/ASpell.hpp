#pragma once

#include <iostream>

#include "ATarget.hpp"

class ATarget;

class ASpell {
	
	private:
		std::string _name;
		std::string _effects;

	public:

		ASpell();
		ASpell(std::string const &name, std::string const &effects);
		ASpell(ASpell const &copy);
		ASpell& operator=(ASpell const &copy);
		virtual ~ASpell();

		const std::string& getName() const;     // no ref
		const std::string& getEffects() const;	// no ref

		virtual ASpell* clone() const = 0;

		void launch(ATarget const &target) const;


};
