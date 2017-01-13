#include <iostream>
#include <conio.h>
#include <stdlib.h>


using namespace std;

class input
{
public:
    float i;

};




/*
class time:public input
{
public:
    void m_s();
    void s_m();
    void h_s();
    void s_h();
    void d_s();
    void s_d();
    void d_h();
    void h_d();
    void m_h();
    void h_m();

};
*/
class length:public input
{
public:
    void mm_m();
    void m_mm();
    void m_cm();
    void m_mile();
    void m_feet();
    void m_yard();
    void m_inch();
    void cm_m();
    void cm_km();
    void km_cm();
    void mile_m();
    void km_mile();
    void mile_km();
    void feet_m();
    void inch_m();
    void yard_m();

};

class temp:public input
{
public:
    void cel_f();
    void f_cel();
    void cel_k();
    void k_cel();
    void f_k();
    void k_f();

};

class weight:public input
{
public:
    void milligm_gm();
    void gm_milligm();
    void gm_kg();
    void kg_gm();
    void kg_mton();
    void mton_kg();
    void pound_kg();
    void kg_pound();
    void gm_pound();
    void pound_gm();

};

class area :public input
{
public:
    void mmSq_cmSq();
    void cmSq_mmSq();
    void cmSq_mSq ();
    void mSq_cmSq ();
    void mSq_kmSq ();
    void kmSq_mSq ();
    void feetSq_mSq();
    void mSq_feetSq();
    void yardSq_mSq();
    void mSq_yardSq();
    void mileSq_kmSq();
    void kmSq_mileSq();
    void acre_kmSq();
    void kmSq_acre();
    void acre_hect();
    void hect_acre();
};

class vol:public input
{
public:
    void mL_L();
    void L_mL();
    void mmQ_cmQ();
    void cmQ_mmQ();
    void cmQ_mQ ();
    void mQ_cmQ ();
    void inchQ_mQ();
    void mQ_inchQ();
    void feetQ_mQ();
    void mQ_feetQ();
    void mQ_gallon();
    void gallon_mQ();
    void L_gallon();
    void gallon_L();

};

//time



//length
void length ::mm_m()
{
    cout<<"   Millimeter= ";
    cin>>i;
    cout<<"   Meter= "<<(long double)i*.001;
}
void length ::m_mm()
{
    cout<<"   Meter= ";
    cin>>i;
    cout<<"   Millimeter= "<<(long double)i*1000;
}
void length ::cm_m()
{
    cout<<"   Centimeter= ";
    cin>>i;
    cout<<"   Meter= "<<(long double)i*.01;
}
void length ::m_cm()
{
    cout<<"   Meter= ";
    cin>>i;
    cout<<"   Cm= "<<(long double)i*100;
}
void length::m_mile()
{
    cout<<"   Meter= ";
    cin>>i;
    cout<<"   Mile= "<<(long double)i*.00062;
}
void length::mile_m()
{
    cout<<"   Mile= ";
    cin>>i;
    cout<<"   Meter= "<<(long double)i*1609.344;
}
void length :: cm_km()
{
    cout<<"   Cm= ";
    cin>>i;
    cout<<"   Km= "<<(long double)i*0.00001;
}

void length :: km_cm()
{
    cout<<"   Km= ";
    cin>>i;
    cout<<"   Cm= "<<(long double)i*100000;
}
void length::feet_m()
{
    cout<<" Feet= ";
    cin>>i;
    cout<<"   Meter= "<<(long double)i*0.3048;
}
void length::m_feet()
{
    cout<<"   Meter= ";
    cin>>i;
    cout<<"   Feet= "<<(long double)i*3.28084;
}
void length::yard_m()
{
    cout<<"   Yard= ";
    cin>>i;
    cout<<"   Meter= " <<(long double)i*0.9144;
}
void length::m_yard()
{
    cout<<"   Meter= ";
    cin>>i;
    cout<<"   Yard= "<<(long double)i*1.09361;
}
void length::inch_m()
{
    cout<<"   Inch=";
    cin>>i;
    cout<<"   Meter="<<(long double)i*.0254;
}
void length::m_inch()
{
    cout<<"   Meter=";
    cin>>i;
    cout<<"   Inch="<<(long double)i*39.37008;
}
void length ::km_mile()
{
    cout<<"   Kilometer=";
    cin>>i;
    cout<<"   Mile="<<(long double)i*.6213712 ;
}
void length ::mile_km( )
{
    cout<<"   Mile=";
    cin>>i;
    cout<<"   Kilometer="<<(long double)i*1.60934;
}


//temperature

void temp::cel_f()
{
    cout<<"   Celsius= ";
    cin>>i;
    cout<<"   Fahrenheit= " <<(long double)(((9*i)/5)+32);
}
void temp::f_cel()
{
    cout<<"   Fahrenheit= ";
    cin>>i;
    cout<<"   Celsius= "<<(long double)(((i-32)/9)*5);
}
void temp::cel_k()
{
    cout<<"   Celsius= ";
    cin>>i;
    cout<<"   Kelvin= "<<(long double)i+273;
}
void temp::k_cel()
{
    cout<<"   Kelvin= ";
    cin>>i;
    cout<<"   Celsius= "<<(long double)i-273;
}

//weight

void weight::milligm_gm()
{
    cout<<"   Milligramm= ";
    cin>>i;
    cout<<"   Gramm= "<<(long double)i*.001;
}
void weight::gm_milligm()
{
    cout<<"   Gram= ";
    cin>>i;
    cout<<"   Milligramm= "<<(long double)i*1000;
}
void weight::pound_kg()
{
    cout<<"   Pound= ";
    cin>>i;
    cout<<"   Kilogramm= "<<(long double)i*.45359;
}
void weight::gm_kg()
{
    cout<<"   Gramm= ";
    cin>>i;
    cout<<"   Killogramm= "<<(long double)i*.001;
}
void weight::kg_gm()
{
    cout<<"   Killogramm= ";
    cin>>i;
    cout<<"   Gramm= "<<(long double)i*1000;
}


