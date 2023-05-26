#ifndef DetectorConstruction_h
#define DetectorConstruction_h 1

#include "G4VUserDetectorConstruction.hh"
#include "globals.hh"

class G4Material;
class G4VPhysicalVolume;
class G4Box;
class G4LogicalVolume;
class G4VPhysicalVolume;

class DetectorConstruction : public G4VUserDetectorConstruction
{

public:
	DetectorConstruction();
	~DetectorConstruction();
	
	virtual G4VPhysicalVolume *Construct();
	void DefineMaterial();
	G4VPhysicalVolume* ConstructVolume();
	G4bool checkOverlap = true;

public:
	G4Material* Air;

public:
	G4Box* solidWorld;
	G4LogicalVolume* logicWorld;
	G4VPhysicalVolume* physWorld;
};

#endif
