#include "DetectorConstruction.hh"

#include "G4NistManager.hh"
#include "G4Element.hh"
#include "G4Material.hh"
#include "G4VisAttributes.hh"

#include "G4Box.hh"
#include "G4LogicalVolume.hh"
#include "G4VPhysicalVolume.hh"
#include "G4PVPlacement.hh"

#include "G4SystemOfUnits.hh"
#include "G4RotationMatrix.hh"
#include "G4ThreeVector.hh"

DetectorConstruction::DetectorConstruction()
: G4VUserDetectorConstruction()
{}

DetectorConstruction::~DetectorConstruction()
{}

G4VPhysicalVolume *DetectorConstruction::Construct()
{
	DefineMaterial();
	return ConstructVolume();
}

void DetectorConstruction::DefineMaterial()
{
	G4NistManager* nist = G4NistManager::Instance();
	Air = nist->FindOrBuildMaterial("G4_AIR");

	G4cout << *(G4Material::GetMaterialTable()); 
}

G4VPhysicalVolume* DetectorConstruction::ConstructVolume()
{
	// World volume
	solidWorld = new G4Box("solidWorld", 150 * cm, 150 * cm, 200 * cm);
	logicWorld = new G4LogicalVolume(solidWorld, Air, "logicWorld");
	physWorld = new G4PVPlacement(0, G4ThreeVector(), 
								logicWorld, 
								"physWorld", 
								0, false, 0, checkOverlap);
	return physWorld;
}