void weight::kg_pound()
{
    cout<<"   Kilogramm= ";
    cin>>i;
    cout<<"   Pound= "<<(long double)2.20462*i;
}
void weight::gm_pound()
{
    cout<<"   Gramm= ";
    cin>>i;
    cout<<"   Pound= "<<(long double)i*.0022;
}
void weight::pound_gm()
{
    cout<<"   Pound= ";
    cin>>i;
    cout<<"   Gramm= "<<(long double)i*453.59237;
}
void weight::kg_mton()
{
    cout<<"   Kilogramm= ";
    cin>>i;
    cout<<"   Ton= "<<(long double)i*.001;
}
void weight::mton_kg()
{
    cout<<"   Ton= ";
    cin>>i;
    cout<<"   kilogramm= "<<(long double)i*1000;
}

//area

void area::mmSq_cmSq()
{
    cout<<"   Squqre mm= ";
    cin>>i;
    cout<<"   Square cm= "<<i*.01;
}
void area::cmSq_mmSq()
{
    cout<<"   Square cm= ";
    cin>>i;
    cout<<"   Square mm= "<<i*100;
}
void area::cmSq_mSq()
{
    cout<<"   Square cm= ";
    cin>>i;
    cout<<"   Square m= "<<i*.0001;
}
void area::mSq_cmSq()
{
    cout<<"   Square m= ";
    cin>>i;
    cout<<"   Square cm= "<<i*10000;
}
void area::mSq_kmSq()
{
    cout<<"   Square m= ";
    cin>>i;
    cout<<"   Square km= "<<i*.000001;
}
void area::kmSq_mSq()
{
    cout<<"   Square km= ";
    cin>>i;
    cout<<"   Square m= "<<i*1000000;
}
void area::feetSq_mSq()
{
    cout<<"   Square feet= ";
    cin>>i;
    cout<<"   Square m= "<<i*.0929;
}
void area::mSq_feetSq()
{
    cout<<"   Square m= ";
    cin>>i;
    cout<<"   Square feet= "<<i*10.76391;
}
void area::yardSq_mSq()
{
    cout<<"   Square yard= ";
    cin>>i;
    cout<<"   Square m= "<<i*.83613;
}
void area::mSq_yardSq()
{
    cout<<"   Square m= ";
    cin>>i;
    cout<<"   Square yard= "<<i*1.19599;
}
void area::mileSq_kmSq()
{
    cout<<"   Square mile= ";
    cin>>i;
    cout<<"   Square km= "<<i*2.5899;
}
void area::kmSq_mileSq()
{
    cout<<"   Square km= " ;
    cin>>i;
    cout<<"   Square mile= "<<i*.3861;
}
void area::acre_hect()
{
    cout<<"   Acre= ";
    cin>>i;
    cout<<"   Hectare= "<<i*.40469;
}
void area::hect_acre()
{
    cout<<"   Hectare= ";
    cin>>i;
    cout<<"   Acre= " <<i*2.47105;
}
void area::acre_kmSq()
{
    cout<<"   Acre= ";
    cin>>i;
    cout<<"   Square km= "<<i*.00405;
}
void area::kmSq_acre()
{
    cout<<"   Square km= ";
    cin>>i;
    cout<<"   Acre= "<<i*247.10538;

}

//volume

void vol::mL_L()
{
    cout<<"   Milli litre= ";
    cin>>i;
    cout<<"   Litre= "<<i*.001;
}
void vol::L_mL()
{
    cout<<"   Litre= ";
    cin>>i;
    cout<<"   milli Litre= "<<i*1000;
}
void vol::cmQ_mmQ()
{
    cout<<"   cubic cm= ";
    cin>>i;
    cout<<"   cubic mm= "<<i*1000;
}
void vol::mmQ_cmQ()
{
    cout<<"   cubic mm= ";
    cin>>i;
    cout<<"   cubic cm= "<<i*.001;
}
void vol::cmQ_mQ()
{
    cout<<"   cubic cm= ";
    cin>>i;
    cout<<"   cubic meter= "<<i*.000001;
}
void vol::mQ_cmQ()
{
    cout<<"   cubic meter= ";
    cin>>i;
    cout<<"   cubic cm= "<<i*1000000;
}
void vol::inchQ_mQ()
{
    cout<<"   cubic inch= ";
    cin>>i;
    cout<<"   cubic meter= "<<i*.00002;
}
void vol::mQ_inchQ()
{
    cout<<"   cubic meter= ";
    cin>>i;
    cout<<"   cubic inch= "<<i*61023.74409;
}
void vol::feetQ_mQ()
{
    cout<<"   cubic feet= ";
    cin>>i;
    cout<<"   cubic meter= "<<i*1222 ;

}
void vol::mQ_feetQ()
{
    cout<<"   cubic meter= ";
    cin>>i;
    cout<<"   cubic feet= "<<i*123;
}
void vol::mQ_gallon()
{
    cout<<"   cubic meter= ";
    cin>>i;
    cout<<"   gallon= "<<i*264.17205;
}
void vol::gallon_mQ()
{
    cout<<"   Gallon= ";
    cin>>i;
    cout<<"   cubic meter= "<<i*.00379;
}
void vol::L_gallon()
{
    cout<<"   Litre= ";
    cin>>i;
    cout<<"   gallon= "<<i*.21997;
}
void vol::gallon_L()
{
    cout<<"   Gallon= ";
    cin>>i;
    cout<<"   Litre= "<<i*4.54609;
}



