#ifndef PrimaryGeneratorAction_h
#define PrimaryGeneratorAction_h 1

#include "G4VUserPrimaryGeneratorAction.hh"
#include "globals.hh"

class G4GeneralParticleSource;
class G4Event;
class G4IAEAphspReader;


class PrimaryGeneratorAction : public G4VUserPrimaryGeneratorAction
{
public:
	PrimaryGeneratorAction();    
    virtual ~PrimaryGeneratorAction();

public:
    virtual void GeneratePrimaries(G4Event*);          

private:
    G4IAEAphspReader* theIAEAReader;
};

#endif