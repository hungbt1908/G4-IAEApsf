#include "PrimaryGeneratorAction.hh"

#include "G4ParticleGun.hh"
#include "G4ParticleTable.hh"
#include "G4ParticleDefinition.hh"
#include "G4SystemOfUnits.hh"
#include "G4ios.hh"
#include "G4Event.hh"
#include "Randomize.hh"
#include "G4IAEAphspReader.hh"

PrimaryGeneratorAction::PrimaryGeneratorAction()
{
    G4String fileName = "test";

    theIAEAReader = new G4IAEAphspReader(fileName);
    // phase-space plane shift
    // G4ThreeVector psfShift(0., 0.,-17.7671*cm);//lespace de phase est 
    //theIAEAReader->SetGlobalPhspTranslation(psfShift);
    // theIAEAReader->SetTimesRecycled(0);
}

PrimaryGeneratorAction::~PrimaryGeneratorAction()
{
  	if (theIAEAReader) delete theIAEAReader;
   // delete fPrimaryGeneratorActionMessenger;
}

void PrimaryGeneratorAction::GeneratePrimaries(G4Event* anEvent)
{
    theIAEAReader->GeneratePrimaryVertex(anEvent);
}
