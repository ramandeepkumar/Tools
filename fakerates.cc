#include "TFile.h"
#include "TH2.h"
#include "CMS2.h"
#include "selections.h"

static TFile *el_fakeRateFile_v2_2 = TFile::Open("data/fakeRates-v2_2_allpt.root", "read"); 
static TH2F  *el_fakeRate_v2_2 = dynamic_cast<TH2F *>(el_fakeRateFile_v2_2->Get("fakeRate_wo_leading_elt_qcd"));

static TFile *el_fakeRateFile_v5 = TFile::Open("data/fakeRates-v5_5.root", "read"); 
static TH2F  *el_fakeRate_v5 = dynamic_cast<TH2F *>(el_fakeRateFile_v5->Get("fakeRateTemplate_wo_leading_elt_fakeRatesFull"));
static TH2F  *el_fakeRate_err_v5 = dynamic_cast<TH2F *>(el_fakeRateFile_v5->Get("fakeRateTemplateError_wo_leading_elt_fakeRatesFull"));

double elFakeProb_v2_2 (int i_el, int add_error_times)
{
     float prob = 0.0;
     float prob_error = 0.0;
     TH2F *theFakeRate = el_fakeRate_v2_2;
     // cut definition
     prob = theFakeRate->GetBinContent(theFakeRate->FindBin(cms2.els_p4()[i_el].Eta(),cms2.els_p4()[i_el].Pt()));
     prob_error =
	  theFakeRate->GetBinError(theFakeRate->FindBin(cms2.els_p4()[i_el].Eta(),cms2.els_p4()[i_el].Pt()));
     
     if (prob>1.0 || prob<0.0) {
	  std::cout<<"ERROR FROM FAKE RATE!!! prob = " << prob << std::endl;
     }
     if (prob==0.0){
	  std::cout<<"ERROR FROM FAKE RATE!!! prob = " << prob
		   <<" for Et = " <<cms2.els_p4()[i_el].Pt()
		   <<" and Eta = " <<cms2.els_p4()[i_el].Eta()
		   << std::endl;
     }
     return prob+add_error_times*prob_error;
}

// Is the i-th electron in the electron block a fakeable object?
// For now: return true
bool isFakeable_v2_2 (int i_el) {
     //
     // returns true if input fulfills certain cuts
     //
     
     // cut definition
     float et_cut        = 0.;
     float pt_cut        = 15.;
     float eta_cut       = 2.5;
     //   float tkIso_cut     = 10.; // was 50
     float iso_ratio_cut = 0.92; //
     float eOverP_cut    = 999999.99;
     float hOverE_cut    = 0.2;
     
     float iso_ratio = 0.0;
     
     if( (cms2.els_p4()[i_el].Pt()+cms2.els_tkIso()[i_el]) > 0.0 ) 
	  iso_ratio = cms2.els_p4()[i_el].Pt()/(cms2.els_p4()[i_el].Pt()+cms2.els_tkIso()[i_el]);
     else iso_ratio = 0.0; // reject events with 0 momentum - do we have thses at all?
	  
     bool result = true;
     
     if (cms2.els_closestMuon().at(i_el) != -1)		result = false;
     if ( cms2.els_ESc()[i_el]      < et_cut )                 result = false;
     if ( cms2.els_p4()[i_el].Pt()  < pt_cut )                 result = false;
     if ( std::abs(cms2.els_p4()[i_el].Eta()) > eta_cut )      result = false;
     //   // previous iso requirement, use this OR the one below!
     //   if ( cms2.els_tkIso()[i_el]    > tkIso_cut )              result = false;
     //new isolation requirement
     if ( iso_ratio               < iso_ratio_cut )          result = false;
     if ( cms2.els_eOverPIn()[i_el] > eOverP_cut )             result = false;
     if ( cms2.els_hOverE()[i_el]   > hOverE_cut )             result = false;
     
     return result;
}

bool isNumeratorElectron_v2_2 (int index, int type) { // 0=loose, 1=tight, for pass4: 1=loose, 2=tight
     //
     // returns true if input fulfills certain cuts
     //
     
     // cut definition
     float et_cut        = 0.;
     float pt_cut        = 15;
     float eta_cut       = 2.5;
     //   float tkIso_cut     = 5.;
     //isolation requirement
     float iso_ratio_cut = 0.92; // use alternatively to iso cut above
     float eOverP_cut    = 999999.99;
     //float eOverP_cut   = 3.;
     float hOverE_cut    = 0.2;
     float d0_cut        = 0.025;

     float iso_ratio =
	  cms2.els_p4()[index].Pt()/(cms2.els_p4()[index].Pt()+cms2.els_tkIso()[index]);
     
     unsigned int njets_cut        = 1;  // require at least N jets
     //  float HLT_jet_approx = 30.0; // require leading jet to be larger than N GeV v2_3
     //  float HLT_jet_approx = 60.0; // require leading jet to be larger than N GeV v2_4
     //  float HLT_jet_approx = 90.0; // require leading jet to be larger than N GeV v2_5
//      float HLT_jet_approx = 120.0; // require leading jet to be larger than N GeV v2_6
     //  float HLT_dijet_approx = 15.0; // require leading dijet to be larger than N=(et1+et2)/2 GeV
     
     bool result = true;
     
     if (cms2.els_closestMuon().at(index) != -1)		result = false;
     if (cms2.evt_njets() < njets_cut)                              result = false;
//      if ( jets_p4->at(0).Pt() < HLT_jet_approx )             result = false;
     //  if ( (jets_p4->at(0).Pt()+jets_p4->at(1).Pt())/2. < HLT_jet_approx )     result = false; // hmm! did not require a jet to be preset in the first case..
     
     if ( cms2.els_ESc()[index]      < et_cut )                 result = false;
     if ( cms2.els_p4()[index].Pt()  < pt_cut )                 result = false;
     if ( std::abs(cms2.els_p4()[index].Eta()) > eta_cut )      result = false;
     //   // previous iso requirement, use this OR the one below!
     //   if ( els_tkIso->at(index)    > tkIso_cut )              result = false;
     //new isolation requirement
     if ( iso_ratio               < iso_ratio_cut )          result = false;
     if ( cms2.els_eOverPIn()[index] > eOverP_cut )             result = false;
     if ( cms2.els_hOverE()[index]   > hOverE_cut )             result = false;
     // add additional cleaning cuts (from FKW) 080324
     if ( std::abs(cms2.els_d0()[index])  > d0_cut )            result = false;
     
     /*
       bool IdCuts = cut_verysimple(els_dEtaIn->at(index),
       els_dPhiIn->at(index),
       els_hOverE->at(index),
       els_eSeedOverPOut->at(index),
       els_sigmaEtaEta->at(index),
       els_p4->at(index).Eta());
     */
     
     /*
       bool IdCuts = electron_selection(index, type);
       if (!IdCuts) result = false;
     */
     
     // _pass4 has 3 types - 0=robust, 1=loose, 2=tight
     // - need to adjust in all places here
     bool IdCuts = cms2.els_tightId()[index];
     if (!IdCuts) result = false;
     
     return result;
}

