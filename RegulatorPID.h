#pragma once

#include <iostream>
#include <math.h>
#include <conio.h>
#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>


#define DEBUG

using namespace std;

class RegulatorPID; class ModelARX;

class RegulatorPID {
private:
	double k;
	double ei;
	double Ti;
	double ej;
	double Td;
	double eip;
	ModelARX* ARX = nullptr;
	friend ModelARX;
public:
	double get_k() { return k; }
	double get_ei() { return ei; }
	double get_Ti() { return Ti; }
	double get_ej() { return ej; }
	double get_Td() { return Td; }
	double get_eip() { return eip; }
	void set_k(double km) { k = km; }
	void set_ARX(ModelARX* ARXm) { ARX = ARXm; }
	void set_Ti(double Tim) { Ti = Tim; }
	void set_ei(double eim) { set_eip(ei); dod_ej(eim); ei = eim; }
	void dod_ej(double ejm) { ej += ejm; }
	void set_Td(double Tdm) { Td = Tdm; }
	void set_eip(double eipm) { eip = eipm; }
	double P() { return (k * ei); }
	double I() { if (Ti != 0) return ((1 / Ti) * ej); else return 0; }
	double D() { return Td * (ei - eip); }
	double PID() { return P() + I() + D(); }
    void reset() { ej = 0; eip = 0;}
	RegulatorPID(double km = 0, double Tim = 0, double Tdm = 0) { ei = 0; ej = 0; eip = 0; k = km; Ti = Tim; Td = Tdm; }
	double symuluj(double eim) { set_ei(eim); return PID(); }
};

void raportBleduSekwencji(std::vector<double>& spodz, std::vector<double>& fakt);
bool porownanieSekwencji(std::vector<double>& spodz, std::vector<double>& fakt);
void test_RegulatorP_brakPobudzenia();
void test_RegulatorP_skokJednostkowy();
void test_RegulatorPI_skokJednostkowy_1();
void test_RegulatorPI_skokJednostkowy_2();
void test_RegulatorPID_skokJednostkowy();

