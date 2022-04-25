//                        INTERNATIONAL UNIVERSITY OF BUSINESS AGRICULTURE AND TECHNOLOGY
//                               DEPARTMENT  OF CMPUTER SCIENCE AND ENGINEERING
//*******************************************PROJECT NO-1*****************************************************************
//*************************************TOPIC: MODERN PERIODIC TABLE*******************************************************
//***********************************DEVELOPED BY: NAZMUS SAKIB APURBA*************************************************


/*SOURCES:
https://sourcecodehero.com/periodic-table-project-in-c-with-source-code/,
https://en.wikipedia.org/wiki/Periodic_table,
https://www.daniweb.com/programming/software */

#include<iostream>
#include<windows.h> /*windows. h is a Windows-specific header file for the C/C++ programming language
                     which contains declarations for all of the functions in the Windows API*/
#include<process.h>  /*<process.h> includes macros and declarations.It is used to work with func. which
                      includes processes. It includes some useful functions like abort, exit and system etc.*/

using namespace std;


int main()
{
    int i,t,c;

    //FRONT
    system("COLOR 2F ");
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\tINTERNATIONAL UNIVERSITY OF BUSINESS AGRICULTURE AND TECHNOLOGY";
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t DEVELOPED BY: NAZMUS SAKIB APURBA";
    Sleep(3000);
    system("cls");
    for(i=1;i<=100;++i)
    {
                       Sleep(5);
                       system("cls");
                       cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\   WELCOME TO OUR PROJECT";
                       cout<<"\n\n\n\t\t\t\t\t\tTopic:THE MODERN PERIODIC TABLE";
                       cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tLOADING "<<i<<"%";
                       if(i==100);
                       Sleep(30);
    }
    system("cls");

    //CHOOSE THE OPTION
    system("COLOR D0 ");
    cout<<"\n\n\n\n\n\n\t\t\t>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<"<<endl<<endl;
    cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\tCHOOSE THE OPTION:"<<"\n\n\n";
    Sleep(50);
    cout<<"\t\t\t1>Search for an element\t\t";
    Sleep(50);
    cout<<"2>View the Modern Periodic Table"<<"\n\n\n";
    Sleep(50);
    cout<<"\t\t\tEnter your option>> ";
    cin>>t;
    cout<<">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<";
    system("cls");





    //THE MODERN PERIODIC TABLE
     if(t==2)
    {


    system("COLOR F0 ");
    cout<<"\n\t\t\tTHE MODERN PERIODIC TABLE\n";
    cout<<"\t\t\t-------------------------\n";
    cout<<"\tH                                                      He"<<"\n\n";
    cout<<"\tLi Be                                 B  C   N  O   F  Ne"<<"\n\n";
    cout<<"\tNa Mg                                 Al Si  P  S   Cl Ar"<<"\n\n";
    cout<<"\tK  Ca Sc Ti V  Cr Mn Fe Co Ni Cu  Zn  Ga Ge  As Se  Br Kr"<<"\n\n";
    cout<<"\tRb Sr Y  Zr Nb Mo Tc Ru Rh Pd Ag  Cd  In Sn  Sb Te  I  Xe"<<"\n\n";
    cout<<"\tCs Ba La Hf Ta W  Re Os Ir Pt Au  Hg  Tl Pb  Bi Po  At Rn"<<"\n\n";
    cout<<"\tFr Ra Ac Rf Db Sg Bh Hs Mt Ds Rg  Cn  Nh Fi  Mc Lv  Ts Og"<<"\n\n\n";
    cout<<"\t\t Ce Pr Nd Pm Sm Eu Gd Tb Dy Ho Er Tm Yb Lu"<<"\n\n";
    cout<<"\t\t Th Pa U  Np Pu Am Cm Bk Cf Es Fm Md No Lr"<<"\n\n\n";
    system("PAUSE");
    system("cls");
    }


//SEARCH FOR ELEMENTS
else if(t==1)
    {
     system("COLOR 80");
    cout<<"ENTER NUMBER TO KNOW ABOUT THE ELEMENT:"<<endl;
    cin>>c;
    system("cls");

system("COLOR E0");
if(c==1)
cout<<"Hydrogen:"<<endl
<<"Symbol: H"<<endl
<<"Atomic mass:1.00784 u"<<endl
<<"Atomic number:1"<<endl
<<"Electro negativity: 2.2"<<endl
<<"Van der Waals radius: 120 pm"<<endl
<<"Electron configuration: 1s1"<<endl
<<"Electrons per shell: 1"<<endl<<endl

<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)It is a colourless,odourless and tasteless gas."<<endl
<<" "<<"2.)It is the lightest gas known."<<endl
<<" "<<"3.)It is only very slightly soluble in water."<<endl
<<" "<<"4.)It can be liquefied under high pressure and at low temperature."<<endl;


else
if(c==2)
cout<<"Helium:"<<endl
<<"Symbol: He"<<endl
<<"Atomic mass: 4.002602 u"<<endl
<<"Atomic number: 2"<<endl
<<"Electron configuration: 1s2"<<endl
<<"Electrons per shell: 2"<<endl
<<"Boiling point: -268.9 °C"<<endl
<<"Melting point: -272.2 °C"<<endl
<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)It is a colourless,odourless and tasteless gas."<<endl
<<" "<<"2.)It is the lightest gas known."<<endl
<<" "<<"3.)It is used for providing an inert atmosphere."<<endl
<<" "<<"4.)It is non-inflammable."<<endl;

else
if(c==3)
cout<<"Lithium:"<<endl
<<"Symbol: Li"<<endl
<<"Atomic number: 3"<<endl
<<"Atomic mass: 6.941 u"<<endl
<<"Electron configuration: 1s²2s¹"<<endl
<<"Electrons per shell: 2,1"<<endl
<<"Van der Waals radius: 182 pm"<<endl
<<"Melting point: 180.5 °"<<endl<<endl<<endl
<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)Lithium is a silvery white metal."<<endl
<<" "<<"2.)It is quite soft."<<endl
<<" "<<"3.)Lithium imparts crimson red colour to the flame."<<endl
<<" "<<"4.)It is one of the strongest reducing agent."<<endl;

else
if(c==4)
cout<<"Beryllium:"<<endl
<<"Symbol: Be"<<endl
<<"Atomic number: 4"<<endl
<<"Electron configuration: [He] 2s²"<<endl
<<"Atomic mass: 9.012182 u"<<endl
<<"Electrons per shell: 2,2"<<endl
<<"Van der Waals radius: 153 pm"<<endl
<<"Electro negativity: 1.57"<<endl<<endl<<endl
<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)Beryllium is very hard in nature."<<endl
<<" "<<"2.)It is used as a scavanger in metallurgy."<<endl
<<" "<<"3.)It is used in X-Ray window."<<endl
<<" "<<"4.)It is used for making electrodes of neon signs."<<endl;

else
if(c==5)
cout<<"Boron:"<<endl
<<"Symbol: B"<<endl
<<"Atomic number: 5"<<endl
<<"Atomic mass: 10.811 u"<<endl
<<"Electron configuration: [He] 2s2 2p1"<<endl
<<"Electrons per shell: 2,3"<<endl
<<"Electro negativity: 2.04"<<endl
<<"Group: group 13 (boron group)"<<endl<<endl<<endl
<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)Boron exist in three allotropic forms."<<endl
<<" "<<"2.)Boron is a poor conductor of electricity."<<endl
<<" "<<"3.)Boron is quite inert towards water."<<endl;

else
if(c==6)
cout<<"Carbon:"<<endl
<<"Symbol: C"<<endl
<<"Atomic mass: 12.0107 u"<<endl
<<"Atomic number: 6"<<endl
<<"Electron configuration: [He] 2s22p2"<<endl
<<"Electro negativity: 2.55"<<endl
<<"Electrons per shell: 2, 4"<<endl
<<"Melting point: 3,550 °C"<<endl<<endl<<endl

<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)It is a non-metallic element."<<endl
<<" "<<"2.)It occurs both in free as well as combined state."<<endl
<<" "<<"3.)Air also contain carbon as carbon-di-oxide."<<endl
<<" "<<"4.)In free state it occurs as diamond,coal and graphite."<<endl
<<" "<<"5.)Carbon forms hydrites known as hydrocarbon."<<endl;

else
if(c==7)
cout<<"Nitrogen:"<<endl
<<"Symbol: N"<<endl
<<"Atomic mass: 14.0067 u"<<endl
<<"Atomic number: 7"<<endl
<<"Electron configuration: [He] 2s22p3"<<endl
<<"Electro negativity: 3.04"<<endl
<<"Boiling point: -195.8 °C"<<endl
<<"Electrons per shell: 2,5"<<endl<<endl
<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)It is a typical non-metal."<<endl
<<" "<<"2.)It exists as diatomic molecule."<<endl
<<" "<<"3.)It is highly electronegative element."<<endl
<<" "<<"4.)The oxidation state of nitrogen varies from -3 to +5."<<endl
<<" "<<"5.)Molecular nitrogen is called dinitrogen."<<endl;

else
if(c==8)
cout<<"Oxygen:"<<endl
<<"Symbol: O"<<endl
<<"Atomic mass: 15.999 u"<<endl
<<"Atomic number: 8"<<endl
<<"Electronegativity: 3.44"<<endl
<<"Electron configuration: [He] 2s²2p⁴"<<endl
<<"Electrons per shell: 2, 6"<<endl
<<"Discoverers: Joseph Priestley, Antoine Lavoisier, Carl Wilhelm Scheele"<<endl<<endl
<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)It is a non-metal."<<endl
<<" "<<"2.)It is paramagnatic in nature."<<endl
<<" "<<"3.)It is most abundant element in earth's crust."<<endl
<<" "<<"4.)It is di-atomic in nature."<<endl
<<" "<<"5.)Molecular oxygen is also called dioxygen."<<endl;

else
if(c==9)
cout<<"Fluorine:"<<endl
<<"Symbol: F"<<endl
<<"Atomic mass: 18.998403 u"<<endl
<<"Atomic number: 9"<<endl
<<"Electron configuration: [He] 2s22p5"<<endl
<<"Electronegativity: 3.98"<<endl
<<"Van der Waals radius: 147 pm"<<endl
<<"Melting point: -219.6 °C"<<endl<<endl
<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)It is a non-metallic element."<<endl
<<" "<<"2.)It is most electronegative in nature."<<endl
<<" "<<"3.)It is used in the preparation of uranium hexafluoride."<<endl
<<" "<<"4.)In nature it is not found in free state."<<endl
<<" "<<"5.)It is used as plastic teflon."<<endl;

