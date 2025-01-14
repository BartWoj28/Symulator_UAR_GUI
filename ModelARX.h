#pragma once

#include <vector>
#include <deque>



using namespace std;
class ModelARX; class RegulatorPID;

class ModelARX
{
    vector<double>A = {0.0,0.0,0.0};
    vector<double>B = {0.0,0.0,0.0};
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
    void Set_A1(double a){A[0]=a;}
    void Set_A2(double a){A[1]=a;}
    void Set_A3(double a){A[2]=a;}

    void Set_B1(double b){B[0]=b;}
    void Set_B2(double b){B[1]=b;}
    void Set_B3(double b){B[2]=b;}

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
    void change_Z(){Z=!Z;}
    void clean(){kol_y.clear();kol_u.clear();buf_op.clear();}
};

void test_ModelARX_brakPobudzenia();
void test_ModelARX_skokJednostkowy_1();
void test_ModelARX_skokJednostkowy_2();
void test_ModelARX_skokJednostkowy_3();
