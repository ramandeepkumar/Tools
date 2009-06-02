///////////////////////////////////////////////////
// Jake says "Let there be no warnings."         //
// Jake dit: "Qu'il n'aura pas d'avertissement." //
///////////////////////////////////////////////////
#pragma link off all globals;
#pragma link off all classes;
#pragma link off all functions;

#pragma includepath "$ROOTSYS/include"
#include "Math/LorentzVector.h"
#include <vector>

// for CMS2 classes
#pragma link C++ class edm::Wrapper<TString>;
#pragma link C++ class edm::Wrapper<double>;
#pragma link C++ class edm::Wrapper<float>;
#pragma link C++ class edm::Wrapper<int>;
#pragma link C++ class edm::Wrapper<unsigned int>;
#pragma link C++ class edm::Wrapper<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> > >;
#pragma link C++ class edm::Wrapper<ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> >;
#pragma link C++ class edm::Wrapper<vector<TString,allocator<TString> > >;
#pragma link C++ class edm::Wrapper<vector<double,allocator<double> > >;
#pragma link C++ class edm::Wrapper<vector<float,allocator<float> > >;
#pragma link C++ class edm::Wrapper<vector<int,allocator<int> > >;
#pragma link C++ class edm::Wrapper<vector<unsigned int,allocator<unsigned int> > >;
#pragma link C++ class edm::Wrapper<vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> >,allocator<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> > > > >;
#pragma link C++ class edm::Wrapper<vector<ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag>,allocator<ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> > > >;
#pragma link C++ class edm::Wrapper<vector<vector<TString,allocator<TString> >,allocator<vector<TString,allocator<TString> > > > >;
#pragma link C++ class edm::Wrapper<vector<vector<double,allocator<double> >,allocator<vector<double,allocator<double> > > > >;
#pragma link C++ class edm::Wrapper<vector<vector<float,allocator<float> >,allocator<vector<float,allocator<float> > > > >;
#pragma link C++ class edm::Wrapper<vector<vector<int,allocator<int> >,allocator<vector<int,allocator<int> > > > >;
#pragma link C++ class edm::Wrapper<vector<vector<unsigned int,allocator<unsigned int> >,allocator<vector<unsigned int,allocator<unsigned int> > > > >;
#pragma link C++ class edm::Wrapper<vector<vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> >,allocator<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> > > >,allocator<vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> >,allocator<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> > > > > > >;
#pragma link C++ class edm::Wrapper<vector<vector<ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag>,allocator<ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> > >,allocator<vector<ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag>,allocator<ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> > > > > >;

namespace edm {
typedef Wrapper<vector<TString,allocator<TString> > > Wrapper<vector<TString> >;
typedef Wrapper<vector<double,allocator<double> > > Wrapper<vector<double> >;
typedef Wrapper<vector<float,allocator<float> > > Wrapper<vector<float> >;
typedef Wrapper<vector<int,allocator<int> > > Wrapper<vector<int> >;
typedef Wrapper<vector<unsigned int,allocator<unsigned int> > > Wrapper<vector<unsigned int> >;
typedef Wrapper<vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> >,allocator<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> > > > > Wrapper<vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> > > >;
typedef Wrapper<vector<ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag>,allocator<ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> > > > Wrapper<vector<ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> > >;
typedef Wrapper<vector<vector<TString,allocator<TString> >,allocator<vector<TString,allocator<TString> > > > > Wrapper<vector<vector<TString> > >;
typedef Wrapper<vector<vector<double,allocator<double> >,allocator<vector<double,allocator<double> > > > > Wrapper<vector<vector<double> > >;
typedef Wrapper<vector<vector<float,allocator<float> >,allocator<vector<float,allocator<float> > > > > Wrapper<vector<vector<float> > >;
typedef Wrapper<vector<vector<int,allocator<int> >,allocator<vector<int,allocator<int> > > > > Wrapper<vector<vector<int> > >;
typedef Wrapper<vector<vector<unsigned int,allocator<unsigned int> >,allocator<vector<unsigned int,allocator<unsigned int> > > > > Wrapper<vector<vector<unsigned int> > >;
typedef Wrapper<vector<vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> >,allocator<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> > > >,allocator<vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> >,allocator<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> > > > > > > Wrapper<vector<vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> > > > >;
typedef Wrapper<vector<vector<ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag>,allocator<ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> > >,allocator<vector<ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag>,allocator<ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> > > > > > Wrapper<vector<vector<ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> > > >;};

