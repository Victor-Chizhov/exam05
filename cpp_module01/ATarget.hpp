#pragma once

#include <iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget {
	
	private:
		std::string _type;

	
	public:
		
		ATarget();
		ATarget(std::string const &type);
		ATarget(ATarget const &copy);
		ATarget& operator=(ATarget const &copy);
		virtual ~ATarget(); //no virtual

		const std::string& getType() const; // no const and ref
		virtual ATarget* clone() const = 0;

		void getHitBySpell(ASpell const &spell) const;

};