else
if(c==10)
cout<<"Neon:"<<endl
<<"Symbol: Ne"<<endl
<<"Atomic number: 10"<<endl
<<"Atomic mass: 20.1797 u"<<endl
<<"Electron configuration: [He] 2s²2p⁶"<<endl
<<"Electrons per shell: 2,8"<<endl
<<"Van der Waals radius: 154 pm"<<endl
<<"Boiling point: -246 °C"<<endl<<endl
<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)It is a gas."<<endl
<<" "<<"2.)It is widely used in sign boards."<<endl
<<" "<<"3.)It is used in T.V.,radio,photography and warning signals."<<endl
<<" "<<"4.)It produces an orange glow when an electric current is passed."<<endl
<<" "<<"5.)Neon lights are used as beacon lights for pilots."<<endl;

else
if(c==11)
cout<<"Sodium:"<<endl
<<"Symbol: Na"<<endl
<<"Atomic mass: 22.989769 u"<<endl
<<"Atomic number: 11"<<endl
<<"Electron configuration: [Ne] 3s¹"<<endl
<<"Van der Waals radius: 227 pm"<<endl
<<"Melting point: 97.79 °C"<<endl
<<"Boiling point: 882.8 °C"<<endl<<endl
<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)It occurs only in the combined form."<<endl
<<" "<<"2.)NaCl,common salt found as rock salt, in sea water."<<endl
<<" "<<"3.)Sodium nitrate as chili saltpetre or Caliche in Chile."<<endl
<<" "<<"4.)Sodium carbonate is found as an efflorescent substance."<<endl
<<" "<<"5.)Sodium is extracted by electrolysis of fused caustic soda."<<endl;

else
if(c==12)
cout<<"Magnesium:"<<endl
<<"Symbol: Mg"<<endl
<<"Atomic mass: 24.305 u"<<endl
<<"Atomic number: 12"<<endl
<<"Electron configuration: [Ne] 3s2"<<endl
<<"Van der Waals radius: 173 pm"<<endl
<<"Melting point: 650 °C"<<endl
<<"Density: 1.738 g/cm³"<<endl<<endl
<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)It is used in manufacture of alloys."<<endl
<<" "<<"2.)It is extracted by reduction of MgO."<<endl
<<" "<<"3.)It is used as a reducing agent for boron and silicon."<<endl
<<" "<<"4.)It is used as a de-oxidiser in metallurgy."<<endl
<<" "<<"5.)It is used as a fuse in alumino-thermite process."<<endl
<<" "<<"6.)It is used in flash light photography and in fire-works."<<endl;

else
if(c==13)
cout<<"Aluminium:"<<endl
<<"Symbol: Al"<<endl
<<"Atomic mass: 26.981539 u"<<endl
<<"Electron configuration: [Ne] 3s²3p¹"<<endl
<<"Melting point: 660.3 °C"<<endl
<<"Atomic number: 13"<<endl
<<"Density: 2.7 g/cm³"<<endl
<<"Oxidation states: −2, −1, +1, +2, +3 (an amphoteric oxide)"<<endl<<endl

<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)It is a reactive metal."<<endl
<<" "<<"2.)It exists in combined state."<<endl
<<" "<<"3.)It is present in earth's crust & its relative abundance is 8.3."<<endl
<<" "<<"4.)Aluminium is extracted from its ore bauxite."<<endl
<<" "<<"5.)It is not effected by atmosphere & do not decompose water."<<endl;

else
if(c==14)
cout<<"Silicon:"<<endl
<<"Symbol: Si"<<endl
<<"Atomic number: 14"<<endl
<<"Electron configuration: [Ne] 3s²3p²"<<endl
<<"Atomic mass: 28.0855 u"<<endl
<<"Electrons per shell: 2, 8, 4"<<endl
<<"Melting point: 1,410 °C"<<endl
<<"Electronegativity: 1.9"<<endl<<endl
<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)Silicon is very abundant element."<<endl
<<" "<<"2.)It is present in earth's crust to the extexnt of 28%."<<endl
<<" "<<"3.)It is present in the form of silica."<<endl
<<" "<<"4.)It is used in semi-conductor."<<endl
<<" "<<"5.)It exists in two allotropic forms i.e. amorphous and crystalline."<<endl;

else
if(c==15)
cout<<"Phosphorus:"<<endl
<<"Symbol: P"<<endl
<<"Atomic mass: 30.973762 u"<<endl
<<"Atomic number: 15"<<endl
<<"Electron configuration: [Ne] 3s²3p³"<<endl
<<"Electronegativity: 2.19"<<endl
<<"Electrons per shell: 2, 8, 5"<<endl
<<"Discoverer: Hennig Brand"<<endl<<endl
<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)It is a reactive non-metal."<<endl
<<" "<<"2.)It is the tenth element in the order of abundance in earth crust."<<endl
<<" "<<"3.)It exists in combined form."<<endl
<<" "<<"4.)It constitutes our bones,teeth,muscles,brain & nerve tissue."<<endl
<<" "<<"5.)In the form of phospholipids it is present in milk,egg,fish,etc."<<endl;

else
if(c==16)
cout<<"Sulphur:"<<endl
<<"Symbol: S"<<endl
<<"Atomic mass: 32.065 u"<<endl
<<"Atomic number: 16"<<endl
<<"Electron configuration: [Ne] 3s²3p⁴"<<endl
<<"Melting point: 112.8 °C"<<endl
<<"Electro negativity: 2.58"<<endl
<<"Electrons per shell: 2,8,6"<<endl<<endl

<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)It is present in small proportion."<<endl
<<" "<<"2.)It is used as disinfectant for destroying bacteria,fungi."<<endl
<<" "<<"3.)It is used in vulcanisation of rubber."<<endl
<<" "<<"4.)It is a constituent of medicines for skin diseases."<<endl
<<" "<<"5.)It is used in manufacture of matches,fire-works,etc."<<endl;

else
if(c==17)
cout<<"Chlorine:"<<endl
<<"Symbol: Cl"<<endl
<<"Atomic mass: 35.453 u"<<endl
<<"Atomic number: 17"<<endl
<<"Electron configuration: [Ne] 3s²3p⁵"<<endl
<<"Electronegativity: 3.16"<<endl
<<"Van der Waals radius: 175 pm"<<endl
<<"Boiling point: -34.04 °C"<<endl<<endl

<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)It is a non-metallic element."<<endl
<<" "<<"2.)It is used in bleaching textile,yarn,paper,pulp."<<endl
<<" "<<"3.)It is used in the sterilization of drinking water."<<endl
<<" "<<"4.)It is used in the manufacture of vinyl chloride."<<endl
<<" "<<"5.)It is used in preparing insecticides such as D.D.T. & B.H.C."<<endl;

else
if(c==18)
cout<<"Argon:"<<endl
<<"Symbol: Ar"<<endl
<<"Atomic mass: 39.948 u"<<endl
<<"Atomic number: 18"<<endl
<<"Electron configuration: [Ne] 3s²3p⁶"<<endl
<<"Electrons per shell: 2,8,8"<<endl
<<"Boiling point: -185.8 °C"<<endl
<<"Van der Waals radius: 188 pm"<<endl<<endl

<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)It is a noble-gas."<<endl
<<" "<<"2.)It is found in traces in the certain spring water."<<endl
<<" "<<"3.)It is used in metal filament electric lamps."<<endl
<<" "<<"4.)It is used in thermionic tubes."<<endl
<<" "<<"5.)It is used for creating inert atmosphere."<<endl;

else
if(c==19)
cout<<"Potassium:"<<endl
<<"Symbol: K"<<endl
<<"Atomic mass: 39.0983 u"<<endl
<<"Electron configuration: [Ar] 4s¹"<<endl
<<"Atomic number: 19"<<endl
<<"Melting point: 63.5 °C"<<endl
<<"Period: period 4"<<endl
<<"Group: group 1: hydrogen and alkali metals"<<endl<<endl

<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)It occurs in combined form."<<endl
<<" "<<"2.)Potassium carbonate is a constituent of wood ashes."<<endl
<<" "<<"3.)It is prepared by electrolysis of fused potassium cyanide."<<endl
<<" "<<"4.)It is a silvery white metal."<<endl
<<" "<<"5.)It is lighter & softer than sodium."<<endl;

else
if(c==20)
cout<<"Calcium:"<<endl
<<"Symbol: Ca"<<endl
<<"Atomic mass: 40.078 u"<<endl
<<"Electron configuration: [Ar] 4s²"<<endl
<<"Atomic number: 20"<<endl
<<"Van der Waals radius: 231 pm"<<endl
<<"Melting point: 842 °C"<<endl
<<"Chemical series: Metal, Alkaline earth metal, Period 4 element"<<endl<<endl

<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)It forms bivalent ions."<<endl
<<" "<<"2.)It imparts brick red colour to flame."<<endl
<<" "<<"3.)It's melting point & boiling point is 1112K & 1767K."<<endl
<<" "<<"4.)It's electronegativity is 1."<<endl
<<" "<<"5.)Its first & second ionisation energies are 590 & 1146KJ/mol."<<endl
<<" "<<"6.)It's density is 1.05g/c.c ."<<endl;

else
if(c==21)
cout<<"Scandium:"<<endl
<<"Symbol: Sc"<<endl
<<"Electron configuration: [Ar] 3d¹4s²"<<endl
<<"Atomic number: 21"<<endl
<<"Atomic mass: 44.955912 u"<<endl
<<"Van der Waals radius: 230 pm"<<endl
<<"Period: period 4"<<endl
<<"Discoverers: Per Teodor Cleve, Lars Fredrik Nilson"<<endl<<endl

<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)It's atomic radius is 144 p.m."<<endl
<<" "<<"2.)It exhibits +2 & +3 oxidation states."<<endl
<<" "<<"3.)Colour of it's ion is white."<<endl
<<" "<<"4.)It's ionisation energy is 631KJ/mol."<<endl
<<" "<<"5.)It is the first element of d-block element."<<endl;

else
if(c==22)
cout<<"Titanium:"<<endl
<<"Symbol: Ti"<<endl
<<"Electron configuration: [Ar] 3d²4s²"<<endl
<<"Atomic mass: 47.867 u"<<endl
<<"Melting point: 1,668 °C"<<endl
<<"Atomic number: 22"<<endl
<<"Electrons per shell: 2, 8, 10, 2"<<endl
<<"Period: period 4"<<endl<<endl

<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)Its atomic radii is 132pm."<<endl
<<" "<<"2.)It contains two unpaired electrons."<<endl
<<" "<<"3.)It exhibits +2 & +3 oxidation states."<<endl
<<" "<<"4.)It's ionisation energy is 656 KJ/mol."<<endl
<<" "<<"5.)It is used to extract pure metals."<<endl;

