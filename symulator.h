#pragma once

#include "WartoscZadana.h"
#include "RegulatorPID.h"
#include "ModelARX.h"



enum class signal {
    sk_jed=0,
    syg_prost=1,
    syg_sin=2,
};

class Symulator
{
protected:
    int ite;
    double zad;
    sk_jed gen1;
    syg_prost gen2;
    syg_sin gen3;
    double u;
    double y_pid ;
    bool sterowanie = false;
    RegulatorPID pid;
    ModelARX arx;
    signal syg=signal::sk_jed;
public:
    void reset() { pid.reset(); }
    void StartStop() { sterowanie = !sterowanie; }
    void set_arx_a(std::vector<double> arx_a) { arx.Set_A(arx_a); }
    void set_arx_b(std::vector<double> arx_b) { arx.Set_A(arx_b); }
    void set_arx_k(unsigned int arx_k) { arx.Set_K(arx_k); }
    void set_pid_k(double pid_k) { pid.set_k(pid_k); }
    void set_pid_Ti(double pid_Ti) { pid.set_Ti(pid_Ti); }
    void set_pid_Td(double pid_Td) { pid.set_Td(pid_Td); }
    void set_syg(signal s) { syg = s; }
    void set_zad(double a) { gen3.set_A(a); gen2.set_A(a);  gen1.set_A(a);}
    void set_T(int t) { gen1.set_t(t); gen2.set_T(t); gen3.set_T(t); }
    void set_p(double p) { gen2.set_p(p); }
    int get_K_pid(){return pid.get_k();}
    int get_ite(){return ite;}
    double get_u(){return u;}
    double get_ster(){return y_pid;}
    double get_P(){return pid.P();}
    double get_D(){return pid.D();}
    double get_I(){return pid.I();}
    double get_Zad(){
        if(syg==signal::sk_jed)
            return gen1(ite);
        else if(syg==signal::syg_prost)
            return gen2(ite);
        else return gen3(ite);
    }
    void add_A_arx(double a){arx.Add_A(a);}
    void add_B_arx(double b){arx.Add_B(b);}
    bool get_start(){return sterowanie;}
    double get_Y(){return arx.Get_Y();}

    void symulacja();
    void change_z(){arx.change_Z();}
    void Setup(){
        arx.Set_Y(0);
        pid.set_ei(0);
        pid.set_ei(0);
        ite = 0;
        u = 0;
        y_pid = 0;};
};