double elFakeProb_v5 (int i_el, int add_error_times)
{
     float prob = 0.0;
     float prob_error = 0.0;
     TH2F *theFakeRate = el_fakeRate_v5;
     TH2F *theFakeRateErr = el_fakeRate_err_v5;
     // cut definition
     prob = theFakeRate->GetBinContent(theFakeRate->FindBin(cms2.els_p4()[i_el].Eta(),cms2.els_p4()[i_el].Pt()));
     prob_error =
	  theFakeRateErr->GetBinContent(theFakeRateErr->FindBin(cms2.els_p4()[i_el].Eta(),cms2.els_p4()[i_el].Pt()));
     
     if (prob>1.0 || prob<0.0) {
	  std::cout<<"ERROR FROM FAKE RATE!!! prob = " << prob << std::endl;
     }
     if (prob==0.0){
	  std::cout<<"ERROR FROM FAKE RATE!!! prob = " << prob
		   <<" for Et = " <<cms2.els_p4()[i_el].Pt()
		   <<" and Eta = " <<cms2.els_p4()[i_el].Eta()
		   << std::endl;
     }
     return prob+add_error_times*prob_error;
}

bool isFakeDenominatorElectron_v5 (int index) 
{
  //
  // returns true if input fulfills certain cuts
  //

  // cut definition
  float pt_cut        		= 15.;
  float eta_cut       		= 2.5;
  float hOverE_cut    		= 0.2;
  bool  use_calo_iso            = false;

  bool result = true;

  if (cms2.els_closestMuon().at(index) != -1)		result = false;
  if ( cms2.els_p4()[index].Pt()  < pt_cut )            result = false;
  if ( std::abs(cms2.els_p4()[index].Eta()) > eta_cut ) result = false;
  if ( !passElectronIsolation(index,use_calo_iso) )          	result = false;
  //  if ( !passElectronIsolationLoose(index,true) )          	result = false; //v5_2
  if ( !passElectronIsolationLoose2(index,true) )          	result = false; //v5_4
  if ( cms2.els_hOverE()[index]   > hOverE_cut )        result = false;

  return result;

}

bool isFakeNumeratorElectron_v5 (int index, int type) 
{ 
  //
  // 1=loose, 2=tight
  //
  // returns true if input fulfills certain cuts
  //
  
  // cut definition
  float pt_cut        		= 15;
  float eta_cut       		= 2.5;
  bool  use_calo_iso            = true;

  bool result = true;

  if (cms2.els_closestMuon().at(index) != -1)		result = false;
  if ( cms2.els_p4()[index].Pt()  < pt_cut )                 result = false;
  if ( std::abs(cms2.els_p4()[index].Eta()) > eta_cut )      result = false;
  if ( !passElectronIsolation(index,use_calo_iso) )          	result = false;
  if ( type == 1 ) {
    // loose
    if ( !goodLooseElectronWithoutIsolation(index) )   result = false;
  } else if ( type == 2 ) {
    // tight
    if ( !goodElectronWithoutIsolation(index) )   result = false;
  } else {
    cout << "WARNING: wrong electron type detected, please select loose (1) or tight (2)" << endl;
  }

  return result;
  
}

#define USE_V5

bool isFakeable (int i_el)
{
#ifndef USE_V5
     return isFakeable_v2_2(i_el);
#else
     return isFakeDenominatorElectron_v5(i_el);
#endif
}

double elFakeProb (int i_el, int add_error_times)
{
#ifndef USE_V5
     return elFakeProb_v2_2(i_el, add_error_times);
#else
//      printf("fake rate: %f\n", elFakeProb_v2_2(i_el, add_error_times));
     return elFakeProb_v5(i_el, add_error_times);
#endif
}

bool isNumeratorElectron (int index, int type)
{
#ifndef USE_V5
     return isNumeratorElectron_v2_2(index, type);
#else
     return isFakeNumeratorElectron_v5(index, 2);
#endif
}

const TH2F &fakeRate ()
{
#ifndef USE_V5
     return *el_fakeRate_v2_2;
#else
     return *el_fakeRate_v5;
#endif
}