else
if(c==23)
cout<<"Vanadium:"<<endl
<<"Symbol: V"<<endl
<<"Electron configuration: [Ar] 3d34s2"<<endl
<<"Atomic number: 23"<<endl
<<"Atomic mass: 50.9415 u"<<endl
<<"Melting point: 1,910 °C"<<endl
<<"Period: period 4"<<endl
<<"Oxidation states: −3, −1, 0, +1, +2, +3, +4, +5 (an amphoteric oxide)"<<endl

<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)It's magnatic moment is 2.76 B.M."<<endl
<<" "<<"2.)It exhibits stable +5 oxidation state."<<endl
<<" "<<"3.)It forms green & white ions."<<endl
<<" "<<"4.)It's value of electrode potential is -1.20 V."<<endl;

else
if(c==24)
cout<<"Chromium:"<<endl
<<"Symbol: Cr"<<endl
<<"Electron configuration: [Ar] 3d⁵4s¹"<<endl
<<"Atomic mass: 51.9961 u"<<endl
<<"Atomic number: 24"<<endl
<<"Melting point: 1,907 °C"<<endl
<<"Oxidation states: −4, −2, −1, 0, +1, +2, +3, +4, +5, +6 (depending on the oxidation state, an acidic, basic, or amphoteric oxide)"<<endl
<<"Period: period 4"<<endl<<endl

<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)It's magnetic moment is 3.86 B.M."<<endl
<<" "<<"2.)It is used in making of alloys & in plating of metals."<<endl
<<" "<<"3.)Dichromate ion is used as volumetric reagent."<<endl
<<" "<<"4.)It has maximum no. of unpaired electrons."<<endl
<<" "<<"5.)It forms basic & amphoteric oxides."<<endl
<<" "<<"6.)It's heat of sublimation is 318 KJ/mol."<<endl;

else
if(c==25)
cout<<"Manganese:"<<endl
<<"Symbol: Mn"<<endl
<<"Atomic mass: 54.938044 u"<<endl
<<"Electron configuration: [Ar] 3d54s2"<<endl
<<"Atomic number: 25"<<endl
<<"Electronegativity: 1.55"<<endl
<<"Oxidation states: −3, −2, −1, 0, +1, +2, +3, +4, +5, +6, +7 (depending on the oxidation state, an acidic, basic, or amphoteric oxide)"<<endl
<<"Discoverers: Carl Wilhelm Scheele, Johan Gottlieb Gahn, Ignatius Gottfried Kaim"<<endl<<endl

<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)It has abnormally low melting point."<<endl
<<" "<<"2.)It's important ores are pyrolusite and braunite."<<endl
<<" "<<"3.)It is used to manufacture steel, rail lines etc."<<endl
<<" "<<"4.)It is used in making manganese bronze used in parts of ships."<<endl
<<" "<<"5.)It is the 14th most abundant element in the earth's crust."<<endl;

else
if(c==26)
cout<<"Iron:"<<endl
<<"Symbol: Fe"<<endl
<<"Atomic mass: 55.845 u"<<endl
<<"Electron configuration: [Ar] 3d64s2"<<endl
<<"Atomic number: 26"<<endl
<<"Melting point: 1,538 °C"<<endl
<<"Density: 7.874 g/cm³ (near room temperature)"<<endl
<<"Oxidation states: −4, −2, −1, 0, +1, +2, +3, +4, +5, +6, +7 (an amphoteric oxide)"<<endl<<endl

<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)It is used in formation of various alloys."<<endl
<<" "<<"2.)It exhibits +2 & +3 oxidation states."<<endl
<<" "<<"3.)It forms various non-stoichiometric oxides."<<endl
<<" "<<"4.)It's electrode potential is -0.44 V."<<endl
<<" "<<"5.)It is used as catalyst in many processes."<<endl;

else
if(c==27)
cout<<"Cobalt:"<<endl
<<"Symbol: Co"<<endl
<<"Electron configuration: [Ar] 3d⁷4s²"<<endl
<<"Atomic mass: 58.933195 u"<<endl
<<"Atomic number: 27"<<endl
<<"Melting point: 1,495 °C"<<endl
<<"Van der Waals radius: 200 pm"<<endl
<<"Oxidation states: −3, −1, 0, +1, +2, +3, +4, +5 (an amphoteric oxide)"<<endl

<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)It forms pink coloured ions."<<endl
<<" "<<"2.)Cobalt salts catalyse the decomposition of bleaching powder."<<endl
<<" "<<"3.)It forms the basic oxide CaO."<<endl
<<" "<<"4.)It is known as a ferrous metal."<<endl
<<" "<<"5.)It's ionisation energy is 758 KJ/mol."<<endl
<<" "<<"6.)It forms various complexes."<<endl;

else
if(c==28)
cout<<"Nickel:"<<endl
<<"Symbol: Ni"<<endl
<<"Atomic mass: 58.6934 u"<<endl
<<"Electron configuration: [Ar] 3d⁸4s²"<<endl
<<"Atomic number: 28"<<endl
<<"Melting point: 1,455 °C"<<endl
<<"Period: period 4"<<endl
<<"Density (near r.t.): 8.908 g/cm3"<<endl<<endl

<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)It forms green coloured ions."<<endl
<<" "<<"2.)It exhibits +2,+3,+4 oxidation states."<<endl
<<" "<<"3.)It is used in hydrogenation reaction in organic chemistry."<<endl
<<" "<<"4.)It's heat of sublimation is 397 KJ/mol."<<endl
<<" "<<"5.)It has atomic radii of 115pm."<<endl
<<" "<<"6.)It's ionisation energy is 736 KJ/mol."<<endl;

else
if(c==29)
cout<<"Copper:"<<endl
<<"Symbol: Cu"<<endl
<<"Electron configuration: [Ar] 3d¹⁰4s¹"<<endl
<<"Atomic mass: 63.546 u"<<endl
<<"Atomic number: "<<endl
<<"Melting point: 1,085 °C"<<endl
<<"Density: 8.96 g/cm³ (Near room temperature)"<<endl
<<"Oxidation states: −2, 0, +1, +2, +3, +4 (a mildly basic oxide)"<<endl<<endl

<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)It is a dimagnetic substance."<<endl
<<" "<<"2.)It occurs in free as well as in combined form."<<endl
<<" "<<"3.)It is used in making copper wires and electrical goods."<<endl
<<" "<<"4.)It exhibits +1 and +2 oxidation state."<<endl
<<" "<<"5.)It has an electrode potential of -0.34 V."<<endl
<<" "<<"6.)It forms blue and white coloured ions."<<endl;

else
if(c==30)
cout<<"Zinc:"<<endl
<<"Symbol: Zn"<<endl
<<"Atomic mass: 65.38 u"<<endl
<<"Atomic number: 30"<<endl
<<"Electron configuration: [Ar] 3d¹⁰4s²"<<endl
<<"Melting point: 419.5 °C"<<endl
<<"Boiling point: 907 °C"<<endl
<<"Oxidation states: −2, 0, +1, +2 (an amphoteric oxide)"<<endl<<endl

<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)Zinc blend is usually the main ore."<<endl
<<" "<<"2.)Zinc is a metal."<<endl
<<" "<<"3.)Zinc is a moderately hard,brittle element."<<endl
<<" "<<"4.)Zinc is a d-block element."<<endl
<<" "<<"5.)It's magnetic moment is 0."<<endl
<<" "<<"6.)It is used to galvanize iron."<<endl;

else
if(c==31)
cout<<"Gallium:"<<endl
<<"Symbol: Ga"<<endl
<<"Electron configuration: [Ar] 3d104s24p1"<<endl
<<"Atomic number: 31"<<endl
<<"Melting point: 29.76 °C"<<endl
<<"Atomic mass: 69.723 u"<<endl
<<"Van der Waals radius: 187 pm"<<endl
<<"Period: period 4"<<endl<<endl

<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)It is a shining greyish white metal."<<endl
<<" "<<"2.)it has a density of 5.9 in solid and 6.095 in liquid state."<<endl
<<" "<<"3.)It has a very low melting point of 30^C."<<endl
<<" "<<"4.)It is a very rare element."<<endl
<<" "<<"5.)It is a element of p-block."<<endl
<<" "<<"6.)It's atomic radii is 135pm."<<endl;

else
if(c==32)
cout<<"Germanium:"<<endl
<<"Symbol: Ge"<<endl
<<"Electron configuration: [Ar] 3d¹⁰4s²4p²"<<endl
<<"Atomic number: 32"<<endl
<<"Atomic mass: 72.64 u"<<endl
<<"Melting point: 938.2 °C"<<endl
<<"Period: period 4"<<endl
<<"Band gap: 0.67 eV (at 300 K)"<<endl<<endl

<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)It's atomic radius is 122 pm ."<<endl
<<" "<<"2.)It's bond energy is 167.2 KJ/mol."<<endl
<<" "<<"3.)It is used as semi-conductor."<<endl
<<" "<<"4.)It has bond gap of 0.7eV."<<endl
<<" "<<"5.)It's electronegativity is 1.8."<<endl
<<" "<<"6.)It's melting and boiling points are 1218K and 3123K."<<endl;

else
if(c==33)
cout<<"Arsenic:"<<endl
<<"Symbol: As"<<endl
<<"Electron configuration: [Ar] 3d¹⁰4s²4p³"<<endl
<<"Atomic number: 33"<<endl
<<"Atomic mass: 74.9216 u"<<endl
<<"Melting point: 816.8 °C"<<endl
<<"Electronegativity: 2.18"<<endl
<<"Discoverer: Albertus Magnus"<<endl<<endl

<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)It is an element of p-block."<<endl
<<" "<<"2.)It exists in yellow and grey colour."<<endl
<<" "<<"3.)It's electronegativity is 2."<<endl
<<" "<<"4.)It is a highly poisonous substance."<<endl
<<" "<<"5.)It is one of a banned element in school labs."<<endl
<<" "<<"6.)It's density is 50.78g/c.c."<<endl;

else
if(c==34)
cout<<"Selenium:"<<endl
<<"Symbol: Se"<<endl
<<"Electron configuration: [Ar] 3d104s24p4"<<endl
<<"Atomic number: 34"<<endl
<<"Atomic mass: 78.96 u"<<endl
<<"Electrons per shell: 2,8,18,6"<<endl
<<"Electro negativity: 2.55"<<endl
<<"Period: period 4"<<endl<<endl

