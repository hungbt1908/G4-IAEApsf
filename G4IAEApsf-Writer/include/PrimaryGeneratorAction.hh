#ifndef PrimaryGeneratorAction_h
#define PrimaryGeneratorAction_h 1

#include "G4VUserPrimaryGeneratorAction.hh"
#include "G4ParticleGun.hh"
#include "G4ParticleTable.hh"
#include "G4ParticleDefinition.hh"
#include "G4SystemOfUnits.hh"
#include "G4ios.hh"
#include "G4Event.hh"
#include "G4ParticleGun.hh"
#include "Randomize.hh"

class PrimaryGeneratorAction : public G4VUserPrimaryGeneratorAction
{
public:
	PrimaryGeneratorAction();    
    ~PrimaryGeneratorAction();

public:
    virtual void GeneratePrimaries(G4Event*);       

private:
    void GenerateFromRandom();
	G4ParticleGun *particleGun;
};

#endif
