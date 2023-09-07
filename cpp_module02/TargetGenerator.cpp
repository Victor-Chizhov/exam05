#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {}

TargetGenerator::~TargetGenerator() {}

void TargetGenerator::learnTargetType(ATarget* target) {
	if(target)
		generator[target->getType()] = target;
}

void TargetGenerator::forgetTargetType(std::string const &target) {
	if(generator.find(target) != generator.end())
		generator.erase(generator.find(target));

}

ATarget* TargetGenerator::createTarget(std::string const &target) {
	ATarget *tmp = NULL;
	if(generator.find(target) != generator.end())
		tmp = generator[target];
	return tmp;
}
