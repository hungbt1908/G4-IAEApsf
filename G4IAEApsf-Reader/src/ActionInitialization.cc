#include "ActionInitialization.hh"
#include "PrimaryGeneratorAction.hh"

ActionInitialization::ActionInitialization()
{}

ActionInitialization::~ActionInitialization()
{}


void ActionInitialization::Build() const
{
	PrimaryGeneratorAction *generator = new PrimaryGeneratorAction();
	SetUserAction(generator);
}