<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)It is an element of p-block."<<endl
<<" "<<"2.)It's atomic radius is 116pm."<<endl
<<" "<<"3.)It's density in solid state is 4.79g/c.c."<<endl
<<" "<<"4.)It finds use in fire proofing electrical fittings."<<endl
<<" "<<"5.)It finds use in medicine."<<endl
<<" "<<"6.)It forms various hallides."<<endl;

else
if(c==35)
cout<<"Bromine:"<<endl
<<"Symbol: Br"<<endl
<<"Electron configuration: [Ar] 4s²3d¹⁰4p⁵"<<endl
<<"Atomic number: 35"<<endl
<<"Atomic mass: 79.904 u"<<endl
<<"Electro negativity: 2.96"<<endl
<<"Van der Waals radius: 185 pm"<<endl
<<"Boiling point: 58.8 °C"<<endl<<endl

<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)It's atomic radius is 101.4pm."<<endl
<<" "<<"2.)It's ionisation energy is 1142 KJ/mol."<<endl
<<" "<<"3.)It is reddish brown in colour."<<endl
<<" "<<"4.)It makes bromo compounds in organic chemistry."<<endl
<<" "<<"5.)It finds use in medicine."<<endl
<<" "<<"6.)It is a liquid with obnoxious smell"<<endl;

else
if(c==36)
cout<<"Krypton:"<<endl
<<"Symbol: Kr"<<endl
<<"Electron configuration: [Ar] 3d¹⁰4s²4p⁶"<<endl
<<"Atomic number: 36"<<endl
<<"Atomic mass: 83.798 u"<<endl
<<"Electrons per shell: 2,8,18,8"<<endl
<<"Boiling point: -153.4 °C"<<endl
<<"Period: period 4"<<endl<<endl

<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)It is a noble gas."<<endl
<<" "<<"2.)It is attached by weak Van der wall forces."<<endl
<<" "<<"3.)It does not exist as adiatomic molecule."<<endl
<<" "<<"4.)It is a by products in nuclear reactors."<<endl
<<" "<<"5.)It is a gas with suffocating smell."<<endl
<<" "<<"6.)It is a colourless,tasteless and odourless gas."<<endl;

else
if(c==37)
cout<<"Rubidium:"<<endl
<<"Symbol: Rb"<<endl
<<"Electron configuration: [Kr] 5s¹"<<endl
<<"Atomic number: 37"<<endl
<<"Atomic mass: 85.4678 u"<<endl
<<"Melting point: 39.48 °C"<<endl
<<"Van der Waals radius: 303 pm"<<endl
<<"Atomic radius: 248 pm"<<endl<<endl

<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)It catches fire spontaneously in air."<<endl
<<" "<<"2.)It boils at 696K giving bluish vapours."<<endl
<<" "<<"3.)It is a silvery white metal which melts at 311K."<<endl
<<" "<<"4.)It forms complex salts with halogens."<<endl
<<" "<<"5.)It gives a series of insoluble salts."<<endl
<<" "<<"6.)It's compounds are isomorphous with potassium compounds."<<endl;

else
if(c==38)
cout<<"Stroncium:"<<endl
<<"Symbol: Sr"<<endl
<<"Electron configuration: [Kr] 5s2"<<endl
<<"Atomic number: 38"<<endl
<<"Atomic mass: 87.62 u"<<endl
<<"Electrons per shell: 2,8,18,8,2"<<endl
<<"Van der Waals radius: 255 pm"<<endl
<<"Melting point: 777 °C"<<endl<<endl

<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)It was discovered by Davy."<<endl
<<" "<<"2.)It is a soft white metal & possess specific gravity of 2.5."<<endl
<<" "<<"3.)It is malleable and ductile."<<endl
<<" "<<"4.)It is comparitively more active than calcium."<<endl
<<" "<<"5.)It's nitrates are colourless crystalline solids."<<endl
<<" "<<"6.)It is not acted upon by fusion with alkali carbonates."<<endl;

else
if(c==39)
cout<<"Yttrium:"<<endl
<<"Symbol: Y"<<endl
<<"Electron configuration: [Kr] 4d15s2"<<endl
<<"Atomic number: 39"<<endl
<<"Atomic mass: 88.90585 u"<<endl
<<"Electrons per shell: 2,8,18,9,2"<<endl
<<"Period: period 5"<<endl
<<"Discoverer: Johan Gadolin"<<endl<<endl

<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)Yttrium is a silvery white, moderately soft, ductile metal. It is quite stable in air."<<endl;

else
if(c==40)
cout<<"Zirconium:"<<endl
<<"Symbol: Zr"<<endl
<<"Electron configuration: [Kr] 4d²5s²"<<endl
<<"Atomic number: 40"<<endl
<<"Atomic mass: 91.224 u"<<endl
<<"Melting point: 1,855 °C"<<endl
<<"Period: period 5"<<endl
<<"Oxidation states: −2, 0, +1, +2, +3, +4 (an amphoteric oxide)"<<endl<<endl

<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)It is a silvery white metal."<<endl
<<" "<<"2.)It's oxide is a refractory material."<<endl
<<" "<<"3.)When heated in air it give black oxide."<<endl
<<" "<<"4.)It is not acted upon by fusion with alkali carbonates."<<endl
<<" "<<"5.)It's nitrate or chloride solution on hydrolysis give collidal."<<endl;


else
if(c==41)
cout<<"Niobium:"<<endl
<<"Symbol: Nb"<<endl
<<"Electron configuration: [Kr] 4d⁴5s¹"<<endl
<<"Atomic number: 41"<<endl
<<"Atomic mass: 92.90638 u"<<endl
<<"Discovered: 1801"<<endl
<<"Melting point: 2,477 °C"<<endl
<<"Oxidation states: −3, −1, 0, +1, +2, +3, +4, +5 (a mildly acidic oxide)"<<endl<<endl

<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)Niobium is a light grey, crystalline, and ductile transition metal. Pure niobium has a Mohs hardness rating similar to pure titanium, and it has similar ductility to iron."<<endl;


else
if(c==42)
cout<<"Molybdenum:"<<endl
<<"Symbol: Mo"<<endl
<<"Electron configuration: [Kr] 4d₅5s₁"<<endl
<<"Atomic number: 42"<<endl
<<"Atomic mass: 95.95 u"<<endl
<<"Melting point: 2,623 °C"<<endl
<<"Electronegativity: 2.16"<<endl

<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)It acts as good adsorbant."<<endl
<<" "<<"2.)It is a grey metallic powder which remains untarnished in air."<<endl
<<" "<<"3.)When heated it gradually passes into oxide."<<endl
<<" "<<"4.)It is insoluble in HCl,HF & dil. sulphuric acid."<<endl
<<" "<<"5.)It is soluble in nitric acid, conc. sulphuric acid & aqua regia."<<endl
<<" "<<"6.)It is used as a catalyst in various chemical reactios."<<endl;

else
if(c==43)
cout<<"Technetium:-"<<endl
<<"Symbol: Tc"<<endl
<<"Atomic number: 43"<<endl
<<"Electron configuration: [Kr] 4d55s2"<<endl
<<"Atomic mass: 98 u"<<endl
<<"Melting point: 2,204 °C"<<endl
<<"Period: period 5"<<endl
<<"Discoverers: Emilio Segrè, Carlo Perrier"<<endl<<endl

<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)The gamma-ray emitting technetium-99m (metastable) is widely used for medical diagnostic studies. "<<endl;

else
if(c==44)
cout<<"Ruthenium:"<<endl
<<"Symbol: Ru"<<endl
<<"Electron configuration: [] ⦏kr⦐4d⁷5s¹"<<endl
<<"Atomic number: 44"<<endl
<<"Atomic mass: 101.07 u"<<endl
<<"Melting point: 2,334 °C"<<endl
<<"Period: period 5"<<endl
<<"Naming: after Ruthenia, the 19th-century Latin name for Russia"<<endl<<endl

<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)It is a rare transition metal belonging to the platinum group of the periodic table."<<endl;

else
if(c==45)
cout<<"Rhodium:"<<endl
<<"Symbol: Rh"<<endl
<<"Electron configuration: [Kr] 4d85s1"<<endl
<<"Atomic number: 45"<<endl
<<"Atomic mass: 102.9055 u"<<endl
<<"Period: period 5"<<endl
<<"Melting point: 2237 K ​(1964 °C, ​3567 °F)"<<endl<<endl

<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)It is a very rare, silvery-white, hard, corrosion-resistant, and chemically inert transition metal. "<<endl;

else
if(c==46)
cout<<"Palladium:"<<endl
<<"Symbol: Pd"<<endl
<<"Electron configuration: [Kr] 4d¹⁰"<<endl
<<"Atomic number: 46"<<endl
<<"Atomic mass: 106.42 u"<<endl
<<"Naming: after asteroid Pallas, itself named after Pallas Athena"<<endl
<<"Period: period 5"<<endl
<<"Heat of fusion: 16.74 kJ/mol"<<endl<<endl
<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.) It is a rare and lustrous silvery-white metal discovered in 1803 by the English chemist William Hyde Wollaston. "<<endl;


else
if(c==47)
cout<<"Silver:"<<endl
<<"Symbol: Ag"<<endl
<<"Atomic mass: 107.8682 u"<<endl
<<"Electron configuration: [Kr] 4d¹⁰5s¹"<<endl
<<"Atomic number: 47"<<endl
<<"Melting point: 961.8 °C"<<endl
<<"Density: 10.49 g/cm³"<<endl
<<"Period: period 5"<<endl
<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)It is a lustrous white metal."<<endl
<<" "<<"2.).It is a good conductor of heat and electricity."<<endl
<<" "<<"3.)It finds use in ornaments."<<endl
<<" "<<"4.)The principal ore of silver is silver glance."<<endl
<<" "<<"5.)It is a malleable and ductile."<<endl
<<" "<<"6.)It does not react with dilute acids."<<endl;

else
if(c==48)
cout<<"Cadmium:"<<endl
<<"Symbol: Cd"<<endl
<<"Electron configuration: [Kr] 4d¹⁰5s²"<<endl
<<"Atomic mass: 112.411 u"<<endl
<<"Atomic number: 48"<<endl
<<"Period: period 5"<<endl
<<"Melting point: 594.22 K ​(321.07 °C, ​609.93 °F)"<<endl
<<"Chemical series: Metal, Transition metal, Toxic heavy metal, Period 5 element, Group 12 element"<<endl

<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)It is a soft bluish white metal."<<endl
<<" "<<"2.)It gets oxidised with moist air but when heated it yields CdO."<<endl
<<" "<<"3.)It melts at 594K and boils at 1040K."<<endl
<<" "<<"4.)With hallogen it forms cadmium hallide."<<endl
<<" "<<"5.)It reacts with nitric acid and sulphuric acid."<<endl;