#pragma link C++ typedef edm::Wrapper<vector<TString> >;
#pragma link C++ typedef edm::Wrapper<vector<double> >;
#pragma link C++ typedef edm::Wrapper<vector<float> >;
#pragma link C++ typedef edm::Wrapper<vector<int> >;
#pragma link C++ typedef edm::Wrapper<vector<unsigned int> >;
#pragma link C++ typedef edm::Wrapper<vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> > > >;
#pragma link C++ typedef edm::Wrapper<vector<ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> > >;
#pragma link C++ typedef edm::Wrapper<vector<vector<TString> > >;
#pragma link C++ typedef edm::Wrapper<vector<vector<double> > >;
#pragma link C++ typedef edm::Wrapper<vector<vector<float> > >;
#pragma link C++ typedef edm::Wrapper<vector<vector<int> > >;
#pragma link C++ typedef edm::Wrapper<vector<vector<unsigned int> > >;
#pragma link C++ typedef edm::Wrapper<vector<vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> > > > >;
#pragma link C++ typedef edm::Wrapper<vector<vector<ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> > > >;

// for DataFormats/Common and DataFormats/Provenance
#pragma link C++ class edm::EventAuxiliary+;
#pragma link C++ class edm::EDProduct+;
#pragma link C++ class edm::ProductRegistry+;
#pragma link C++ class edm::FileFormatVersion+;
#pragma link C++ class edm::BranchChildren+;
#pragma link C++ class edm::FileID+;
#pragma link C++ class edm::FileIndex+;
#pragma link C++ class edm::FileIndex::Element+;
#pragma link C++ class edm::Hash<0>+;
#pragma link C++ class edm::Hash<1>+;
#pragma link C++ class edm::Hash<2>+;
#pragma link C++ class edm::Hash<3>+;
#pragma link C++ class edm::Hash<4>+;
#pragma link C++ class edm::ProcessHistory+;
#pragma link C++ class edm::ProcessConfiguration+;
#pragma link C++ class edm::ModuleDescription+;
#pragma link C++ class edm::ParameterSetBlob+;
#pragma link C++ class edm::BranchKey+;
#pragma link C++ class edm::BranchDescription+;
#pragma link C++ class edm::BranchID+;
#pragma link C++ class edm::ProductID+;
#pragma link C++ class edm::EventEntryDescription+;
#pragma link C++ class edm::EventID+;
#pragma link C++ class edm::Timestamp+;
#pragma link C++ class edm::LuminosityBlockAuxiliary+;
#pragma link C++ class edm::RunAuxiliary+;
#pragma link C++ class edm::History+;
#pragma link C++ class edm::RunID+;
#pragma link C++ class edm::LuminosityBlockID+;
#pragma link C++ class edm::EventEntryInfo+;
#pragma link C++ class edm::EventEntryInfo::Transients+;
#pragma link C++ class edm::FileIndex::Transients+;
#pragma link C++ class edm::ProcessHistory::Transients+;
#pragma link C++ class edm::BranchDescription::Transients+;
#pragma link C++ class edm::ProductRegistry::Transients+;
#pragma link C++ class edm::EventEntryDescription::Transients+;
#pragma link C++ class edm::Transient<edm::EventEntryInfo::Transients>+;
#pragma link C++ class edm::Transient<edm::FileIndex::Transients>+;
#pragma link C++ class edm::Transient<edm::ProcessHistory::Transients>+;
#pragma link C++ class edm::Transient<edm::BranchDescription::Transients>+;
#pragma link C++ class edm::Transient<edm::ProductRegistry::Transients>+;
#pragma link C++ class edm::Transient<edm::EventEntryDescription::Transients>+;