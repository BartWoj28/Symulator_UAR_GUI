#include "symulator.h"

void Symulator::symulacja(){


        if(syg==signal::sk_jed)u = gen1(ite) - arx.Get_Y();
        else if (syg == signal::syg_prost) u = gen2(ite) - arx.Get_Y();
        else u = gen3(ite) - arx.Get_Y();
        y_pid = pid.symuluj(u);
        arx.symuluj(y_pid);
        ite++;

};


