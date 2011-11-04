#include "bTagEff_BTV.h"
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <algorithm>
using namespace std;

double getMisTagRate(double jet_pt, double jet_eta, string algo){

  jet_eta = fabs(jet_eta);
  if(algo == "TCHEM"){
    if (jet_eta < 0.8 ) {
      if (jet_pt < 21) return 0.00640763;
      if (jet_pt < 31) return 0.00891274;
      if (jet_pt < 41) return 0.0113847;
      if (jet_pt < 51) return 0.0138236;
      if (jet_pt < 61) return 0.0162294;
      if (jet_pt < 71) return 0.0186021;
      if (jet_pt < 81) return 0.0209416;
      if (jet_pt < 91) return 0.0232481;
      if (jet_pt < 101) return 0.0255214;
      if (jet_pt < 111) return 0.0277616;
      if (jet_pt < 121) return 0.0299687;
      if (jet_pt < 131) return 0.0321428;
      if (jet_pt < 141) return 0.0342836;
      if (jet_pt < 151) return 0.0363914;
      if (jet_pt < 161) return 0.0384661;
      if (jet_pt < 171) return 0.0405077;
      if (jet_pt < 181) return 0.0425161;
      if (jet_pt < 191) return 0.0444915;
      if (jet_pt < 201) return 0.0464337;
      if (jet_pt < 211) return 0.0483428;
      if (jet_pt < 221) return 0.0502188;
      if (jet_pt < 231) return 0.0520617;
      if (jet_pt < 241) return 0.0538715;
      if (jet_pt < 251) return 0.0556482;
      if (jet_pt < 261) return 0.0573918;
      if (jet_pt < 271) return 0.0591022;
      if (jet_pt < 281) return 0.0607796;
      if (jet_pt < 291) return 0.0624238;
      if (jet_pt < 301) return 0.0640349;
      if (jet_pt < 311) return 0.065613;
      if (jet_pt < 321) return 0.0671579;
      if (jet_pt < 331) return 0.0686697;
      if (jet_pt < 341) return 0.0701484;
      if (jet_pt < 351) return 0.0715939;
      if (jet_pt < 361) return 0.0730064;
      if (jet_pt < 371) return 0.0743857;
      if (jet_pt < 381) return 0.075732;
      if (jet_pt < 391) return 0.0770451;
      if (jet_pt < 401) return 0.0783252;
      if (jet_pt < 411) return 0.0795721;
      if (jet_pt < 421) return 0.0807859;
      if (jet_pt < 431) return 0.0819666;
      if (jet_pt < 441) return 0.0831141;
      if (jet_pt < 451) return 0.0842286;
      if (jet_pt < 461) return 0.08531;
      if (jet_pt < 471) return 0.0863582;
      if (jet_pt < 481) return 0.0873734;
      if (jet_pt < 500) return 0.0883554;
      
    return 0.0;
    }
    if (jet_eta < 1.6) {
      if (jet_pt < 21)  return 0.00663448;
      if (jet_pt < 31)  return 0.00928751;
      if (jet_pt < 41)  return 0.0119401;
      if (jet_pt < 51)  return 0.0145923;
      if (jet_pt < 61)  return 0.017244;
      if (jet_pt < 71)  return 0.0198952;
      if (jet_pt < 81)  return 0.0225461;
      if (jet_pt < 91)  return 0.0251965;
      if (jet_pt < 101)  return 0.0278464;
      if (jet_pt < 111)  return 0.030496;
      if (jet_pt < 121)  return 0.0331451;
      if (jet_pt < 131)  return 0.0357937;
      if (jet_pt < 141)  return 0.0384419;
      if (jet_pt < 151)  return 0.0410897;
      if (jet_pt < 161)  return 0.043737;
      if (jet_pt < 171)  return 0.0463839;
      if (jet_pt < 181)  return 0.0490304;
      if (jet_pt < 191)  return 0.0516764;
      if (jet_pt < 201)  return 0.054322;
      if (jet_pt < 211)  return 0.0569672;
      if (jet_pt < 221)  return 0.0596119;
      if (jet_pt < 231)  return 0.0622562;
      if (jet_pt < 241)  return 0.0649;
      if (jet_pt < 251)  return 0.0675434;
      if (jet_pt < 261)  return 0.0701864;
      if (jet_pt < 271)  return 0.0728289;
      if (jet_pt < 281)  return 0.075471;
      if (jet_pt < 291)  return 0.0781126;
      if (jet_pt < 301)  return 0.0807538;
      if (jet_pt < 311)  return 0.0833946;
      if (jet_pt < 321)  return 0.0860349;
      if (jet_pt < 331)  return 0.0886748;
      if (jet_pt < 341)  return 0.0913143;
      if (jet_pt < 351)  return 0.0939533;
      if (jet_pt < 361)  return 0.0965919;
      if (jet_pt < 371)  return 0.0992301;
      if (jet_pt < 381)  return 0.101868;
      if (jet_pt < 391)  return 0.104505;
      if (jet_pt < 401)  return 0.107142;
      if (jet_pt < 411)  return 0.109778;
      if (jet_pt < 421)  return 0.112414;
      if (jet_pt < 431)  return 0.11505;
      if (jet_pt < 441)  return 0.117685;
      if (jet_pt < 451)  return 0.120319;
      if (jet_pt < 461)  return 0.122954;
      if (jet_pt < 471)  return 0.125587;
      if (jet_pt < 481)  return 0.128221;
      if (jet_pt < 500)  return 0.130854;
      return 0.0;
    }
    if (jet_eta < 2.4) {
      if (jet_pt < 21)  return 0.00697778;
      if (jet_pt < 31)  return 0.00979852;
      if (jet_pt < 41)  return 0.0126362;
      if (jet_pt < 51)  return 0.0154908;
      if (jet_pt < 61)  return 0.0183623;
      if (jet_pt < 71)  return 0.0212508;
      if (jet_pt < 81)  return 0.0241562;
      if (jet_pt < 91)  return 0.0270785;
      if (jet_pt < 101)  return 0.0300177;
      if (jet_pt < 111)  return 0.0329739;
      if (jet_pt < 121)  return 0.035947;
      if (jet_pt < 131)  return 0.0389371;
      if (jet_pt < 141)  return 0.041944;
      if (jet_pt < 151)  return 0.0449679;
      if (jet_pt < 161)  return 0.0480088;
      if (jet_pt < 171)  return 0.0510665;
      if (jet_pt < 181)  return 0.0541412;
      if (jet_pt < 191)  return 0.0572328;
      if (jet_pt < 201)  return 0.0603414;
      if (jet_pt < 211)  return 0.0634668;
      if (jet_pt < 221)  return 0.0666093;
      if (jet_pt < 231)  return 0.0697686;
      if (jet_pt < 241)  return 0.0729449;
      if (jet_pt < 251)  return 0.0761381;
      if (jet_pt < 261)  return 0.0793482;
      if (jet_pt < 271)  return 0.0825752;
      if (jet_pt < 281)  return 0.0858192;
      if (jet_pt < 291)  return 0.0890801;
      if (jet_pt < 301)  return 0.092358;
      if (jet_pt < 311)  return 0.0956528;
      if (jet_pt < 321)  return 0.0989645;
      if (jet_pt < 331)  return 0.102293;
      if (jet_pt < 341)  return 0.105639;
      if (jet_pt < 351)  return 0.109001;
      if (jet_pt < 361)  return 0.112381;
      if (jet_pt < 371)  return 0.115777;
      if (jet_pt < 381)  return 0.11919;
      if (jet_pt < 391)  return 0.12262;
      if (jet_pt < 401)  return 0.126068;
      if (jet_pt < 411)  return 0.129532;
      if (jet_pt < 421)  return 0.133013;
      if (jet_pt < 431)  return 0.136511;
      if (jet_pt < 441)  return 0.140025;
      if (jet_pt < 451)  return 0.143557;
      if (jet_pt < 461)  return 0.147106;
      if (jet_pt < 471)  return 0.150672;
      if (jet_pt < 481)  return 0.154254;
      if (jet_pt < 500)  return 0.157854;
      return 0.0;
    }
  }
  std::cout << "Error: eta > 2.4 value found" << endl;
  return 0.0;
}


