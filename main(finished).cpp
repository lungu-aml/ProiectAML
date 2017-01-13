#include <iostream>
#include <conio.h>
#include <stdlib.h>


using namespace std;

class input
{
public:
    float i;

};





class time:public input
{
public:
    void min_s();
    void s_min();
    void h_s();
    void s_h();
    void d_s();
    void s_d();
    void d_h();
    void h_d();
    void min_h();
    void h_min();

};

class power:public input
{
    public:
    void HP_Js();
    void Js_HP();
};


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

//power
void power::HP_Js()
{
    cout<<"    Horse Power= ";
    cin>>i;
    cout<<"    Joule/second= "<<(long double)i*745.699921;
}
void power::Js_HP()
{
    cout<<"    Joule/second= ";
    cin>>i;
    cout<<"    Horse Power= "<<(long double)i/745.699921;
}

//time

void time::min_s()
{
    cout<<"    Minute= ";
    cin>>i;
    cout<<"    Second= "<<(long double)i*60;
}
void time::s_min()
{
    cout<<"    Second= ";
    cin>>i;
    cout<<"    Minute= "<<(long double)i/60;
}

void time::h_s()
{
    cout<<"    Hour=";
    cin>>i;
    cout<<"    Second="<<(long double)i*3600;
}
void time::s_h()
{
    cout<<"    Second=";
    cin>>i;
    cout<<"    Hour="<<(long double)i/600;
}
void time::d_s()
{
    cout<<"    Day=";
    cin>>i;
    cout<<"    Second="<<(long double)i*86400;
}
void time::s_d()
{
    cout<<"    Second=";
    cin>>i;
    cout<<"    Day="<<(long double)i/86400;
}
void time::d_h()
{
    cout<<"    Day=";
    cin>>i;
    cout<<"    Hour="<<(long double)i*3600;
}
void time::h_d()
{
    cout<<"    Hour=";
    cin>>i;
    cout<<"    Day="<<(long double)i*3600;
}
void time::min_h()
{
    cout<<"    Minute=";
    cin>>i;
    cout<<"    Hour="<<(long double)i/60;
}
void time::h_min()
{
    cout<<"    Hour=";
    cin>>i;
    cout<<"    Minute="<<(long double)i*60;
}

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
int main()
{
    system("cls");

    length b;
    weight c;
    vol d;
    area e;
    temp f;
    power g;
    time t;
    int x,y;

    while(1)
    {
        system("cls");
        cout<<"UNIT CONVERTOR"<<endl<<endl;
        cout<<"      TYPE NUMBER:"<<endl;
        cout<<"  1: Length" <<endl<< "  2: Temperature"<<endl<<"  3: Weight"<<endl<<"  4: Area"<<endl<<"  5: Volume"<<endl<<"  6: Power"<<endl<<"  7: Time"<<endl<<endl<<"  0: Exit"<<endl<<endl;
        cout<<endl<<"Please choose your Conversion Type:"<<endl<<endl;
        cin>>x;
        if(x==1)
        {
            system("cls");

            cout<<endl<<" choose your unit conversion:"<<endl<<endl;

            cout<<"  1 : mm to m"<<endl;
            cout<<"  2 : m to mm"<<endl;
            cout<<"  3 : cm to m"<<endl;
            cout<<"  4 : m to cm"<<endl;
            cout<<"  5 : cm to km"<<endl;
            cout<<"  6 : km to cm"<<endl;
            cout<<"  7 : m to mile"<<endl;
            cout<<"  8 : mile to m"<<endl;
            cout<<"  9 : km to mile"<<endl;
            cout<<" 10 : mile to km"<<endl;
            cout<<" 11 : feet to m"<<endl;
            cout<<" 12 : m to feet"<<endl;
            cout<<" 13 : inch to m"<<endl;
            cout<<" 14 : m to inch"<<endl;
            cout<<" 15 : yard to m"<<endl;
            cout<<" 16 : m to yard"<<endl<<endl;
            cout<<" 0 : Back to Main Menu"<<endl<<endl;


            while(1)
            {
                cout<<endl<<" Please Enter Your Choice: "<<endl;
                cin>>y;

                if (y==1)
                {
                    b.mm_m();
                }
                else if(y==2)
                {
                    b.m_mm();
                }
                else if (y==3)
                {
                    b.cm_m();
                }
                else if (y==4)
                {
                    b.m_cm();
                }
                else if (y==5)
                {
                    b.cm_km();
                }
                else if (y==6)
                {
                    b.km_cm();
                }
                else if (y==7)
                {
                    b.m_mile();
                }
                else if (y==8)
                {
                    b.mile_m();
                }
                else if (y==9)
                {
                    b.km_mile();
                }
                else if (y==10)
                {
                    b.mile_km();
                }
                else if (y==11)
                {
                    b.feet_m();
                }
                else if (y==12)
                {
                    b.m_feet();
                }
                else if (y==13)
                {
                    b.inch_m();
                }
                else if(y==14)
                {
                    b.m_inch();
                }
                else if (y==15)
                {
                    b.yard_m();
                }
                else if (y==16)
                {
                    b.m_yard();
                }
                else if (y==0)
                {
                    break;
                }
            }
        }
        else if(x==2)
        {
            system("cls");
            cout<<endl<<" Choose your unit conversion:"<<endl<<endl;

            cout<<"  1: Celsius to Fahrenheit"<<endl;
            cout<<"  2: Fahrenheit to Celsius"<<endl;
            cout<<"  3: Celsius to Kelvin"<<endl;
            cout<<"  4: Kelvin to Celsius"<<endl<<endl;
            cout<<"  0: Back to The Main Menu"<<endl<<endl;
            while(1)
            {
                cout<<endl<<" Please Enter Your Choice: "<<endl<<endl;
                cin>>y;

                if(y==1)
                {
                    f.cel_f();
                }
                else if(y==2)
                {
                    f.f_cel();
                }
                else if (y==3)
                {
                    f.cel_k();
                }
                else if(y==4)
                {
                    f.k_cel();
                }
                else if(y==0)
                {
                    break;
                }
            }
        }
        else if(x==3)
        {
            system("cls");
            cout<<"choose your unit conversion :"<<endl<<endl;

            cout<<"  1: Milligram to Gram"<<endl;
            cout<<"  2: Gram to milligram"<<endl;
            cout<<"  3: Gram to kilogram"<<endl;
            cout<<"  4: Kilogram to gram"<<endl;
            cout<<"  5: Pound to kilogram"<<endl;
            cout<<"  6: Kilogram to pound"<<endl;
            cout<<"  7: Gram to Pound"<<endl;
            cout<<"  8: Pound to gram"<<endl;
            cout<<"  9: Kilogram to Ton"<<endl;
            cout<<" 10: Ton to Kilogram"<<endl<<endl;
            cout<<" 0: Back to The Main Menu"<<endl<<endl;

            while(1)
            {
                cout<<endl<<"Please Enter Your Choice: "<<endl<<endl;
                cin>>y;

                if (y==1)
                {
                    c.milligm_gm();
                }
                else if (y==2)
                {
                    c.gm_milligm();
                }
                else if (y==3)
                {
                    c.gm_kg();
                }
                else if (y==4)
                {
                    c.kg_gm();
                }
                else if (y==5)
                {
                    c.pound_kg();
                }
                else if (y==6)
                {
                    c.kg_pound();
                }
                else if (y==7)
                {
                    c.gm_pound();
                }
                else if (y==8)
                {
                    c.pound_gm();
                }
                else if (y==9)
                {
                    c.kg_mton();
                }
                else if (y==10)
                {
                    c.mton_kg();
                }
                else if (y==0)
                {
                    break;
                }
            }
        }
        else if(x==4)
        {
            system("cls");
            cout<<endl<<"choose your unit conversion:"<<endl<<endl;

            cout<<"   1: Square mm-Square cm"<<endl;
            cout<<"   2: square cm-Square mm"<<endl;
            cout<<"   3: square cm-square m"<<endl;
            cout<<"   4: Square m-Square cm"<<endl;
            cout<<"   5: Square m-Square km"<<endl;
            cout<<"   6: Square km-Square m"<<endl;
            cout<<"   7: Square feet-Square m"<<endl;
            cout<<"   8: Square m-Square feet"<<endl;
            cout<<"   9: Square Yard-Square m"<<endl;
            cout<<"  10: Square m-Square yard"<<endl;
            cout<<"  11: Square mile-Square km"<<endl;
            cout<<"  12: Square km-Square mile"<<endl;
            cout<<"  13: Acre-Hectare"<<endl;
            cout<<"  14: Hectare-Acre"<<endl;
            cout<<"  15: Square km-Acre "<<endl;
            cout<<"  16: Acre-Square km"<<endl<<endl;
            cout<<"  0: Back to The Main Menu"<<endl<<endl;

            while(1)
            {
                cout<<endl<<"Please Enter Your Choice: "<<endl<<endl;
                cin>>y;

                if(y==1)
                {
                    e.mmSq_cmSq();
                }
                else if(y==2)
                {
                    e.cmSq_mmSq();
                }
                else if(y==3)
                {
                    e.cmSq_mSq();
                }
                else if(y==4)
                {
                    e.mSq_cmSq();
                }
                else if(y==5)
                {
                    e.mSq_kmSq();
                }
                else if(y==6)
                {
                    e.kmSq_mSq();
                }
                else if(y==7)
                {
                    e.feetSq_mSq();
                }
                else if(y==8)
                {
                    e.mSq_feetSq();
                }
                else if(y==9)
                {
                    e.yardSq_mSq();
                }
                else if(y==10)
                {
                    e.mSq_yardSq();
                }
                else if(y==11)
                {
                    e.mileSq_kmSq();
                }
                else if(y==12)
                {
                    e.kmSq_mileSq();
                }
                else if(y==13)
                {
                    e.acre_hect();
                }
                else if(y==14)
                {
                    e.hect_acre();
                }
                else if(y==15)
                {
                    e.kmSq_acre();
                }
                else if(y==16)
                {
                    e.acre_kmSq();
                }
                else if(y==0)
                {
                    break;
                }
            }
        }
        else if(x==5)
        {
            system("cls");
            cout<<"choose your unit conversion:"<<endl;

            cout<<"   1 : Milliliter to Liter"<<endl;
            cout<<"   2 : Liter to milliliter"<<endl;
            cout<<"   3 : Cubic mm to Cubic cm"<<endl;
            cout<<"   4 : Cubic cm to Cubic mm"<<endl;
            cout<<"   5 : Cubic cm to Cubic m"<<endl;
            cout<<"   6 : Cubic m to Cubic cm"<<endl;
            cout<<"   7 : Cubic Inch to Cubic m"<<endl;
            cout<<"   8 : Cubic m to Cubic Inch"<<endl;
            cout<<"   9 : Cubic feet to Cubic m"<<endl;
            cout<<"  10 : Cubic m to Cubic feet"<<endl;
            cout<<"  11 : Cubic m to Gallon (uk)"<<endl;
            cout<<"  12 : Gallon to Cubic m"<<endl;
            cout<<"  13 : Liter to Gallon"<<endl;
            cout<<"  14 : Gallon to Liter"<<endl<<endl;
            cout<<"  0 : Back to The Main Menu"<<endl<<endl;


            while(1)
            {
                cout<<"Please Enter Your Choice: ";
                cin>>y;

                if (y==1)
                {
                    d.mL_L();
                }
                else if (y==2)
                {
                    d.L_mL();
                }
                else if (y==3)
                {
                    d.mmQ_cmQ();
                }
                else if (y==4)
                {
                    d.cmQ_mmQ();
                }
                else if (y==5)
                {
                    d.cmQ_mQ();
                }
                else if (y==6)
                {
                    d.mQ_cmQ();
                }
                else if (y==7)
                {
                    d.inchQ_mQ();
                }
                else if (y==8)
                {
                    d.mQ_inchQ();
                }
                else if (y==9)
                {
                    d.feetQ_mQ();
                }
                else if (y==10)
                {
                    d.mQ_feetQ();
                }
                else if (y==11)
                {
                    d.mQ_gallon();
                }
                else if (y==12)
                {
                    d.gallon_mQ();
                }
                else if (y==13)
                {
                    d.L_gallon();
                }
                else if(y==14)
                {
                    d.gallon_L();
                }
                else if(y==0)
                {
                    break;
                }
            }
        }


        else if(x==6)
        {
            system("cls");
            cout<<endl<<"Choose your unit conversion:"<<endl<<endl;

            cout<<"   1 : Horse Power to Joule/second"<<endl;
            cout<<"   2 : Joule/second to Horse Power"<<endl<<endl;
            cout<<"   0 : Back To The Main Menu"<<endl<<endl;
         while(1)
            {
                cout<<endl<<"Please Enter Your Choice: "<<endl<<endl;
                cin>>y;

                if (y==1)
                {
                    g.HP_Js();
                }
                else if(y==2)
                {
                    g.Js_HP();
                }
                else if(y==0)
                {
                    break;
                }
            }
        }
else if(x==7)
        {
            system("cls");
            cout<<endl<<"Choose your unit conversion:"<<endl<<endl;

            cout<<"   1 : Minute to second"<<endl;
            cout<<"   2 : Second to minute"<<endl;
            cout<<"   3 : Hour to second"<<endl;
            cout<<"   4 : Second to hour"<<endl;
            cout<<"   5 : Day to second"<<endl;
            cout<<"   6 : Second to day"<<endl;
            cout<<"   7 : Day to hour"<<endl;
            cout<<"   8 : Hour to day"<<endl;
            cout<<"   9 : Minute to hour"<<endl;
            cout<<"   10 : Hour to minute"<<endl<<endl;
            cout<<"   0 : Back To The Main Menu"<<endl<<endl;
         while(1)
            {
                cout<<endl<<"Please Enter Your Choice: "<<endl<<endl;
                cin>>y;

                if (y==1)
                {
                    t.min_s();
                }
                else if(y==2)
                {
                    t.s_min();
                }
                else if(y==3)
                {
                    t.h_s();
                }
                else if(y==4)
                {
                    t.s_h();
                }
                else if(y==5)
                {
                    t.d_s();
                }
                else if(y==6)
                {
                    t.s_d();
                }
                else if(y==7)
                {
                    t.d_h();
                }
                else if(y==8)
                {
                    t.h_d();
                }
                else if(y==9)
                {
                    t.min_h();
                }
                else if(y==10)
                {
                    t.h_min();
                }

                else if(y==0)
                {
                    break;
                }
            }
        }

        else if(x==0)
        {
            break;
        }

    }


}



