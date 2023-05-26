#ifndef RunActionMaster_h
#define RunActionMaster_h 1

#include "G4UserRunAction.hh"
#include "globals.hh"

class RunActionMaster : public G4UserRunAction 
{
public:
    RunActionMaster();
    ~RunActionMaster();

    virtual G4Run* GenerateRun();
    virtual void BeginOfRunAction(const G4Run* arun);
    virtual void EndOfRunAction(const G4Run* arun);
};

#endif