double getMisTagRate_Err(double jet_pt, double jet_eta, const string algo){
  
  jet_eta = fabs(jet_eta);
  if(algo == "TCHEM"){
    if (jet_eta < 0.8 ) {
    if (jet_pt < 21) return 0.00145372;
    if (jet_pt < 31) return 0.00202003;
    if (jet_pt < 41) return 0.00257767;
    if (jet_pt < 51) return 0.00312664;
    if (jet_pt < 61) return 0.00366693;
    if (jet_pt < 71) return 0.00419855;
    if (jet_pt < 81) return 0.00472149;
    if (jet_pt < 91) return 0.00523577;
    if (jet_pt < 101) return 0.00574136;
    if (jet_pt < 111) return 0.00623829;
    if (jet_pt < 121) return 0.00672654;
    if (jet_pt < 131) return 0.00720612;
    if (jet_pt < 141) return 0.00767703;
    if (jet_pt < 151) return 0.00813926;
    if (jet_pt < 161) return 0.00859282;
    if (jet_pt < 171) return 0.00903771;
    if (jet_pt < 181) return 0.00947392;
    if (jet_pt < 191) return 0.00990146;
    if (jet_pt < 201) return 0.0103203;
    if (jet_pt < 211) return 0.0107305;
    if (jet_pt < 221) return 0.011132;
    if (jet_pt < 231) return 0.0115249;
    if (jet_pt < 241) return 0.0119091;
    if (jet_pt < 251) return 0.0122846;
    if (jet_pt < 261) return 0.0126514;
    if (jet_pt < 271) return 0.0130095;
    if (jet_pt < 281) return 0.013359;
    if (jet_pt < 291) return 0.0136998;
    if (jet_pt < 301) return 0.014032;
    if (jet_pt < 311) return 0.0143554;
    if (jet_pt < 321) return 0.0146702;
    if (jet_pt < 331) return 0.0149763;
    if (jet_pt < 341) return 0.0152738;
    if (jet_pt < 351) return 0.0155625;
    if (jet_pt < 361) return 0.0158426;
    if (jet_pt < 371) return 0.0161141;
    if (jet_pt < 381) return 0.0163768;
    if (jet_pt < 391) return 0.0166309;
    if (jet_pt < 401) return 0.0168763;
    if (jet_pt < 411) return 0.017113;
    if (jet_pt < 421) return 0.0173411;
    if (jet_pt < 431) return 0.0175604;
    if (jet_pt < 441) return 0.0177712;
    if (jet_pt < 451) return 0.0179732;
    if (jet_pt < 461) return 0.0181666;
    if (jet_pt < 471) return 0.0183512;
    if (jet_pt < 481) return 0.0185273;
    if (jet_pt < 500) return 0.0186946;
    return 0.0;
  }
  if (jet_eta < 1.6) {
    if (jet_pt < 21)  return 0.0014473;
    if (jet_pt < 31)  return 0.00202429;
    if (jet_pt < 41)  return 0.00260017;
    if (jet_pt < 51)  return 0.00317495;
    if (jet_pt < 61)  return 0.00374862;
    if (jet_pt < 71)  return 0.00432118;
    if (jet_pt < 81)  return 0.00489264;
    if (jet_pt < 91)  return 0.00546299;
    if (jet_pt < 101)  return 0.00603223;
    if (jet_pt < 111)  return 0.00660037;
    if (jet_pt < 121)  return 0.00716741;
    if (jet_pt < 131)  return 0.00773334;
    if (jet_pt < 141)  return 0.00829816;
    if (jet_pt < 151)  return 0.00886188;
    if (jet_pt < 161)  return 0.00942449;
    if (jet_pt < 171)  return 0.00998599;
    if (jet_pt < 181)  return 0.0105464;
    if (jet_pt < 191)  return 0.0111057;
    if (jet_pt < 201)  return 0.0116639;
    if (jet_pt < 211)  return 0.012221;
    if (jet_pt < 221)  return 0.0127769;
    if (jet_pt < 231)  return 0.0133318;
    if (jet_pt < 241)  return 0.0138856;
    if (jet_pt < 251)  return 0.0144382;
    if (jet_pt < 261)  return 0.0149898;
    if (jet_pt < 271)  return 0.0155402;
    if (jet_pt < 281)  return 0.0160896;
    if (jet_pt < 291)  return 0.0166378;
    if (jet_pt < 301)  return 0.0171849;
    if (jet_pt < 311)  return 0.017731;
    if (jet_pt < 321)  return 0.0182759;
    if (jet_pt < 331)  return 0.0188197;
    if (jet_pt < 341)  return 0.0193624;
    if (jet_pt < 351)  return 0.019904;
    if (jet_pt < 361)  return 0.0204445;
    if (jet_pt < 371)  return 0.0209839;
    if (jet_pt < 381)  return 0.0215222;
    if (jet_pt < 391)  return 0.0220593;
    if (jet_pt < 401)  return 0.0225954;
    if (jet_pt < 411)  return 0.0231304;
    if (jet_pt < 421)  return 0.0236642;
    if (jet_pt < 431)  return 0.024197;
    if (jet_pt < 441)  return 0.0247286;
    if (jet_pt < 451)  return 0.0252592;
    if (jet_pt < 461)  return 0.0257886;
    if (jet_pt < 471)  return 0.026317;
    if (jet_pt < 481)  return 0.0268442;
    if (jet_pt < 500)  return 0.0273703;
    return 0.0;
  }
  if (jet_eta < 2.4) {
    if (jet_pt < 21)  return 0.00145652;
    if (jet_pt < 31)  return 0.00204542;
    if (jet_pt < 41)  return 0.00263792;
    if (jet_pt < 51)  return 0.00323402;
    if (jet_pt < 61)  return 0.00383371;
    if (jet_pt < 71)  return 0.004437;
    if (jet_pt < 81)  return 0.00504389;
    if (jet_pt < 91)  return 0.00565438;
    if (jet_pt < 101)  return 0.00626846;
    if (jet_pt < 111)  return 0.00688614;
    if (jet_pt < 121)  return 0.00750742;
    if (jet_pt < 131)  return 0.00813229;
    if (jet_pt < 141)  return 0.00876076;
    if (jet_pt < 151)  return 0.00939283;
    if (jet_pt < 161)  return 0.0100285;
    if (jet_pt < 171)  return 0.0106678;
    if (jet_pt < 181)  return 0.0113106;
    if (jet_pt < 191)  return 0.0119571;
    if (jet_pt < 201)  return 0.0126071;
    if (jet_pt < 211)  return 0.0132608;
    if (jet_pt < 221)  return 0.013918;
    if (jet_pt < 231)  return 0.0145789;
    if (jet_pt < 241)  return 0.0152433;
    if (jet_pt < 251)  return 0.0159114;
    if (jet_pt < 261)  return 0.016583;
    if (jet_pt < 271)  return 0.0172582;
    if (jet_pt < 281)  return 0.0179371;
    if (jet_pt < 291)  return 0.0186195;
    if (jet_pt < 301)  return 0.0193055;
    if (jet_pt < 311)  return 0.0199951;
    if (jet_pt < 321)  return 0.0206884;
    if (jet_pt < 331)  return 0.0213852;
    if (jet_pt < 341)  return 0.0220856;
    if (jet_pt < 351)  return 0.0227896;
    if (jet_pt < 361)  return 0.0234972;
    if (jet_pt < 371)  return 0.0242084;
    if (jet_pt < 381)  return 0.0249232;
    if (jet_pt < 391)  return 0.0256416;
    if (jet_pt < 401)  return 0.0263636;
    if (jet_pt < 411)  return 0.0270892;
    if (jet_pt < 421)  return 0.0278184;
    if (jet_pt < 431)  return 0.0285512;
    if (jet_pt < 441)  return 0.0292876;
    if (jet_pt < 451)  return 0.0300276;
    if (jet_pt < 461)  return 0.0307712;
    if (jet_pt < 471)  return 0.0315183;
    if (jet_pt < 481)  return 0.0322691;
    if (jet_pt < 500)  return 0.0330235;
    return 0.0;
  }
  }
  std::cout << "Error: eta > 2.4 value found" << endl;
  return 0.0;
}