else
if(c==49)
cout<<"Indium:"<<endl
<<"Symbol: In"<<endl
<<"Electron configuration: [Kr] 4d105s25p1"<<endl
<<"Atomic number: 49"<<endl
<<"Atomic mass: 114.818 u"<<endl
<<"Melting point: 156.6 °C"<<endl
<<"Van der Waals radius: 220 pm"<<endl
<<"Period: period 5"<<endl

<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)It is a lustrous white metal."<<endl
<<" "<<"2.)It is malleable and ductile but becomes brittle at about 473K."<<endl
<<" "<<"3.)It is not attacked by organic acids."<<endl
<<" "<<"4.)It exhibits three allotropic forms."<<endl
<<" "<<"5.)It reacts with sulphur to form stannic sulphide."<<endl;

else
if(c==50)
cout<<"Tin:"<<endl
<<"Symbol: Sn"<<endl
<<"Atomic number: 50"<<endl
<<"Atomic mass: 118.71 u"<<endl
<<"Electron configuration: [Kr] 4d¹⁰5s²5p²"<<endl
<<"Melting point: 231.9 °C"<<endl
<<"Boiling point: 2,602 °C"<<endl
<<"Electro negativity: 1.96"<<endl<<endl

<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)It is a lustrous white metal."<<endl
<<" "<<"2.)It is not attacked by organic acids."<<endl
<<" "<<"3.)It exibits three allotropic forms."<<endl
<<" "<<"4.)It reacts with sulphur to form stannic sulphide."<<endl
<<" "<<"5.)It is melleable & ductile but becomes brittle at about 473k."<<endl;

else
if(c==51)
cout<<"Antimony:"<<endl
<<"Symbol: Sb"<<endl
<<"Atomic number: 51"<<endl
<<"Electron configuration: [Kr] 4d105s25p3"<<endl
<<"Atomic mass: 121.76 u"<<endl
<<"Melting point: 630.6 °C"<<endl
<<"Period: period 5"<<endl
<<"Group: group 15 (pnictogens)"<<endl<<endl

<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)It burns spontaneously with chlorine."<<endl
<<" "<<"2.)It is hard,brittle and white lustrous metal."<<endl
<<" "<<"3.)It forms alloy with tin,lead and copper."<<endl
<<" "<<"4.)At ordinary temperature it is not affected by air."<<endl
<<" "<<"5.)Pure antimony does not dissolve in HCl."<<endl;

else
if(c==52)
cout<<"Tellurium:"<<endl
<<"Symbol: Te"<<endl
<<"Electron configuration: [Kr] 4d105s25p4"<<endl
<<"Atomic number: 52"<<endl
<<"Atomic mass: 127.6 u"<<endl
<<"Electronegativity: 2.1"<<endl
<<"Electrons per shell: 2,8,18,18,6"<<endl
<<"Van der Waals radius: 210 pm"<<endl

<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)It is poor conductor of electricity."<<endl
<<" "<<"2.)Powdered Te is grey in colour."<<endl
<<" "<<"3.)On heating it becomes crystalline."<<endl
<<" "<<"4.)It has highest electrical resistance in metals."<<endl
<<" "<<"5.)It has a metallic appearance."<<endl;

else
if(c==53)
cout<<"Iodine:"<<endl
<<"Symbol: I"<<endl
<<"Atomic mass: 126.90447 u"<<endl
<<"Atomic number: 53"<<endl
<<"Electron configuration: [Kr] 4d105s25p5"<<endl
<<"Boiling point: 184.3 °C"<<endl
<<"Electro negativity: 2.66"<<endl
<<"Melting point: 113.7 °C"<<endl<<endl

<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)It is spriangly soluble in water."<<endl
<<" "<<"2.)Iodine warmed with alcohol forms iodoform."<<endl
<<" "<<"3.)It gives shining black cryastals with metallic lusture."<<endl
<<" "<<"4.)It is strongest reducing halogen."<<endl
<<" "<<"5.)Iodine solution is decoloursed by alkali solution."<<endl;



else
if(c==54)
cout<<"Xenon:"<<endl
<<"Symbol: Xe"<<endl
<<"Electron configuration: [Kr] 4d¹⁰5s²5p⁶"<<endl
<<"Atomic number: 54"<<endl
<<"Atomic mass: 131.293 u"<<endl
<<"Boiling point: -108.1 °C"<<endl
<<"Electrons per shell: 2,8,18,18,8"<<endl
<<"Period: period 5"<<endl

<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)It is a noble gas."<<endl
<<" "<<"2.)It forms a number of stable compounds."<<endl
<<" "<<"3.)It is a monoatomic gas at room temprature."<<endl
<<" "<<"4.)It has zero valency."<<endl
<<" "<<"5.)Xe oxides are formed by reaction of xenon flouride with water."<<endl;

else
if(c==55)
cout<<"Cesium:"<<endl
<<"Symbol: Cs"<<endl
<<"Electron configuration: [Xe] 6s1"<<endl
<<"Atomic number: 55"<<endl
<<"Melting point: 28.44 °C"<<endl
<<"Atomic mass: 132.90545 u"<<endl
<<"Van der Waals radius: 343 pm"<<endl
<<"Electro negativity: 0.79"<<endl<<endl

<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)It is a soft, silvery-golden alkali metal with a melting point of 28.5 °C"<<endl;

else
if(c==56)
cout<<"Barium:"<<endl
<<"Symbol: Ba"<<endl
<<"Atomic mass: 137.327 u"<<endl
<<"Atomic number: 56"<<endl
<<"Electron configuration: [Xe] 6s2"<<endl
<<"Van der Waals radius: 268 pm"<<endl
<<"Melting point: 727 °C"<<endl
<<"Electro negativity: 0.89"<<endl<<endl

<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)Its density is 3.62g/c.c."<<endl
<<" "<<"2.)Its electronegativity is 0.89."<<endl
<<" "<<"3.)Its atomic radius is 222pm."<<endl
<<" "<<"4.)It has melting point & boiling point 1000k &2123k respectively."<<endl
<<" "<<"5.)It imparts Grassy green colour to the flame."<<endl;

else
if(c==57)
cout<<"lanthanum:"<<endl
<<"Symbol: La"<<endl
<<"Electron configuration: [Xe] 5d¹6s²"<<endl
<<"Atomic number: 57"<<endl
<<"Atomic mass: 138.90547 u"<<endl
<<"Van der Waals radius: 250 pm"<<endl
<<"Electro negativity: 1.1"<<endl
<<"Discoverer: Carl Gustaf Mosander"<<endl

<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)Its ionic radius is 103pm."<<endl
<<" "<<"2.)It exhibits oxidation state of +3."<<endl
<<" "<<"3.)Its atomic radius is 187pm."<<endl
<<" "<<"4.)It is good conductor of heat & electricity."<<endl
<<" "<<"5.)It is resistant to corrosion."<<endl;

else
if(c==58)
cout<<"Cerium:"<<endl
<<"Symbol: Ce"<<endl
<<"Electron configuration: [Xe] 4f¹5d¹6s²"<<endl
<<"Atomic number: 58"<<endl
<<"Atomic mass: 140.116 u"<<endl
<<"Oxidation states: +1, +2, +3, +4 (a mildly basic oxide)"<<endl
<<"Period: period 6"<<endl
<<"Discoverers: Jöns Jacob Berzelius, Martin Heinrich Klaproth, Carl Gustaf Mosander"<<endl<<endl

<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)It is a good oxidising agent."<<endl
<<"2.)Forms alloys readily with other metals."<<endl
<<"3.)It has high electropositive character."<<endl
<<"4.)It has low tendancy to form complexes."<<endl
<<"5.)It has very high melting point."<<endl;



else
if(c==59)
cout<<"Praseodymium:"<<endl
<<"Symbol: Pr"<<endl
<<"Electron configuration: [Xe] 4f36s2"<<endl
<<"Discovered: 1885"<<endl
<<"Atomic number: 59"<<endl
<<"Period: period 6"<<endl
<<"Melting point: 1208 K ​(935 °C, ​1715 °F)"<<endl<<endl

<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.) It is a soft, silvery, malleable and ductile metal, valued for its magnetic, electrical, chemical, and optical properties."<<endl;

else
if(c==60)
cout<<"Neodymium:"<<endl
<<"Symbol: Nd"<<endl
<<"Electron configuration: [Xe] 4f⁴6s²"<<endl
<<"Atomic number: 60"<<endl
<<"Atomic mass: 144.242 u"<<endl
<<"Van der Waals radius: 229 pm"<<endl
<<"Discovery: Carl Auer von Welsbach (1885)"<<endl<<endl

<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)It is a hard, slightly malleable, silvery metal that quickly tarnishes in air and moisture."<<endl;


else
if(c==61)
cout<<"Promethium:"<<endl
<<"Symbol: Pm"<<endl
<<"Electron configuration: [Xe] 4f56s2"<<endl
<<"Atomic number: 61"<<endl
<<"Discovery: Charles D. Coryell, Jacob A. Marinsky, Lawrence E. Glendenin (1945)"<<endl
<<"Ionization energies: 1st: 540 kJ/mol; 2nd: 1050 kJ/mol; 3rd: 2150 kJ/mol"<<endl
<<"Period: period 6"<<endl
<<"Chemical series: Metal, Lanthanide, Rare-earth element, Toxic heavy metal, Period 6 element"<<endl<<endl

<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)All of its isotopes are radioactive; it is extremely rare, with only about 500–600 grams naturally occurring in Earth's crust at any given time."<<endl;

else
if(c==62)
cout<<"Samarium:"<<endl
<<"Symbol: Sm"<<endl
<<"Electron configuration: [Xe] 4f⁶6s²"<<endl
<<"Atomic number: 62"<<endl
<<"Atomic mass: 150.36 u"<<endl
<<"Block: f-block"<<endl
<<"Period: period 6"<<endl
<<"Discoverer: Paul-Émile Lecoq de Boisbaudran"<<endl<<endl

<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.) It is a moderately hard silvery metal that slowly oxidizes in air. "<<endl;

else
if(c==63)
cout<<"Europium:"<<endl
<<"Symbol: Eu"<<endl
<<"Electron configuration: [Xe] 4f76s2"<<endl
<<"Atomic mass: 151.964 u"<<endl
<<"Atomic number: 63"<<endl
<<"Naming: after Europe"<<endl
<<"Block: f-block"<<endl
<<"Oxidation states: 0, +2, +3 (a mildly basic oxide)"<<endl

<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)Europium is a soft silvery metal, both are and expensive. It is the most reactive of the lanthanide group. "<<endl;

