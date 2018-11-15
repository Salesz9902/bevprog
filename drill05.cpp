#include "std_lib_facilities.h"

int main()
{
try{
//1
cout << "Success!\n"; 	//nem Cout, hanem cout
//2
cout << "Success!\n";	//lemaradt a vegen a " es a ;
//3
cout << "Success!\n"; //folosleges ", rossz helyen van a \n
//4
cout << "success\n"; // valtozokent irja ki, ilyen valtozo nincs, hogy success
//5
string res = 7; vector<int> v(10); v[5] = res; cout << "Success!\n"; //nem adhatunk meg stringet ha int a tipus! tehat int res
//6
vector<int> v(10); v(5) = 7; if (v(5)!=7) cout << "Success!\n";  //nem v(5), hanem v[5]
//7
if (cond) cout << "Success!\n"; else cout << "Fail!\n";			//cond nem feltetel!
//8
bool c = false; if (c) cout << "Success!\n"; else cout << "Fail!\n";	//forditva: if(c) cout << "Fail!\n"; else cout << "Success!\n"; 
//9
string s = "ape"; boo c = "fool"<s; if (c) cout << "Success!\n";  //a boo ertelmetlen, ehelyett stringet es if szinten ertelmetlen
//10
string s = "ape"; if (s=="fool") cout << "Success!\n"; //nem lesz igaz, igy nem sikeres
//11
string s = "ape"; if (s=="fool") cout < "Success!\n";	//szintaktikai hiba cout-nal lemaradt a <, tehat cout<<"Success!\n";
//12
string s = "ape"; if (s+"fool") cout < "Success!\n";	//rossz a feltetel
//13
vector<char> v(5); for (int i=0; 0<v.size(); ++i) ; cout <<"Success!\n"; //0 mindig kisebb lesz, allando, vegtelen ciklus lesz, for ciklus vegere nem kell ;
//14
vector<char> v(5); for (int i=0; i<=v.size(); ++i) ; cout <<"Success!\n"; //tulindexelunk a vektor nagysagan, for utan nem kell ;
//15
string s = "Success!\n"; for (int i=0; i<6; ++i) cout << s[i]; //az s string tobb betubol all, mint 6, igy tulmegy a tomb szamossagan
//16
if (true) then cout << "Success!\n"; else cout << "Fail!\n"; //then szo folosleges
//17
int x = 2000; char c = x; if (c==2000) cout << "Success!\n"; //charnak nem adunk at egesz szam erteket!
//18
string s = "Success!\n"; for (int i=0; i<10; ++i) cout << s[i]; //a tomb megy tul a betu szaman
//19
vector v(5); for (int i=0; i<=v.size(); ++i) ; cout << "Success!\n"; //az = miatt tulindexel a vektoron, illetve nem kell a for utan a ;
//20
int i=0; int j = 9; while (i<10) ++j; if (j<i) cout << "Success!\n"; //ismet vegtelen while ciklus
//21
int x = 2; double d = 5/(x–2); if (d==2*x+0.5) cout <<"Success!\n"; //egesz tipusbol ha elveszunk double-t nem kapunk szamunkra megfelelo erteket
//22
string<char> s = "Success!\n"; for (int i=0; i<=10; ++i) cout <<s[i];	//string<char> s hibas, helyette string s="Success!\n"
//23
int i=0; while (i<10) ++j; if (j<i) cout << "Success!\n";	//vegtelen ciklus a while, mert i-t nem noveljuk
//24
int x = 4; double d = 5/(x–2); if (d=2*x+0.5) cout << "Success!\n";	//if-ben d== nem csak d=, mert nem erteket adunk, hanem vizsgaljuk
//25
cin << "Success!\n"; // nem cin, hanem cout
}
catch(exception& e)
{
	cerr<<"error: "<<e.what();
	keep_window_open();
	return 1;
}
}