double getMisTagSF(double jet_pt, double jet_eta, string algo){

jet_eta = fabs(jet_eta);
if(algo == "TCHEM"){
  if (jet_eta < 0.8 ) {
    if (jet_pt < 51) return 1.25608;
    if (jet_pt < 101) return 1.22715;
    if (jet_pt < 151) return 1.20132;
    if (jet_pt < 201) return 1.1792;
    if (jet_pt < 251) return 1.16143;
    if (jet_pt < 301) return 1.14866;
    if (jet_pt < 351) return 1.14151;
    if (jet_pt < 401) return 1.14061;
    if (jet_pt < 451) return 1.14661;
    if (jet_pt < 501) return 1.16014;
    return 1.0;
  }
  if (jet_eta < 1.6) {
    if (jet_pt < 51)  return 1.23003;
    if (jet_pt < 101)  return 1.18001;
    if (jet_pt < 151)  return 1.14852;
    if (jet_pt < 201)  return 1.13364;
    if (jet_pt < 251)  return 1.1334;
    if (jet_pt < 301)  return 1.14586;
    if (jet_pt < 351)  return 1.16907;
    if (jet_pt < 401)  return 1.20108;
    if (jet_pt < 451)  return 1.23995;
    if (jet_pt < 501)  return 1.28372;
    return 1.0;
  }
  if (jet_eta < 2.4) {
    if (jet_pt < 51)  return 1.1432;
    if (jet_pt < 101)  return 1.11045;
    if (jet_pt < 151)  return 1.11141;
    if (jet_pt < 201)  return 1.13497;
    if (jet_pt < 251)  return 1.17;
    if (jet_pt < 301)  return 1.20541;
    if (jet_pt < 351)  return 1.23008;
    if (jet_pt < 401)  return 1.23289;
    if (jet_pt < 451)  return 1.20275;
    if (jet_pt < 501)  return 1.12852;
    return 1.0;
  }
 }
 std::cout << "Error: eta > 2.4 value found" << endl;
 return 1.0;
}