else
if(c==64)
cout<<"Gadolinium:"<<endl
<<"Symbol: Gd"<<endl
<<"Electron configuration: [Xe] 4f75d16s2"<<endl
<<"Atomic number: 64"<<endl
<<"Atomic mass: 157.25 u"<<endl
<<"Discovery: Jean Charles Galissard de Marignac (1880)"<<endl
<<"Naming: after the mineral Gadolinite (itself named after Johan Gadolin)"<<endl<<endl

<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)Gadolinium is a silvery-white metal when oxidation is removed."<<endl;

else
if(c==65)
cout<<"Terbium:"<<endl
<<"Symbol: Tb"<<endl
<<"Atomic number: 65"<<endl
<<"Electron configuration: [Xe] 4f⁹6s²"<<endl
<<"Atomic mass: 158.92535 u"<<endl
<<"Period: period 6"<<endl
<<"Naming: after Ytterby (Sweden), where it was mined"<<endl
<<"Discoverer: Carl Gustaf Mosander"<<endl<<endl

<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)It is a silvery-white, rare earth metal that is malleable, and ductile."<<endl;


else
if(c==66)
cout<<"Dysprosium:"<<endl
<<"Symbol: Dy"<<endl
<<"Electron configuration: [Xe] 4f106s2"<<endl
<<"Atomic number: 66"<<endl
<<"Atomic mass: 162.5 u"<<endl
<<"Period: period 6"<<endl
<<"Discoverer: Paul-Émile Lecoq de Boisbaudran"<<endl
<<"Melting point: 1680 K ​(1407 °C, ​2565 °F)"<<endl<<endl

<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.) It is a rare-earth element in the lanthanide series with a metallic silver luster."<<endl;

else
if(c==67)
cout<<"Holmium:"<<endl
<<"Symbol: Ho"<<endl
<<"Electron configuration: [Xe] 4f116s2"<<endl
<<"Atomic number: 67"<<endl
<<"Atomic mass: 164.93032 u"<<endl
<<"Period: period 6"<<endl
<<"Oxidation states: 0, +1, +2, +3 (a basic oxide)"<<endl
<<"Discoverers: Per Teodor Cleve, Marc Delafontaine, Jacques-Louis Soret"<<endl<<endl

<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.) It is a relatively soft, silvery, fairly corrosion-resistant and malleable metal."<<endl;


else
if(c==68)
cout<<"Erbium:"<<endl
<<"Symbol: Er"<<endl
<<"Electron configuration: [Xe] 4f126s2"<<endl
<<"Atomic number: 68"<<endl
<<"Atomic mass: 167.259 u"<<endl
<<"Period: period 6"<<endl
<<"Discoverer: Carl Gustaf Mosander"<<endl
<<"Melting point: 1802 K ​(1529 °C, ​2784 °F)"<<endl<<endl
<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)A silvery-white solid metal when artificially isolated, natural erbium is always found in chemical combination with other elements."<<endl;

else
if(c==69)
cout<<"Thulium:"<<endl
<<"Symbol: Tm"<<endl
<<"Electron configuration: [Xe] 4f136s2"<<endl
<<"Atomic number: 69"<<endl
<<"Atomic mass: 168.93421 u"<<endl
<<"Melting point: 1,545 °C"<<endl
<<"Discovered: 1879"<<endl
<<"Period: period 6"<<endl
<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)Thulium is a moderately hard, silvery white metal that is stable in air but can easily be dissolved in diluted acids—except hydrofluoric acid (HF)"<<endl;

else
if(c==70)
cout<<"Ytterbium:"<<endl
<<"Symbol: Yb"<<endl
<<"Electron configuration: [Xe] 4f146s2"<<endl
<<"Atomic number: 70"<<endl
<<"Atomic mass: 173.04 u"<<endl
<<"Naming: after Ytterby (Sweden), where it was mined"<<endl
<<"Period: period 6"<<endl<<endl

<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)ytterbium is a bright and shiny metal that is both ductile and malleable and is more reactive than the other lanthanide metals"<<endl;


else
if(c==71)
cout<<"Lutetium:"<<endl
<<"Symbol: Lu"<<endl
<<"Electron configuration: [Xe] 4f145d16s2"<<endl
<<"Atomic number: 71"<<endl
<<"Period: period 6"<<endl
<<"Discovery: Carl Auer von Welsbach and Georges Urbain (1906)"<<endl
<<"Group: group 3"<<endl<<endl

<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)It is a silvery white metal, which resists corrosion in dry air, but not in moist air."<<endl;

else
if(c==72)
cout<<"Hafnium:"<<endl
<<"Symbol: Hf"<<endl
<<"Electron configuration: [Xe] 4f¹⁴5d²6s²"<<endl
<<"Atomic number: 72"<<endl
<<"Atomic mass: 178.49 u"<<endl
<<"Electro negativity: 1.3"<<endl
<<"Oxidation states: −2, 0, +1, +2, +3, +4 (an amphoteric oxide)"<<endl
<<"Discoverers: George de Hevesy, Dirk Coster"<<endl<<endl

<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)It is a silvery white metal."<<endl
<<" "<<"2.)It occurs in minerals."<<endl
<<" "<<"3.)It exhibits +3 & +4 oxidation states."<<endl;

else
if(c==73)
cout<<"Tantalum:"<<endl
<<"Symbol: Ta"<<endl
<<"Atomic number: 73"<<endl
<<"Electron configuration: [Xe] 4f145d36s2"<<endl
<<"Atomic mass: 180.94788 u"<<endl
<<"Melting point: 3,020 °C"<<endl
<<"Period: period 6"<<endl
<<"Group: group 5"<<endl<<endl

<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)It is resistant to corrosion."<<endl
<<" "<<"2.)It is used in surgical vessel & as an anlytical weights."<<endl
<<" "<<"3.)It's atomic radii is 134pm."<<endl;

else
if(c==74)
cout<<"Tungsten:"<<endl
<<"Symbol: W"<<endl
<<"Melting point: 3,422 °C"<<endl
<<"Atomic number: 74"<<endl
<<"Electron configuration: [Xe] 6s²4f¹⁴5d⁴"<<endl
<<"Atomic mass: 183.84 u"<<endl
<<"Boiling point: 5,555 °C"<<endl
<<"Period: period 6"<<endl<<endl

<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)It is hardest metal known."<<endl
<<" "<<"2.)It's filament is used in incandescent bulbs."<<endl
<<" "<<"3.)It's alloy forms steel for high speed tools."<<endl;

else
if(c==75)
cout<<"Rhenium:"<<endl
<<"Symbol: Re"<<endl
<<"Electron configuration: [Xe] 4f145d56s2"<<endl
<<"Atomic number: 75"<<endl
<<"Atomic mass: 186.207 u"<<endl
<<"Melting point: 3,185 °C"<<endl
<<"Discovered: 1925"<<endl
<<"Discoverers: Ida Noddack, Walter Noddack, Otto Berg"<<endl<<endl

<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)With an estimated average concentration of 1 part per billion, rhenium is one of the rarest elements in the Earth's crust. "<<endl;


else
if(c==76)
cout<<"Osmium:"<<endl
<<"Symbol: Os"<<endl
<<"Atomic mass: 190.23 u"<<endl
<<"Atomic number: 76"<<endl
<<"Electron configuration: [Xe] 4f145d66s2"<<endl
<<"Melting point: 3,033 °C"<<endl
<<"Period: period 6"<<endl
<<"Discoverer: Smithson Tennan"<<endl<<endl

<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)It is a hard, brittle, bluish-white transition metal in the platinum group that is found as a trace element in alloys, mostly in platinum ores."<<endl;


else
if(c==77)
cout<<"Iridium:"<<endl
<<"Symbol: Ir"<<endl
<<"Atomic number: 77"<<endl
<<"Electron configuration: [Xe] 4f145d76s2"<<endl
<<"Atomic mass: 192.217 u"<<endl
<<"Melting point: 2,446 °C"<<endl
<<"CAS ID: 7439-88-5"<<endl
<<"Period: period 6"<<endl<<endl

<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)It is considered as the second-densest naturally occurring metal with a density of 22.56 g/cm³"<<endl;


else
if(c==78)
cout<<"Platinium:"<<endl
<<"Symbol: Pt"<<endl
<<"Electron configuration: [Xe] 4f¹⁴5d⁹6s¹"<<endl
<<"Atomic number: 78"<<endl
<<"Atomic mass: 195.084 u"<<endl
<<"Melting point: 1,768 °C"<<endl
<<"Period: period 6"<<endl
<<"Discoverer: Antonio de Ulloa"<<endl<<endl

<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)It is very less reactive metal."<<endl
<<" "<<"2.)It shows catalytic properties in contact process."<<endl
<<" "<<"3.)It is used in the manufacture of hydrogen electrodes."<<endl;

else
if(c==79)
cout<<"Gold:"<<endl
<<"Symbol: Au"<<endl
<<"Atomic mass: 196.96657 u"<<endl
<<"Melting point: 1,064 °C"<<endl
<<"Atomic number: 79"<<endl
<<"Electron configuration: [Xe] 4f145d106s1"<<endl
<<"Period: period 6"<<endl
<<"Discovery: In the Middle East (before 6000 BCE)"<<endl<<endl

<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<" "<<"1.)It is known as coinage metal."<<endl
<<" "<<"2.)It is used in jwellery."<<endl
<<" "<<"3.)It has high electrical & thermal conductivity."<<endl;

else
if(c==80)
cout<<"Mercury:"<<endl
<<"Symbol: Hg"<<endl
<<"Atomic mass: 200.59 u"<<endl
<<"Atomic number: 80"<<endl
<<"Melting point: -38.83 °C"<<endl
<<"Electron configuration: [Xe] 4f¹⁴5d¹⁰6s²"<<endl
<<"Boiling point: 356.7 °C"<<endl
<<"Period: period 6"<<endl<<endl

<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)It is used in thermometers."<<endl
<<" "<<"2.)It is useful in making electrical contacts."<<endl
<<" "<<"3.)It is used in preparing amalgams of Cu,Ag,etc."<<endl
<<" "<<"4.)It is used as electrolyte in various processes."<<endl;

else
if(c==81)
cout<<"Thalium:-"<<endl
<<"Symbol: Tl"<<endl
<<"Atomic number: 81"<<endl
<<"Electron configuration: [Xe] 4f145d106s26p1"<<endl
<<"Atomic mass: 204.3833 u"<<endl
<<"Boiling point: 1,473 °C"<<endl
<<"Oxidation states: −5, −2, −1, +1, +2, +3 (a mildly basic oxide)"<<endl
<<"Period: period 6"<<endl<<endl

