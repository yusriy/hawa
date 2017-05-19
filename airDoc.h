// airDoc.h : interface of the CAirDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_AIRDOC_H__AF6BC8FC_9BD7_4B50_870A_8BB1D09626B4__INCLUDED_)
#define AFX_AIRDOC_H__AF6BC8FC_9BD7_4B50_870A_8BB1D09626B4__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CAirDoc : public CDocument
{
protected: // create from serialization only
	CAirDoc();
	DECLARE_DYNCREATE(CAirDoc)

private:
	BOOL DOWNWASH;
	BOOL RURAL_URBAN;
	float MIX;
	float HEIGHTREF;
	float PA;
	float TA;
	float U;
	float WD;
	float TIME;
	float X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,Y1,Y2,Y3,Y4,Y5,Y6,Y7,Y8,Y9,Y10,Z1,Z2,Z3,Z4,Z5,Z6,Z7,Z8,Z9,Z10;
	int STABILITYCLASS;
	float PRATE;
	//grid data
	int RRING;
	int RAMOUNT;
	float RELEVATION;
	float RLENGTH;
	float MINX;
	float MAXX;
	float MAXY;
	float MINY;
	float BETWEEN;
	//stack 1 data
	BOOL BUILDINGLOCATION1;
	BOOL BUILDINGDOWNWASH1;
	BOOL BUOYANCY1;
	int PLUMERISE1;
	float STACKZ1;
	float STACKX1;
	float STACKY1;
	float BUILDINGHEIGHT1;
	float BUILDINGWIDTH1;
	float DS1;
	
	float Q1;
	
	float STACK1;
	float TS1;
	float VS1;
	float DECAY1;
	BOOL DEPOSITION1;
	float DP1;
	float PP1;
	float SCCOEF1;
	//stack 2 data
	BOOL BUILDINGLOCATION2;
	BOOL BUILDINGDOWNWASH2;
	BOOL BUOYANCY2;
	int PLUMERISE2;
	float STACKZ2;
	float STACKX2;
	float STACKY2;
	float BUILDINGHEIGHT2;
	float BUILDINGWIDTH2;
	float DS2;
	float Q2;
	float STACK2;
	float TS2;
	float VS2;
	float DECAY2;
	BOOL DEPOSITION2;
	float DP2;
	float PP2;
	float SCCOEF2;
	//stack 3 data
	BOOL BUILDINGLOCATION3;
	BOOL BUILDINGDOWNWASH3;
	BOOL BUOYANCY3;
	int PLUMERISE3;
	float STACKZ3;
	float STACKX3;
	float STACKY3;
	float BUILDINGHEIGHT3;
	float BUILDINGWIDTH3;
	float DS3;
	float Q3;
	float STACK3;
	float TS3;
	float VS3;
	float DECAY3;
	BOOL DEPOSITION3;
	float DP3;
	float PP3;
	float SCCOEF3;
	//stack 4 data
	BOOL BUILDINGLOCATION4;
	BOOL BUILDINGDOWNWASH4;
	BOOL BUOYANCY4;
	int PLUMERISE4;
	float STACKZ4;
	float STACKX4;
	float STACKY4;
	float BUILDINGHEIGHT4;
	float BUILDINGWIDTH4;
	float DS4;
	float Q4;
	float STACK4;
	float TS4;
	float VS4;
	float DECAY4;
	BOOL DEPOSITION4;
	float DP4;
	float PP4;
	float SCCOEF4;
	//stack 5 data
	BOOL BUILDINGLOCATION5;
	BOOL BUILDINGDOWNWASH5;
	BOOL BUOYANCY5;
	int PLUMERISE5;
	float STACKZ5;
	float STACKX5;
	float STACKY5;
	float BUILDINGHEIGHT5;
	float BUILDINGWIDTH5;
	float DS5;
	float Q5;
	float STACK5;
	float TS5;
	float VS5;
	float DECAY5;
	BOOL DEPOSITION5;
	float DP5;
	float PP5;
	float SCCOEF5;
	//stack 6 data
	BOOL BUILDINGLOCATION6;
	BOOL BUILDINGDOWNWASH6;
	BOOL BUOYANCY6;
	int PLUMERISE6;
	float STACKZ6;
	float STACKX6;
	float STACKY6;
	float BUILDINGHEIGHT6;
	float BUILDINGWIDTH6;
	float DS6;
	float Q6;
	float STACK6;
	float TS6;
	float VS6;
	float DECAY6;
	BOOL DEPOSITION6;
	float DP6;
	float PP6;
	float SCCOEF6;
	//stack 7 data
	BOOL BUILDINGLOCATION7;
	BOOL BUILDINGDOWNWASH7;
	BOOL BUOYANCY7;
	int PLUMERISE7;
	float STACKZ7;
	float STACKX7;
	float STACKY7;
	float BUILDINGHEIGHT7;
	float BUILDINGWIDTH7;
	float DS7;
	float Q7;
	float STACK7;
	float TS7;
	float VS7;
	float DECAY7;
	BOOL DEPOSITION7;
	float DP7;
	float PP7;
	float SCCOEF7;
	//stack 8 data
	BOOL BUILDINGLOCATION8;
	BOOL BUILDINGDOWNWASH8;
	BOOL BUOYANCY8;
	int PLUMERISE8;
	float STACKZ8;
	float STACKX8;
	float STACKY8;
	float BUILDINGHEIGHT8;
	float BUILDINGWIDTH8;
	float DS8;
	float Q8;
	float STACK8;
	float TS8;
	float VS8;
	float DECAY8;
	BOOL DEPOSITION8;
	float DP8;
	float PP8;
	float SCCOEF8;
	//stack 9 data
	BOOL BUILDINGLOCATION9;
	BOOL BUILDINGDOWNWASH9;
	BOOL BUOYANCY9;
	int PLUMERISE9;
	float STACKZ9;
	float STACKX9;
	float STACKY9;
	float BUILDINGHEIGHT9;
	float BUILDINGWIDTH9;
	float DS9;
	float Q9;
	float STACK9;
	float TS9;
	float VS9;
	float DECAY9;
	BOOL DEPOSITION9;
	float DP9;
	float PP9;
	float SCCOEF9;
	//stack 10 data
	BOOL BUILDINGLOCATION10;
	BOOL BUILDINGDOWNWASH10;
	BOOL BUOYANCY10;
	int PLUMERISE10;
	float STACKZ10;
	float STACKX10;
	float STACKY10;
	float BUILDINGHEIGHT10;
	float BUILDINGWIDTH10;
	float DS10;
	float Q10;
	float STACK10;
	float TS10;
	float VS10;
	float DECAY10;
	BOOL DEPOSITION10;
	float DP10;
	float PP10;
	float SCCOEF10;

// Attributes
public:
	//receptor data
	float GetX1() {return X1;}
	float GetX2() {return X2;}
	float GetX3() {return X3;}
	float GetX4() {return X4;}
	float GetX5() {return X5;}
	float GetX6() {return X6;}
	float GetX7() {return X7;}
	float GetX8() {return X8;}
	float GetX9() {return X9;}
	float GetX10() {return X10;}
	float GetY1() {return Y1;}
	float GetY2() {return Y2;}
	float GetY3() {return Y3;}
	float GetY4() {return Y4;}
	float GetY5() {return Y5;}
	float GetY6() {return Y6;}
	float GetY7() {return Y7;}
	float GetY8() {return Y8;}
	float GetY9() {return Y9;}
	float GetY10() {return Y10;}
	float GetZ1() {return Z1;}
	float GetZ2() {return Z2;}
	float GetZ3() {return Z3;}
	float GetZ4() {return Z4;}
	float GetZ5() {return Z5;}
	float GetZ6() {return Z6;}
	float GetZ7() {return Z7;}
	float GetZ8() {return Z8;}
	float GetZ9() {return Z9;}
	float GetZ10() {return Z10;}
	//grid data
	int GetRRING() {return RRING;}
	float GetRELEVATION() {return RELEVATION;}
	int GetRAMOUNT() {return RAMOUNT;}
	float GetRLENGTH() {return RLENGTH;}
	float GetMINX() {return MINX;}
	float GetMAXX() {return MAXX;}
	float GetMINY() {return MINY;}
	float GetMAXY() {return MAXY;}
	float GetBETWEEN() {return BETWEEN;}
	//stack 1 data
	BOOL GetBUILDINGLOCATION1() {return BUILDINGLOCATION1;}
	BOOL GetBUILDINGDOWNWASH1() {return BUILDINGDOWNWASH1;}
	BOOL GetBUOYANCY1() {return BUOYANCY1;}
	int GetPLUMERISE1()	{return PLUMERISE1;}
	float GetSTACKZ1() {return STACKZ1;}
	float GetBUILDINGHEIGHT1() {return BUILDINGHEIGHT1;}
	float GetBUILDINGWIDTH1() {return BUILDINGWIDTH1;}	
	float GetDS1() {return DS1;}
	float GetQ1() {return Q1;}
	float GetSTACK1() {return STACK1;}
	float GetTS1() {return TS1;}
	float GetVS1() {return VS1;}
	float GetSTACKX1() {return STACKX1;}
	float GetSTACKY1() {return STACKY1;}
	float GetDECAY1() {return DECAY1;}
	float GetDP1() {return DP1;}
	float GetPP1() {return PP1;}
	BOOL GetDEPOSITION1() {return DEPOSITION1;}
	float GetSc1() {return SCCOEF1;}
	//stack 2 data
	BOOL GetBUILDINGLOCATION2() {return BUILDINGLOCATION2;}
	BOOL GetBUILDINGDOWNWASH2() {return BUILDINGDOWNWASH2;}
	BOOL GetBUOYANCY2() {return BUOYANCY2;}
	int GetPLUMERISE2()	{return PLUMERISE2;}
	float GetSTACKZ2() {return STACKZ2;}
	float GetBUILDINGHEIGHT2() {return BUILDINGHEIGHT2;}
	float GetBUILDINGWIDTH2() {return BUILDINGWIDTH2;}	
	float GetDS2() {return DS2;}
	float GetQ2() {return Q2;}
	float GetSTACK2() {return STACK2;}
	float GetTS2() {return TS2;}
	float GetVS2() {return VS2;}
	float GetSTACKX2() {return STACKX2;}
	float GetSTACKY2() {return STACKY2;}
	float GetDECAY2() {return DECAY2;}
	float GetDP2() {return DP2;}
	float GetPP2() {return PP2;}
	BOOL GetDEPOSITION2() {return DEPOSITION2;}
	float GetSc2() {return SCCOEF2;}
	//stack 3 data
	BOOL GetBUILDINGLOCATION3() {return BUILDINGLOCATION3;}
	BOOL GetBUILDINGDOWNWASH3() {return BUILDINGDOWNWASH3;}
	BOOL GetBUOYANCY3() {return BUOYANCY3;}
	int GetPLUMERISE3()	{return PLUMERISE3;}
	float GetSTACKZ3() {return STACKZ3;}
	float GetBUILDINGHEIGHT3() {return BUILDINGHEIGHT3;}
	float GetBUILDINGWIDTH3() {return BUILDINGWIDTH3;}	
	float GetDS3() {return DS3;}
	float GetQ3() {return Q3;}
	float GetSTACK3() {return STACK3;}
	float GetTS3() {return TS3;}
	float GetVS3() {return VS3;}
	float GetSTACKX3() {return STACKX3;}
	float GetSTACKY3() {return STACKY3;}
	float GetDECAY3() {return DECAY3;}
	float GetDP3() {return DP3;}
	float GetPP3() {return PP3;}
	BOOL GetDEPOSITION3() {return DEPOSITION3;}
	float GetSc3() {return SCCOEF3;}
//stack 4 data
	BOOL GetBUILDINGLOCATION4() {return BUILDINGLOCATION4;}
	BOOL GetBUILDINGDOWNWASH4() {return BUILDINGDOWNWASH4;}
	BOOL GetBUOYANCY4() {return BUOYANCY4;}
	int GetPLUMERISE4()	{return PLUMERISE4;}
	float GetSTACKZ4() {return STACKZ4;}
	float GetBUILDINGHEIGHT4() {return BUILDINGHEIGHT4;}
	float GetBUILDINGWIDTH4() {return BUILDINGWIDTH4;}	
	float GetDS4() {return DS4;}
	float GetQ4() {return Q4;}
	float GetSTACK4() {return STACK4;}
	float GetTS4() {return TS4;}
	float GetVS4() {return VS4;}
	float GetSTACKX4() {return STACKX4;}
	float GetSTACKY4() {return STACKY4;}
	float GetDECAY4() {return DECAY4;}
	float GetDP4() {return DP4;}
	float GetPP4() {return PP4;}
	BOOL GetDEPOSITION4() {return DEPOSITION4;}
	float GetSc4() {return SCCOEF4;}
	//stack 5 data
	BOOL GetBUILDINGLOCATION5() {return BUILDINGLOCATION5;}
	BOOL GetBUILDINGDOWNWASH5() {return BUILDINGDOWNWASH5;}
	BOOL GetBUOYANCY5() {return BUOYANCY5;}
	int GetPLUMERISE5()	{return PLUMERISE5;}
	float GetSTACKZ5() {return STACKZ5;}
	float GetBUILDINGHEIGHT5() {return BUILDINGHEIGHT5;}
	float GetBUILDINGWIDTH5() {return BUILDINGWIDTH5;}	
	float GetDS5() {return DS5;}
	float GetQ5() {return Q5;}
	float GetSTACK5() {return STACK5;}
	float GetTS5() {return TS5;}
	float GetVS5() {return VS5;}
	float GetSTACKX5() {return STACKX5;}
	float GetSTACKY5() {return STACKY5;}
	float GetDECAY5() {return DECAY5;}
	float GetDP5() {return DP5;}
	float GetPP5() {return PP5;}
	BOOL GetDEPOSITION5() {return DEPOSITION5;}
	float GetSc5() {return SCCOEF5;}
	//stack 6 data
	BOOL GetBUILDINGLOCATION6() {return BUILDINGLOCATION6;}
	BOOL GetBUILDINGDOWNWASH6() {return BUILDINGDOWNWASH6;}
	BOOL GetBUOYANCY6() {return BUOYANCY6;}
	int GetPLUMERISE6()	{return PLUMERISE6;}
	float GetSTACKZ6() {return STACKZ6;}
	float GetBUILDINGHEIGHT6() {return BUILDINGHEIGHT6;}
	float GetBUILDINGWIDTH6() {return BUILDINGWIDTH6;}	
	float GetDS6() {return DS6;}
	float GetQ6() {return Q6;}
	float GetSTACK6() {return STACK6;}
	float GetTS6() {return TS6;}
	float GetVS6() {return VS6;}
	float GetSTACKX6() {return STACKX6;}
	float GetSTACKY6() {return STACKY6;}
	float GetDECAY6() {return DECAY6;}
	float GetDP6() {return DP6;}
	float GetPP6() {return PP6;}
	BOOL GetDEPOSITION6() {return DEPOSITION6;}
	float GetSc6() {return SCCOEF6;}
	//stack 7 data
	BOOL GetBUILDINGLOCATION7() {return BUILDINGLOCATION7;}
	BOOL GetBUILDINGDOWNWASH7() {return BUILDINGDOWNWASH7;}
	BOOL GetBUOYANCY7() {return BUOYANCY7;}
	int GetPLUMERISE7()	{return PLUMERISE7;}
	float GetSTACKZ7() {return STACKZ7;}
	float GetBUILDINGHEIGHT7() {return BUILDINGHEIGHT7;}
	float GetBUILDINGWIDTH7() {return BUILDINGWIDTH7;}	
	float GetDS7() {return DS7;}
	float GetQ7() {return Q7;}
	float GetSTACK7() {return STACK7;}
	float GetTS7() {return TS7;}
	float GetVS7() {return VS7;}
	float GetSTACKX7() {return STACKX7;}
	float GetSTACKY7() {return STACKY7;}
	float GetDECAY7() {return DECAY7;}
	float GetDP7() {return DP7;}
	float GetPP7() {return PP7;}
	BOOL GetDEPOSITION7() {return DEPOSITION7;}
	float GetSc7() {return SCCOEF7;}
	//stack 8 data
	BOOL GetBUILDINGLOCATION8() {return BUILDINGLOCATION8;}
	BOOL GetBUILDINGDOWNWASH8() {return BUILDINGDOWNWASH8;}
	BOOL GetBUOYANCY8() {return BUOYANCY8;}
	int GetPLUMERISE8()	{return PLUMERISE8;}
	float GetSTACKZ8() {return STACKZ8;}
	float GetBUILDINGHEIGHT8() {return BUILDINGHEIGHT8;}
	float GetBUILDINGWIDTH8() {return BUILDINGWIDTH8;}	
	float GetDS8() {return DS8;}
	float GetQ8() {return Q8;}
	float GetSTACK8() {return STACK8;}
	float GetTS8() {return TS8;}
	float GetVS8() {return VS8;}
	float GetSTACKX8() {return STACKX8;}
	float GetSTACKY8() {return STACKY8;}
	float GetDECAY8() {return DECAY8;}
	float GetDP8() {return DP8;}
	float GetPP8() {return PP8;}
	BOOL GetDEPOSITION8() {return DEPOSITION8;}
	float GetSc8() {return SCCOEF8;}
	//stack 9 data
	BOOL GetBUILDINGLOCATION9() {return BUILDINGLOCATION9;}
	BOOL GetBUILDINGDOWNWASH9() {return BUILDINGDOWNWASH9;}
	BOOL GetBUOYANCY9() {return BUOYANCY9;}
	int GetPLUMERISE9()	{return PLUMERISE9;}
	float GetSTACKZ9() {return STACKZ9;}
	float GetBUILDINGHEIGHT9() {return BUILDINGHEIGHT9;}
	float GetBUILDINGWIDTH9() {return BUILDINGWIDTH9;}	
	float GetDS9() {return DS9;}
	float GetQ9() {return Q9;}
	float GetSTACK9() {return STACK9;}
	float GetTS9() {return TS9;}
	float GetVS9() {return VS9;}
	float GetSTACKX9() {return STACKX9;}
	float GetSTACKY9() {return STACKY9;}
	float GetDECAY9() {return DECAY9;}
	float GetDP9() {return DP9;}
	float GetPP9() {return PP9;}
	BOOL GetDEPOSITION9() {return DEPOSITION9;}
	float GetSc9() {return SCCOEF9;}
	//stack 10 data
	BOOL GetBUILDINGLOCATION10() {return BUILDINGLOCATION10;}
	BOOL GetBUILDINGDOWNWASH10() {return BUILDINGDOWNWASH10;}
	BOOL GetBUOYANCY10() {return BUOYANCY10;}
	int GetPLUMERISE10()	{return PLUMERISE10;}
	float GetSTACKZ10() {return STACKZ10;}
	float GetBUILDINGHEIGHT10() {return BUILDINGHEIGHT10;}
	float GetBUILDINGWIDTH10() {return BUILDINGWIDTH10;}	
	float GetDS10() {return DS10;}
	float GetQ10() {return Q10;}
	float GetSTACK10() {return STACK10;}
	float GetTS10() {return TS10;}
	float GetVS10() {return VS10;}
	float GetSTACKX10() {return STACKX10;}
	float GetSTACKY10() {return STACKY10;}
	float GetDECAY10() {return DECAY10;}
	float GetDP10() {return DP10;}
	float GetPP10() {return PP10;}
	BOOL GetDEPOSITION10() {return DEPOSITION10;}
	float GetSc10() {return SCCOEF10;}
	//data data
	BOOL GetDOWNWASH() {return DOWNWASH;}
	BOOL GetRURAL_URBAN() {return RURAL_URBAN;}
	float GetHEIGHTREF() {return HEIGHTREF;}
	float GetPA() {return PA;}
	float GetTA() {return TA;}
	float GetU() {return U;}
	float GetMIX() {return MIX;}
	int GetSTABILITYCLASS() {return STABILITYCLASS;}
	float GetWD() {return WD;}
	float GetTIME() {return TIME;}
	float GetPrate() {return PRATE;}
// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAirDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:	
	double concentrationgrid(int,int);
	void changeradius(int,int, double&, double&);
	double tita(int);
	double radius(int);
	double decay10(double);
	double decay9(double);
	double decay8(double);
	double decay7(double);
	double decay6(double);
	double decay5(double);
	double decay4(double);
	double decay3(double);
	double decay2(double);
	double decay1(double);
	double windchange10();
	double windchange9();
	double windchange8();
	double windchange7();
	double windchange6();
	double windchange5();
	double windchange4();
	double Vertical10(double,double);
	double Vertical9(double,double);
	double Vertical8(double,double);
	double Vertical7(double,double);
	double Vertical6(double,double);
	double Vertical5(double,double);
	double Vertical4(double,double);
	double StackHeight10(double);
	double StackHeight9(double);
	double StackHeight8(double);
	double StackHeight7(double);
	double StackHeight6(double);
	double StackHeight5(double);
	double StackHeight4(double);
	void SchulmanScire10(double,double&,double&);
	void SchulmanScire9(double,double&,double&);
	void SchulmanScire8(double,double&,double&);
	void SchulmanScire7(double,double&,double&);
	void SchulmanScire6(double,double&,double&);
	void SchulmanScire5(double,double&,double&);
	void SchulmanScire4(double,double&,double&);
	double SchulmanPlumeRise10(double);
	double SchulmanPlumeRise9(double);
	double SchulmanPlumeRise8(double);
	double SchulmanPlumeRise7(double);
	double SchulmanPlumeRise6(double);
	double SchulmanPlumeRise5(double);
	double SchulmanPlumeRise4(double);
	double RootFunction10(double);
	double RootFunction9(double);
	double RootFunction8(double);
	double RootFunction7(double);
	double RootFunction6(double);
	double RootFunction5(double);
	double RootFunction4(double);
	void HuberSnyder10(double,double&,double&);
	void HuberSnyder9(double,double&,double&);
	void HuberSnyder8(double,double&,double&);
	void HuberSnyder7(double,double&,double&);
	void HuberSnyder6(double,double&,double&);
	void HuberSnyder5(double,double&,double&);
	void HuberSnyder4(double,double&,double&);
	double function10(double,double);
	double function9(double,double);
	double function8(double,double);
	double function7(double,double);
	double function6(double,double);
	double function5(double,double);
	double function4(double,double);
	double DistanceY10(double,double);
	double DistanceY9(double,double);
	double DistanceY8(double,double);
	double DistanceY7(double,double);
	double DistanceY6(double,double);
	double DistanceY5(double,double);
	double DistanceY4(double,double);
	double DistanceX10(double,double);
	double DistanceX9(double,double);
	double DistanceX8(double,double);
	double DistanceX7(double,double);
	double DistanceX6(double,double);
	double DistanceX5(double,double);
	double DistanceX4(double,double);
	double concentration10(double,double,double);
	double concentration9(double,double,double);
	double concentration8(double,double,double);
	double concentration7(double,double,double);
	double concentration6(double,double,double);
	double concentration5(double,double,double);
	double concentration4(double,double,double);
	void Buoyancy10(double,double&,double&);
	void Buoyancy9(double,double&,double&);
	void Buoyancy8(double,double&,double&);
	void Buoyancy7(double,double&,double&);
	void Buoyancy6(double,double&,double&);
	void Buoyancy5(double,double&,double&);
	void Buoyancy4(double,double&,double&);
	double Receptor10();
	double time(double);
	double Receptor9();
	double Receptor8();
	double Receptor7();
	double Receptor6();
	double Receptor5();
	double Receptor4();
	double Receptor3();
	double Receptor2();
	double Receptor1();
	double DistanceY3(double,double);
	double DistanceY2(double,double);
	double DistanceY1(double,double);
	double DistanceX3(double,double);
	double DistanceX2(double,double);
	double DistanceX1(double,double);
	double concentration3(double,double,double);
	double concentration2(double,double,double);
	double concentration1(double,double,double);
	double fPrime(double);
	double RootFunction3(double);
	double RootFunction2(double);
	double RootFunction1(double);
	double function3(double,double);
	double function2(double,double);
	double function1(double,double);	
	double primeSchulmanFunction(double,long double,long double);
	double fSchulmanFunction(double,long double,long double,long double);
	double SchulmanFunction(long double,long double,long double);
	double SchulmanPlumeRise3(double);
	double SchulmanPlumeRise2(double);	
	double SchulmanPlumeRise1(double);
	double Vertical3(double,double);
	double Vertical2(double,double);
	double Vertical1(double,double);
	void SchulmanScire3(double,double&,double&);
	void SchulmanScire2(double,double&,double&);
	void SchulmanScire1(double,double&,double&);
	void HuberSnyder3(double,double&,double&);
	void HuberSnyder2(double,double&,double&);
	void HuberSnyder1(double,double&,double&);
	void VirtualDistanceY(double&,double&);
	void VirtualDistanceZ(double,double&,double&);
	void Buoyancy3(double,double&,double&);
	void Buoyancy2(double,double&,double&);
	void Buoyancy1(double,double&,double&);
	double StackHeight3(double);
	double StackHeight2(double);
	double StackHeight1(double);
	double windchange3();
	double windchange2();
	double windchange1();
	double SigmaZ(double);
	double SigmaY(double);
	virtual ~CAirDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CAirDoc)
	afx_msg void OnDataData();
	afx_msg void OnReceptorReceptorlocation();
	afx_msg void OnStack1Stack1data();
	afx_msg void OnStack2Stack2data();
	afx_msg void OnStack3Stack3data();
	afx_msg void OnStack4Stack4data();
	afx_msg void OnStack5Stack5data();
	afx_msg void OnStack6Stack6data();
	afx_msg void OnStack7Stack7data();
	afx_msg void OnStack8Stack8data();
	afx_msg void OnStack9Stack9data();
	afx_msg void OnStack10Stack10data();
	afx_msg void OnReceptorgridGrid();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
public:
	double concentrationmatlab(float, float);
	double concentrationstack1(void);
	double concentrationstack2(void);
	double concentrationstack3(void);
	double concentrationstack4(void);
	double concentrationstack5(void);
	double concentrationstack6(void);
	double concentrationstack7(void);
	double concentrationstack8(void);
	double concentrationstack9(void);
	double concentrationstack10(void);
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_AIRDOC_H__AF6BC8FC_9BD7_4B50_870A_8BB1D09626B4__INCLUDED_)