double getMisTagSF_Err(double jet_pt, double jet_eta, string algo){

  jet_eta = fabs(jet_eta);
  if(algo == "TCHEM"){
    if (jet_eta < 0.8 ) {
      if (jet_pt < 51) return 0.204253;
      if (jet_pt < 101) return 0.183556;
      if (jet_pt < 151) return 0.168762;
      if (jet_pt < 201) return 0.158864;
      if (jet_pt < 251) return 0.152858;
      if (jet_pt < 301) return 0.149741;
      if (jet_pt < 351) return 0.148506;
      if (jet_pt < 401) return 0.148151;
      if (jet_pt < 451) return 0.147669;
      if (jet_pt < 501) return 0.146058;
      return 0.0;
    }
    if (jet_eta < 1.6) {
      if (jet_pt < 51)  return 0.175036;
      if (jet_pt < 101)  return 0.156874;
      if (jet_pt < 151)  return 0.145234;
      if (jet_pt < 201)  return 0.139034;
      if (jet_pt < 251)  return 0.137192;
      if (jet_pt < 301)  return 0.138627;
      if (jet_pt < 351)  return 0.142254;
      if (jet_pt < 401)  return 0.146994;
      if (jet_pt < 451)  return 0.151764;
      if (jet_pt < 501)  return 0.155481;
      return 0.0;
    }
    if (jet_eta < 2.4) {
      if (jet_pt < 51)  return 0.142093;
      if (jet_pt < 101)  return 0.129252;
      if (jet_pt < 151)  return 0.125408;
      if (jet_pt < 201)  return 0.127989;
      if (jet_pt < 251)  return 0.134422;
      if (jet_pt < 301)  return 0.142133;
      if (jet_pt < 351)  return 0.148551;
      if (jet_pt < 401)  return 0.151102;
      if (jet_pt < 451)  return 0.147214;
      if (jet_pt < 501)  return 0.134313;
      return 0.0;
    }
  }
  std::cout << "Error: eta > 2.4 value found" << endl;
  return 0.0;
}

double getBTagSF(double jet_pt, double jet_eta, string algo){
  
  jet_eta = fabs(jet_eta);
  if(algo == "TCHEM"){
    if (jet_eta < 0.8 ) {
      return 0.94;
    }
    if (jet_eta < 1.6) {
    
      return 0.93;
  }
    if (jet_eta < 2.4) {
      
    return 0.93;
    }
  }
  std::cout << "Error: eta > 2.4 value found" << endl;
  return 1.0;
}

double getBTagSF_Err(double jet_pt, double jet_eta, string algo){

  jet_eta = fabs(jet_eta);
  if(algo == "TCHEM"){
    if (jet_eta < 0.8 ) {
      return 0.094;
    }
    if (jet_eta < 1.6) {
      
      return 0.093;
    }
    if (jet_eta < 2.4) {
      
      return 0.093;
    }
  }
  std::cout << "Error: eta > 2.4 value found" << endl;
  return 0.0;
}
