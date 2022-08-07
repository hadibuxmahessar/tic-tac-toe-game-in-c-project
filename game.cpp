// tick.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
class game {
private:
    char tr = '0', tm = '0', tl = '0', mr = '0', m = '0', ml = '0', br = '0', bm = '0', bl = '0';
public:
    void board(char tr, char tm, char tl, char mr, char m, char ml, char br, char bm, char bl) {
        cout << tl << "                   " << tm << "                 " << tr << endl;
        cout << "----------------------------------------" << endl;
        cout << ml << "                   " << m << "                 " << mr << endl;
        cout << "----------------------------------------" << endl;
        cout << bl << "                   " << bm << "                 " << br << endl;
    }
    void ai_() {
        //TOP 
        // CHECKING IF TOP LEFT IS FILLED
       // if (tl == '1') {
         



 if ((tl == '1' && tm == '1') && (tr != 'X'&&tr!='1')) {
    tr = 'X';
}
else if ((tl == '1' && ml == '1') && (bl != 'X'&&bl!='1')) {
    bl = 'X';
}
else if ((tl == '1' && m == '1') && (br != 'X'&& br!='1'))
br = 'X';
//CHECKING IF TOP MIDDLE IS FILLED
else if ((tm == '1' && tl == '1') && (tr != 'X'&&tr!='1'))
tr = 'X';
else if ((m == '1' && tm == '1') && (bm != 'X'&&bm!='1'))
bm = 'X';
else if ((tm == '1' && tr == '1') && (tl != 'X'&&tl!='1'))
tl = 'X';
//CHECKING TOP RIGHT
else if (tr == '1' && tm == '1' && tl != 'X'&&tl!='1')
tl = 'X';
else if ((tr == '1' && m == '1') && (bl != 'X'&&bl!='1'))
bl = 'X';
else if ((tr == '1' && mr == '1') && (br != 'X'&&br!='1'))
br = 'X';
//CHECKING MIDDLE 
//CHECKING IF MIDDLE LEFT IS FILLED
     //if (ml == '1' && (bl != 'X' || tl != 'X' || mr != 'X')) {
else if ((ml == '1' && tl == '1') && (bl != 'X'&&bl!='1'))
bl = 'X';
else if ((ml == '1' && bl == '1') && (tl != 'X'&&tl!='1'))
tl = 'X';
else if ((ml == '1' && m == '1') && (mr != 'X' && mr!='1'))
mr = 'X';
//checking middle
//if (m == '1' && (mr != 'X' || ml != 'X' || bm != 'X' || tm != 'X' || br != 'X' || tl != 'X' || bl != 'X' || tr != 'X')) {
else if ((m == '1' && ml == '1') && (mr != 'X'&&mr!='1'))
mr = 'X';
else if ((m == '1' && mr == '1') && (ml != 'X'&&ml!='1'))
ml = 'X';
else if ((m == '1' && tm == '1') && (bm != 'X'&&bm!='1'))
bm = 'X';
else if ((m == '1' && bm == '1') && (tm != 'X'&&tm!='1'))
tm = 'X';
else if ((m == '1' && tl == '1') && (br != 'X'&&br!='1'))
br = 'X';
else if ((m == '1' && br == '1') && (tl != 'X')&&tl!='1')
tl = 'X';
else if ((m == '1' && tr == '1') && (bl != 'X'&&bl!='1'))
bl = 'X';
else if ((m == '1' && bl == '1') && (tr != 'X'&&tr!='1'))
tr = 'X';
//CHECKING IF MIDDLE RIGHT IS FILLED
//if (mr == '1' && (ml != 'X' || br != 'X' || tr != 'X')) {
else  if ((mr == '1' && m == '1') && (ml != 'X'&&ml!='1'))
ml = 'X';
else if ((mr == '1' && tr == '1') && (br != 'X'&&br!='1'))
br = 'X';
else if (((mr == '1' && br == '1') && tr != 'X'&&tr!='1'))
tr = 'X';


//CHECKING IF BOTTOM LEFT IS FILLED
//if (bl == '1' && (tr != 'X' || br != 'X' || tr != 'X')) {
else if ((bl == '1' && m == '1') && (tr != 'X'&&tr!='1'))
tr = 'X';
else if ((bl == '1' && bm == '1') && (br != 'X'&&br!='1'))
br = 'X';
else if ((bl == '1' && ml == '1') && (tr != 'X'&&tr!='1'))
tr = 'X';
//CHECKING IF BOTTOM MIDDDLE IS FILLED
else if ((bm == '1' && br == '1') && (bl != 'X'&&bl!='1'))
bl = 'X';
else if ((bm == '1' && bl == '1') && (br != 'X'&&br!='1'))
br = 'X';
else if ((bm == '1' && m == '1') && (tm != 'X'&&tm!='1'))
tm = 'X';
//CHECKING IF BOTTOM MIDDDLE IS FILLED
//if ( && (bl != 'X' || br != 'X' || tm != 'X')) {
else if ((bm == '1' && br == '1') && (bl != 'X'&&bl!='1'))
bl = 'X';
else if ((bm == '1' && bl == '1') && (br != 'X'&&br!='1'))
br = 'X';
else if ((bm == '1' && m == '1') && (tm != 'X'&&tm!='1'))
tm = 'X';
//if (br == '1' && (bl != 'X' || tr != 'X' || tl != 'tl')) {
else if ((br == '1' && bm == '1') && (bl != 'X'&&bl!='1'))
bl = 'X';
else if ((br == '1' && mr == '1') && (tr != 'X'&&tr!='1'))
tr = 'X';
else if ((br == '1' && m == '1') && (tl != 'tl'&&tl!='1'))
tl = 'X';
//diagonals
else if ((tl == '1' && br == '1') && (m != 'X'&&m!='1'))
m = 'X';
else if ((tr == '1' && bl == '1') && (m != 'X' && m != '1'))
m = 'X';
else if ((ml == '1' && mr == '1') && (m != 'X' && m != '1'))
m = 'X';
else if ((tm == '1' && bm == '1') && (m != 'X' && m != '1'))
m = 'X';
else if ((tl == '1' && tr == '1') && (tm != 'X' && tm != '1'))
tm = 'X';
else if((bl=='1'&&br=='1')&&(bm!='X' && bm != '1'))
bm = 'X';
else if((tr=='1'&&br=='1')&&(mr!='X' && mr != '1'))
mr = 'X';
else if((tl=='1'&&bl=='1')&&(ml!='X' && ml != '1'))
ml = 'X';
else {
if (m != '1' && m != 'X')
m = 'X';
//1st and 2nd box is X
else if ((tl == 'X' && tm == 'X') && (tr != '1'))
tr = 'X';
//1st box and 3rd box is X
else if ((tl == 'X' && tr == 'X') && (tm != '1'))
tm = 'X';
//1st box and 4th box is X
else if ((tl == 'X' && ml == 'X') && (bl != '1'))
bl = 'X';
//1st box and 5th box is X
else if ((tl == 'X' && m == 'X') && (br != '1'))
br = 'X';
//1st box and 7th box is X
else if ((tl == 'X' && bl == 'X') && (ml != '1'))
ml = 'X';
//1st box and 9th box is X
else if ((tl == 'X' && br == 'X') && (m != '1'))
m = 'X';
//2nd and 3rd box is X
else if ((tm == 'X' && tr == 'X') && (tl != '1'))
tl = 'X';
//2nd and 5th box is X
else if ((tm == 'X' && m == 'X') && (bm != '1'))
bm = 'X';
//2nd and 8th box is X
else if ((tm == 'X' && bm == 'X') && (m != '1'))
m = 'X';
//3rd and 9th box is X
else if ((tr == 'X' && br == 'X') && (mr != '1'))
mr = 'X';

//3rd and 5th box is X
else if ((tr == 'X' && m == 'X') && (bl != '1'))
bl = 'X';
//3rd and sixth box is X
else if ((tr == 'X' && mr == 'X') && (br != '1'))
br = 'X';
//3rd and 7th box is X
else if ((tr == 'X' && bl == 'X') && (m != '1'))
m = 'X';
//4th and 5th
else if ((ml == 'X' && m == 'X') && (mr != '1'))
m = 'X';
//4th and 6th
else if ((ml == 'X' && mr == 'X') && (m != '1'))
m = 'X';
//4th and 7th
else if ((ml == 'X' && bl == 'X') && (tl != '1'))
tl = 'X';
//5th and sixth
else if ((m == 'X' && mr == 'X') && (ml != '1'))
ml = '1';
//5th and 8th
else if ((m == 'X' && bm == 'X') && (tm != '1'))
tm = '1';
//5th and 7th
else if ((m == 'X' && br == 'X') && (br != '1'))
br = '1';
//6th and 9th
else if ((mr == 'X' && br == 'X') && (tr != '1'))
tr = 'X';
//7 and 8
else if((bl=='X'&&bm=='X')&&(br!='1'))
    br='X';
//7 and 9
else if ((bl == 'X' && br == 'X') && (bm != '1'))
bm = 'X';
//8 and 9
else if ((br == 'X' && bm == 'X') && (bl != '1'))
bl = 'X';
else if ((tr == '1')&&(tl!='1'&&tl!='X'))
bl = 'X';
else if ((bl == '1') && (tr != '1' && tr != 'X'))
tr = 'X';
else if ((tl == '1') && (br != '1' && br != 'X'))
br = 'X';
else if ((br == '1') && (tl != '1' && tl != 'X'))
tl = 'X';
else if (tr != '1' && tr != 'X')
tr = 'X';
else if (tm != '1' && tm != 'X')
tm = 'X';
else if (tl != '1' && tl != 'X')
tl = 'X';
else if (ml != '1' && ml != 'X')
ml = 'X';
else if (mr != '1' && mr != 'X')
mr = 'X';
else if (m != '1' && m != 'X')
m = 'X';
else if (bl != '1' && bl != 'X')
tl = 'X';
else if (br != '1' && br != 'X')
br = 'X';
else if (bm != '1' && bm != 'X')
bm = 'X';
}
    }
    void check() {
        if (tl == '1' && ml == '1' && bl == '1') {

            cout << "\033[2J\033[1;1H";
            board(tr, tm, tl, mr, m, ml, br, bm, bl);
            cout << "USER WON";
            exit(0);
        }
        else if (tl == '1' && m == '1' && br == '1') {

            cout << "\033[2J\033[1;1H";
            board(tr, tm, tl, mr, m, ml, br, bm, bl);
            cout << "USER WON";
            exit(0);
        }
        else if (tr == '1' && tm == '1' && tl == '1') {

            cout << "\033[2J\033[1;1H";
            board(tr, tm, tl, mr, m, ml, br, bm, bl);
            cout << "USER WON";
            exit(0);
        }
        else if (tr == '1' && m == '1' && bl == '1') {

            cout << "\033[2J\033[1;1H";
            board(tr, tm, tl, mr, m, ml, br, bm, bl);
            cout << "USER WON";
            exit(0);
        }///////////////////////////////////////////////
        else if (tm == '1' && m == '1' && bm == '1') {

            cout << "\033[2J\033[1;1H";
            board(tr, tm, tl, mr, m, ml, br, bm, bl);
            cout << "USER WON";
            exit(0);
        }//////////////////////////////////////////////
        else if (tr == '1' && mr == '1' && br == '1') {
            cout << "\033[2J\033[1;1H";
            board(tr, tm, tl, mr, m, ml, br, bm, bl);
            cout << "USER WON"; 
            exit(0);
        }
        else if (tr == '1' && m == '1' && bl == '1') {
            cout << "\033[2J\033[1;1H";
            board(tr, tm, tl, mr, m, ml, br, bm, bl);
            cout << "USER WON"; 
            exit(0);
        }
        ///////////
        else if (ml == '1' && m == '1' && mr == '1') {
            cout << "\033[2J\033[1;1H";
            board(tr, tm, tl, mr, m, ml, br, bm, bl);
            cout << "USER WON"; 
            exit(0);
        }//////////////////////////////////////////////

        else if (bl == '1' && bm == '1' && br == '1') {
            cout << "\033[2J\033[1;1H";
            board(tr, tm, tl, mr, m, ml, br, bm, bl);
            cout << "USER WON"; 
            exit(0);
        }
        ////////////////////////////////////////////////////////////
        else if (tl == 'X' && ml == 'X' && bl == 'X') {
            cout << "\033[2J\033[1;1H";
            board(tr, tm, tl, mr, m, ml, br, bm, bl);
            cout << "MACHINE WON"; 
            exit(0);
        }
        else if (tl == 'X' && m == 'X' && br == 'X') {
            cout << "\033[2J\033[1;1H";
            board(tr, tm, tl, mr, m, ml, br, bm, bl);
            cout << "MACHINE WON"; 
            exit(0);
        }
        else if (tr == 'X' && tm == 'X' && tl == 'X') {
            cout << "\033[2J\033[1;1H";
            board(tr, tm, tl, mr, m, ml, br, bm, bl);
            cout << "MACHINE WON"; 
            exit(0);
        }
        else if ((tr == 'X' && m == 'X') && (bl == 'X')) {
            cout << "\033[2J\033[1;1H";
            board(tr, tm, tl, mr, m, ml, br, bm, bl);
            cout << "MACHINE WON"; 
            exit(0);
        }///////////////////////////////////////////////
        else if (tm == 'X' && m == 'X' && bm == 'X') {
            cout << "\033[2J\033[1;1H";
            board(tr, tm, tl, mr, m, ml, br, bm, bl);
            cout << "MACHINE WON";
            exit(0);
        }//////////////////////////////////////////////
        else if (tr == 'X' && mr == 'X' && br == 'X') {
            cout << "\033[2J\033[1;1H";
            board(tr, tm, tl, mr, m, ml, br, bm, bl);
            cout << "MACHINE WON"; 
            exit(0);
        }
        else if (tr == 'X' && m == 'X' && bl == 'X') {
            cout << "\033[2J\033[1;1H";
            board(tr, tm, tl, mr, m, ml, br, bm, bl);
            cout << "MACHINE WON"; 
            exit(0);
        }
        else {
            cout<<"no one won";
        }
    }
    void user() {
        int choice;
        cout << "choose box " << endl;
        cout << "1. top left" << endl << "2.top middle" << endl << "3.top right" << endl;
        cout << "4. middle right" << endl << "5. middle" << endl << "6. middle left" << endl;
        cout << "7. bottom right" << endl << "8.bottom middle" << endl << "9.bottom right" << endl;
        cin >> choice;
        switch (choice) {
        case 1:tl = '1'; break;
        case 2:tm = '1'; break;
        case 3:tr = '1'; break;
        case 4:ml = '1'; break;
        case 5:m = '1'; break;
        case 6:mr = '1'; break;
        case 7:bl = '1'; break;
        case 8:bm = '1'; break;
        case 9:br = '1'; break;
        }cout << endl;
        //board(tr, tm, tl, mr, m, ml, br, bm, bl);

    }
    void choose() {
        int choose;
        cout << "choose who will play first";
        cout << endl << "1. user" << endl << "2.machine";
        cin >> choose;
        if (choose == 1) {
            user();

            check();
            cout << "\033[2J\033[1;1H";
            ai_();
            check();
            cout << "\033[2J\033[1;1H";
            board(tr, tm, tl, mr, m, ml, br, bm, bl);
            user();

            check();
            cout << "\033[2J\033[1;1H";
            board(tr, tm, tl, mr, m, ml, br, bm, bl);
            ai_(); 
            check();
            cout << "\033[2J\033[1;1H";
            board(tr, tm, tl, mr, m, ml, br, bm, bl);
            user();

            check();
            cout << "\033[2J\033[1;1H";
            board(tr, tm, tl, mr, m, ml, br, bm, bl);
            ai_(); 
            check();
            cout << "\033[2J\033[1;1H";
            board(tr, tm, tl, mr, m, ml, br, bm, bl);
            user();

            check();
            cout << "\033[2J\033[1;1H";
            board(tr, tm, tl, mr, m, ml, br, bm, bl);
            ai_(); 
            check();
            cout << "\033[2J\033[1;1H";
            board(tr, tm, tl, mr, m, ml, br, bm, bl);
            user();

            check();
            cout << "\033[2J\033[1;1H"; 
            board(tr, tm, tl, mr, m, ml, br, bm, bl);
            check();
        }
        else {
            // ai_();
             //board(tr, tm, tl, mr, m, ml, br, bm, bl);
            ai_();

            check();
            cout << "\033[2J\033[1;1H";
            board(tr, tm, tl, mr, m, ml, br, bm, bl);
            user();
            check();
            ai_();

            check();
            cout << "\033[2J\033[1;1H";
            board(tr, tm, tl, mr, m, ml, br, bm, bl);
            user();
            check();
            ai_();
            check();
            cout << "\033[2J\033[1;1H";
            board(tr, tm, tl, mr, m, ml, br, bm, bl);
            user();
            check();
            ai_();
            check();
            cout << "\033[2J\033[1;1H";
            board(tr, tm, tl, mr, m, ml, br, bm, bl);
            user();
            check();
            ai_();
            check();
            cout << "\033[2J\033[1;1H";
            check();
            board(tr, tm, tl, mr, m, ml, br, bm, bl);




            
            //cout << "\033[2J\033[1;1H";

//            board(tr, tm, tl, mr, m, ml, br, bm, bl);
  //          ai_();
    //        board(tr, tm, tl, mr, m, ml, br, bm, bl);
      //      cout << "\033[2J\033[1;1H";

        }

    }
};
int main()
{
    std::cout << "Hello World!\n";
    game play;
    play.choose();
    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
