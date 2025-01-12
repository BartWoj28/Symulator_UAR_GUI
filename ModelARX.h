#pragma once

#include <iostream>
#include <vector>
#include <deque>
#include <iomanip>


using namespace std;
class ModelARX; class RegulatorPID;

class ModelARX
{
	vector<double>A = {};
	vector<double>B = {};
	unsigned int K = 1;
	deque<double>kol_y = {};
	deque<double>kol_u = {};
	deque<double>buf_op = {};
	double Y = 0.0;
	RegulatorPID* PID = nullptr;
	bool Z = false;
	friend RegulatorPID;
public:
    void Set_A(vector<double>a) {A = a; }
    void Add_A(double a){A.push_back(a);}
    void Set_B(vector<double>b) {B = b; }
    void Add_B(double b){B.push_back(b);}
	void Set_Y(double y) { Y = y; }
	void Set_K(unsigned int k) { K = k; }
	void Set_PID(RegulatorPID* pid) { PID = pid; }
	void Set_Z(bool z) { Z = z; }
	void CheckSize();
	double Get_Y() { return Y; }
	double symuluj(double e);
	ModelARX(vector<double>, vector<double>, unsigned int, double);
    ModelARX(){};
};

void test_ModelARX_brakPobudzenia();
void test_ModelARX_skokJednostkowy_1();
void test_ModelARX_skokJednostkowy_2();
void test_ModelARX_skokJednostkowy_3();