<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)It is a gray post-transition metal that is not found free in nature."<<endl;


else
if(c==82)
cout<<"Lead:"<<endl
<<"Symbol: Pb"<<endl
<<"Atomic mass: 207.2 u"<<endl
<<"Atomic number: 82"<<endl
<<"Melting point: 327.5 °C"<<endl
<<"Electron configuration: [Xe] 6s²4f¹⁴5d¹⁰6p²"<<endl
<<"Boiling point: 1,749 °C"<<endl
<<"Period: period 6"<<endl<<endl

<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)It is used for making containers."<<endl
<<" "<<"2.)It's atomic radius is 146pm."<<endl
<<" "<<"3.)It's electro negativity is 1.9."<<endl;

else
if(c==83)
cout<<"Bismuth:"<<endl
<<"Symbol: Bi"<<endl
<<"Atomic number: 83"<<endl
<<"Electron configuration: [Xe] 4f145d106s26p3"<<endl
<<"Atomic mass: 208.9804 u"<<endl
<<"Melting point: 271.5 °C"<<endl
<<"Van der Waals radius: 230 pm"<<endl
<<"Discoverer: Claude François Geoffroy"<<endl<<endl

<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)It's density is 9.3g/c.c."
<<" "<<"2.)Bismuth is a white, crystalline, brittle metal with a pinkish tinge. "<<endl;

else
if(c==84)
cout<<"Polonium:"<<endl
<<"Symbol: Po"<<endl
<<"Atomic number: 84"<<endl
<<"Atomic mass: 209 u"<<endl
<<"Electron configuration: [Xe] 6s24f145d106p4"<<endl
<<"Van der Waals radius: 200 pm"<<endl
<<"Period: period 6"<<endl
<<"Discoverers: Marie Curie, Pierre Curie"<<endl<<endl

<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)Polonium is a chalcogen. A rare and highly radioactive metal with no stable isotopes."<<endl;

else
if(c==85)
cout<<"Astatine:-"<<endl
<<"Symbol: At"<<endl
<<"Atomic number: 85"<<endl
<<"Electron configuration: [Xe] 4f¹⁴5d¹⁰6s²6p⁵"<<endl
<<"Melting point: 301.8 °C"<<endl
<<"Boiling point: 336.8 °C"<<endl
<<"Electro negativity: 2.2"<<endl
<<"Group: group 17 (halogens)"<<endl<<endl

<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.) It is the rarest naturally occurring element in the Earth's crust"<<endl;


else
if(c==86)
cout<<"Radon:"<<endl
<<"Symbol: Rn"<<endl
<<"Electron configuration: [Xe] 4f145d106s26p6"<<endl
<<"Atomic number: 86"<<endl
<<"Atomic mass: 222 u"<<endl
<<"Electrons per shell: 2,8,18,32,18,8"<<endl
<<"Boiling point: -61.7 °C"<<endl
<<"Discovered: 1900"<<endl<<endl

<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)It is a radioactive, colorless, odorless, tasteless noble gas."<<endl;


else
if(c==87)
cout<<"Francium:"<<endl
<<"Symbol: Fr"<<endl
<<"Electron configuration: [Rn] 7s1"<<endl
<<"Atomic number: 87"<<endl
<<"Melting point: 27 °C"<<endl
<<"Van der Waals radius: 348 pm"<<endl
<<"Electro negativity: 0.79"<<endl
<<"Atomic mass: 223 u"<<endl<<endl

<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)It is extremely radioactive; its most stable isotope, francium-223, has a half-life of only 22 minutes."<<endl;

else
if(c==88)
cout<<"Radium:"<<endl
<<"Symbol: Ra"<<endl
<<"Atomic number: 88"<<endl
<<"Electron configuration: [Rn] 7s2"<<endl
<<"Atomic mass: 226 u"<<endl
<<"Discovered: December 21, 1898"<<endl
<<"Period: period 7"<<endl
<<"Discoverers: Marie Curie, Pierre Curie"<<endl

<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)It's density is 6g/c.c."<<endl
<<" "<<"2.)It's ionic radii is 1.52pm."<<endl
<<" "<<"3.)It is a radioactive element."<<endl
<<" "<<"4.)It was discovered by Madam Curie."<<endl;

else
if(c==89)
cout<<"Actinum:"<<endl
<<"Symbol: Ac"<<endl
<<"Electron configuration: [Rn] 6d17s2"<<endl
<<"Atomic number: 89"<<endl
<<"Atomic mass: 227 u"<<endl
<<"Period: period 7"<<endl
<<"Melting point: 1500 K ​(1227 °C, ​2240 °F) (estimated)"<<endl
<<"Block: f-block"<<endl<<endl

<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)Actinium is a silvery radioactive metallic element. Actinium glows in the dark due to its intense radioactivity with a blue light."<<endl;

else
if(c==90)
cout<<"Thorium:"<<endl
<<"Symbol: Th"<<endl
<<"Electron configuration: [Rn] 6d27s2"<<endl
<<"Atomic number: 90"<<endl
<<"Atomic mass: 232.03806 u"<<endl
<<"CAS ID: 7440-29-1"<<endl
<<"Period: period 7"<<endl
<<"Oxidation states: +1, +2, +3, +4 (a weakly basic oxide)"<<endl<<endl


<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)Thorium is silvery and tarnishes black when it is exposed to air, forming thorium dioxide."<<endl;

else
if(c==91)
cout<<"Protactinum:-"<<endl
<<"Symbol: Pa"<<endl
<<"Atomic number: 91"<<endl
<<"Electron configuration: [Rn] 5f26d17s2"<<endl
<<"Atomic mass: 231.03588 u"<<endl
<<"Period: period 7"<<endl
<<"Discoverers: Kazimierz Fajans, Oswald Helmuth Göhring"<<endl<<endl

<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)It is a dense, silvery-gray actinide metal which readily reacts with oxygen, water vapor and inorganic acids."<<endl;

else
if(c==92)
cout<<"Uranium:"<<endl
<<"Symbol: U"<<endl
<<"Atomic number: 92"<<endl
<<"Atomic mass: 238.02891 u"<<endl
<<"Electron configuration: [Rn] 5f36d17s2"<<endl
<<"Electrons per shell: 2,8,18,32,21,9,2"<<endl
<<"Discoverer: Martin Heinrich Klaproth"<<endl
<<"Period: period 7"<<endl<<endl

<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)Uranium is a naturally radioactive element. It powers nuclear reactors and atomic bombs."<<endl;

else
if(c==93)
cout<<"Neptunium:"<<endl
<<"Symbol: Np"<<endl
<<"Electron configuration: [Rn] 5f46d17s2"<<endl
<<"Atomic number: 93"<<endl
<<"Atomic mass: 237.0482 u"<<endl
<<"Discovered: 1940"<<endl
<<"Period: period 7"<<endl
<<"Discoverers: Edwin McMillan, Philip Abelson"<<endl<<endl

<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)A radioactive actinide metal, neptunium is the first transuranic element."<<endl;

else
if(c==94)
cout<<"Plutonium:"<<endl
<<"Symbol: Pu"<<endl
<<"Atomic number: 94"<<endl
<<"Electron configuration: [Rn] 5f67s2"<<endl
<<"Atomic mass: 244 u"<<endl
<<"Period: period 7"<<endl
<<"Naming: after dwarf planet Pluto, itself named after classical god of the underworld Pluto"<<endl
<<"Discoverers: Joseph W. Kennedy, Glenn T. Seaborg, Arthur Wahl, Edwin McMillan"<<endl


<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)It is an actinide metal of silvery-gray appearance that tarnishes when exposed to air, and forms a dull coating when oxidized. "<<endl;


else
if(c==95)
cout<<"Americium:"<<endl
<<"Symbol: Am"<<endl
<<"Atomic number: 95"<<endl
<<"Electron configuration: [Rn] 5f77s2"<<endl
<<"Atomic mass: 243 u"<<endl
<<"Discovered: 1944"<<endl
<<"Period: period 7"<<endl
<<"Discoverers: Glenn T. Seaborg, Albert Ghiorso, Ralph A. James"<<endl<<endl

<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)Americium, a silvery-white, synthetic element, is created during nuclear reactions of heavy elements. "<<endl;

else
if(c==96)
cout<<"Curium:"<<endl
<<"Symbol: Cm"<<endl
<<"Electron configuration: [Rn] 5f76d17s2"<<endl
<<"Atomic number: 96"<<endl
<<"Atomic mass: 247 u"<<endl
<<"Melting point: 1,347 °C"<<endl
<<"Naming: named after Marie Skłodowska-Curie and Pierre Curie"<<endl
<<"Discoverers: Glenn T. Seaborg, Ralph A. James"<<endl<<endl

<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)Curium is a hard, brittle, silvery radioactive metal that tarnishes slowly and which can only be produced in nuclear reactors."<<endl;

else
if(c==97)
cout<<"Berkelium:"<<endl
<<"Symbol: Bk"<<endl
<<"Electron configuration: [Rn] 5f97s2"<<endl
<<"Atomic number: 97"<<endl
<<"Atomic mass: 247 u"<<endl
<<"Discovered: 1949"<<endl
<<"Naming: after Berkeley, California, where it was discovered"<<endl
<<"Discoverers: Albert Ghiorso, Glenn T. Seaborg"<<endl<<endl

<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)Berkelium is a soft, silvery-white, radioactive actinide metal."<<endl;

else
if(c==98)
cout<<"Californium:"<<endl
<<"Symbol: Cf"<<endl
<<"Atomic number: 98"<<endl
<<"Electron configuration: [Rn] 5f107s2"<<endl
<<"Atomic mass: 251 u"<<endl
<<"Period: period 7"<<endl
<<"Discovery: Lawrence Berkeley National Laboratory (1950)"<<endl

<<"Naming: after California, where it was discovered"<<endl<<endl
<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)Californium is a very strong neutron emitter. It is used in portable metal detectors, for identifying gold and silver ores."<<endl;

else
if(c==99)
cout<<"Einsteinium:"<<endl
<<"Symbol: Es"<<endl
<<"Atomic number: 99"<<endl
<<"Electron configuration: [Rn] 5f117s2"<<endl
<<"Atomic mass: 252 u"<<endl
<<"Period: period 7"<<endl
<<"Naming: after Albert Einstein"<<endl
<<"Discoverers: Albert Ghiorso, Glenn T. Seaborg"<<endl<<endl
<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)einsteinium (as the isotope einsteinium-253) was first produced by intense neutron irradiation of uranium-238 "<<endl;


