// -*- C++ -*-
#ifndef SAMPLE_H
#define SAMPLE_H

#include <string>

enum Process { WW, WZ, ZZ, Wjets, DYee, DYmm, DYtt, DY, Wgamma, Zgamma, ttbar, tW, 
	       LM1, LM2, LM3, LM4, LM5, LM6, LM7, LM8, LM9, LM10, LM11,
	       InclusiveMu5Pt50, InclusiveMuPt15, 
	       QCDBCtoEPt20to30, QCDBCtoEPt30to80, QCDBCtoEPt80to170, 
	       QCDEMenrichedPt20to30, QCDEMenrichedPt30to80, QCDEMenrichedPt80to170, QCDpt30};

class TChain;
// struct that contains all the necessary information about a sample
class Sample {
public:
     TChain 		*chain;
     enum Process 	process;
     int		histo_color;
     double		kFactor;
     std::string	name;
     bool               sm;
};

// helper functions that provide samples from their default locations
// (takes the guesswork out of data access...)
Sample fWW	();
Sample fWZ	();
// Sample fWZ_incl	();
Sample fZZ	();
Sample fWjets	();
Sample fWc	();
Sample fDYee 	();
Sample fDYmm 	();
Sample fDYtt 	();
Sample fVlqq	();
Sample fVlqq	();
Sample fAstar	();
Sample fDY20tt	();
Sample fWgamma	();
Sample fZgamma	();
Sample fttbar	();
Sample fttbar_taula	();
Sample ftW	();
Sample fSingleTop_tChannel	();
Sample fSingleTop_sChannel	();
Sample fLM1     ();
Sample fLM2     ();
Sample fLM3     ();
Sample fLM4     ();
Sample fLM5     ();
Sample fLM6     ();
Sample fLM7     ();
Sample fLM8     ();
Sample fLM9     ();
Sample fLM10    ();
Sample fLM11    ();

// QCD samples
Sample fInclusiveMu5Pt50	();
Sample fInclusiveMuPt15	        ();
Sample fQCDBCtoEPt20to30	();
Sample fQCDBCtoEPt30to80	();
Sample fQCDBCtoEPt80to170	();
Sample fQCDEMenrichedPt20to30	();
Sample fQCDEMenrichedPt30to80	();
Sample fQCDEMenrichedPt80to170  ();
Sample fQCDpt30  ();


// filter events by process
bool filterByProcess (enum Process sample);

#endif