else
if(c==100)
cout<<"Fermium:"<<endl
<<"Symbol: Fm"<<endl
<<"Atomic number: 100"<<endl
<<"Electron configuration: [Rn] 5f127s2"<<endl
<<"Atomic mass: 257 u"<<endl
<<"Electrons per shell: 2,8,18,32,30,8,2"<<endl
<<"Discovered: 1953"<<endl
<<"Period: period 7"<<endl<<endl

<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)It is an actinide and the heaviest element that can be formed by neutron bombardment of lighter elements."<<endl;

else
if(c==101)
cout<<"Mendelevium:"<<endl
<<"Symbol: Md"<<endl
<<"Atomic number: 101"<<endl
<<"Discovered: 1955"<<endl
<<"Discoverer: Glenn T. Seaborg"<<endl
<<"Naming: after Dmitri Mendeleev"<<endl
<<"Period: period 7"<<endl
<<"Mass number: 258"<<endl<<endl

<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)A metallic radioactive transuranium element in the actinide series"<<endl;

else
if(c==102)
cout<<"Nobelium:"<<endl
<<"Symbol: No"<<endl
<<"Electron configuration: [Rn] 5f147s2"<<endl
<<"Atomic number: 102"<<endl
<<"Atomic mass: 259 u"<<endl
<<"Period: period 7"<<endl
<<"Oxidation states: +2, +3"<<endl
<<"Discovery: Joint Institute for Nuclear Research (1966)"<<endl
<<"Named in honor of Alfred Nobel"<<endl<<endl
<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)A radioactive metal, it is the tenth transuranic element and is the penultimate member of the actinide series."<<endl;


else
if(c==103)
cout<<"Lawrencium:"<<endl
<<"Symbol: Lr"<<endl
<<"Electron configuration: [Rn] 5f147s27p1"<<endl
<<"Atomic number: 103"<<endl
<<"Atomic mass: 262 u"<<endl
<<"Naming: after Ernest Lawrence"<<endl
<<"Period: period 7"<<endl
<<"Discoverers: Lawrence Berkeley National Laboratory, Albert Ghiorso, Joint Institute for Nuclear Research"<<endl<<endl

<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.) Not occurring in nature, lawrencium (probably as the isotope lawrencium-257) was first produced in 1961."<<endl;

else
if(c==104)
cout<<"Rutherfordium:"<<endl
<<"Symbol: Rf"<<endl
<<"Electron configuration: [Rn] 5f146d27s2"<<endl
<<"Atomic number: 104"<<endl
<<"Atomic mass: 261 u"<<endl
<<"Naming: after Ernest Rutherford"<<endl
<<"Period: period 7"<<endl
<<"Discoverers: Albert Ghiorso, Joint Institute for Nuclear Research"<<endl<<endl

<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)It is not found in nature and can only be created in a laboratory."<<endl;

else
if(c==105)
cout<<"Dubnium:"<<endl
<<"Symbol: Db"<<endl
<<"Electron configuration: [Rn] 5f146d37s2"<<endl
<<"Atomic number: 105"<<endl
<<"Atomic mass: 262 u"<<endl
<<"Discovered: 1967"<<endl
<<"Discoverer: Albert Ghiorso"<<endl
<<"Naming: after Dubna, Moscow Oblast, Russia, site of Joint Institute for Nuclear Research"<<endl<<endl

<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)It is highly radioactive: the most stable known isotope, dubnium-268, has a half-life of about 28 hours."<<endl;

else
if(c==106)
cout<<"Seaborgium:"<<endl
<<"Symbol: Sg"<<endl
<<"Atomic number: 106"<<endl
<<"Naming: after Glenn T. Seaborg"<<endl
<<"Electron configuration: 5f14 6d4 7s2"<<endl
<<"Electrons per shell: 2, 8, 18, 32, 32, 12, 2"<<endl
<<"Period: period 7"<<endl
<<"Discoverers: Albert Ghiorso, Lawrence Berkeley National Laboratory"<<endl<<endl

<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)Seaborgium is a transuranium element. It is created by bombarding californium-249 with oxygen-18 nuclei. "<<endl;

else
if(c==107)
cout<<"Bohrium:"<<endl
<<"Symbol: Bh"<<endl
<<"Atomic number: 107"<<endl
<<"Atomic mass: 264 u"<<endl
<<"Naming: after Niels Bohr"<<endl
<<"Electron configuration: 5f14 6d5 7s2"<<endl
<<"Electrons per shell: 2, 8, 18, 32, 32, 13, 2"<<endl
<<"Discoverers: Peter Armbruster, Gottfried Münzenberg"<<endl
<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)Classified as a transition metal, Bohrium is a solid at room temperature."<<endl;

else
if(c==108)
cout<<"Hassium:"<<endl
<<"Symbol: Hs"<<endl
<<"Atomic number: 108"<<endl
<<"Atomic mass: 269 u"<<endl
<<"Discovered: 1984"<<endl
<<"Period: period 7"<<endl
<<"Block: d-block"<<endl
<<"Discoverers: Gottfried Münzenberg, Peter Armbruster"<<endl<<endl
<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)Hassium is highly radioactive; its most stable known isotopes have half-lives of approximately ten seconds."<<endl;


else
if(c==109)
cout<<"Meitnerium:"<<endl
<<"Symbol: Mt"<<endl
<<"Atomic number: 109"<<endl
<<"Atomic mass: 278 u"<<endl
<<"Discovered: August 29, 1982"<<endl
<<"Naming: after Lise Meitner"<<endl
<<"Discoverers: Peter Armbruster, Gottfried Münzenberg"<<endl<<endl

<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)Meitnerium is an artificially produced radioactive element."<<endl;

else
if(c==110)
cout<<"Darmstadtium:"<<endl
<<"Symbol: Ds"<<endl
<<"Atomic number: 110"<<endl
<<"Atomic mass: 281 u"<<endl
<<"Discovered: 1994"<<endl
<<"Discoverer: Sigurd Hofmann"<<endl
<<"Naming: after Darmstadt, Germany, where it was discovered"<<endl<<endl

<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)The most stable known isotope, darmstadtium-281, has a half-life of approximately 12.7 seconds."<<endl;


else
if(c==111)
cout<<"Roentgenium:"<<endl
<<"Symbol: Rg"<<endl
<<"Atomic number: 111"<<endl
<<"Atomic mass: 282 u"<<endl
<<"Naming: after Wilhelm Röntgen"<<endl
<<"Period: period 7"<<endl
<<"Discovery: Gesellschaft für Schwerionenforschung (1994)"<<endl<<endl

<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)It is made by fusing nickel and bismuth atoms in a heavy ion accelerator."<<endl;

else
if(c==112)
cout<<"Copernicium:"<<endl
<<"Symbol: Cn"<<endl
<<"Atomic number: 112"<<endl
<<"Atomic mass: 285 u"<<endl
<<"Naming: after Nicolaus Copernicus"<<endl
<<"Period: period 7"<<endl
<<"Electron configuration: 5f14 6d10 7s2 (predicted)"<<endl
<<"Discoverers: Sigurd Hofmann, Victor Ninov"<<endl<<endl

<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)It is formed by fusing lead and zinc atoms in a heavy ion accelerator."<<endl;

else
if(c==113)
cout<<"Nihonium:"<<endl
<<"Symbol: Nh"<<endl
<<"Atomic mass: 286 u"<<endl
<<"Atomic number: 113"<<endl
<<"Discovered: 2003"<<endl
<<"Naming: After Japan (Nihon in Japanese)"<<endl
<<"Period: period 7"<<endl
<<"Discoverer: Riken"<<endl<<endl

<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)A highly radioactive metal, of which only a few atoms have ever been made."<<endl;

else
if(c==114)
cout<<"Flerovium:"<<endl
<<"Symbol: Fl"<<endl
<<"Atomic number: 114"<<endl
<<"Atomic mass: 289 u"<<endl
<<"Discovered: December 1998"<<endl
<<"Naming: after Flerov Laboratory of Nuclear Reactions (itself named after Georgy Flyorov)"<<endl
<<"Period: period 7"<<endl
<<"Electron configuration: 5f14 6d10 7s2 7p2 (predicted)"<<endl<<endl

<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)Flerovium is a radioactive, synthetic element about which little is known. "<<endl;

else
if(c==115)
cout<<"Moscovium:"<<endl
<<"Symbol: Mc"<<endl
<<"Atomic number: 115"<<endl
<<"Discovered: 2003"<<endl
<<"Atomic mass: 289 u"<<endl
<<"Discoverer: Joint Institute for Nuclear Research"<<endl
<<"Naming: After Moscow region"<<endl
<<"Electron configuration: 5f14 6d10 7s2 7p3 (predicted)"<<endl<<endl

<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)Moscovium is highly radioactive and has no known biological or industrial use beyond that of research."<<endl;

else
if(c==116)
cout<<"Livermorium:"<<endl
<<"Symbol: Lv"<<endl
<<"Atomic number: 116"<<endl
<<"Atomic mass: 293 u"<<endl
<<"Discovered: 2000"<<endl
<<"Naming: after Lawrence Livermore National Laboratory, itself named partly after Livermore, California"<<endl
<<"Discoverer: Joint Institute for Nuclear Research"<<endl
<<"Period: period 7"<<endl<<endl

<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)It is a white solid used in the manufacture of high-temperature refractory bricks, electrical and thermal insulators."<<endl;

else
if(c==117)
cout<<"Tennessine:"<<endl
<<"Symbol: Ts"<<endl
<<"Atomic number: 117"<<endl
<<"Discovered: April 5, 2010"<<endl
<<"CAS ID: 87658-56-8"<<endl
<<"Mass number: 294"<<endl
<<"Discoverers: Yuri Oganessian, Joint Institute for Nuclear Research"<<endl
<<"Chemical series: Halogen, Period 7 element"<<endl<<endl

<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)Tennessine is a radioactive, artificially produced element about which little is known. "<<endl;

else
if(c==118)
cout<<"Oganesson:"<<endl
<<"Symbol: Og"<<endl
<<"Atomic number: 118"<<endl
<<"Atomic mass: 294 u"<<endl
<<"Discovered: 2006"<<endl
<<"Electron configuration: 5f14 6d10 7s2 7p6 (predicted)"<<endl
<<"Electrons per shell: 2, 8, 18, 32, 32, 18, 8 (predicted)"<<endl
<<"Discoverers: Yuri Oganessian, Joint Institute for Nuclear Research"<<endl<<endl
<<" "<<"......................Characteristics of The Element........................"<<endl
<<" "<<"1.)Oganesson has the highest atomic number and highest atomic mass of all known elements."<<endl;

}

return 0;

}
