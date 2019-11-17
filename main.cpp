#include <iostream>

using namespace std;

string casillas[] = {"A1","A2","A3","B1","B2","B3","C1","C2","C3"};
string character;
bool stay = true;
char input;

string A1()
{
    cout << " _________________________" << endl;
    cout << "|       |       |         |" << endl;
    cout << "|___A___|_______|_________|" << endl;
    cout << "|       |       |         |" << endl;
    cout << "|_______|_______|_________|" << endl;
    cout << "|       |       |         |" << endl;
    cout << "|_______|_______|_________|" << endl;

    character = casillas[0];
    return character;


}
string B1()
{
    cout << " _________________________" << endl;
    cout << "|       |       |         |" << endl;
    cout << "|_______|___A___|_________|" << endl;
    cout << "|       |       |         |" << endl;
    cout << "|_______|_______|_________|" << endl;
    cout << "|       |       |         |" << endl;
    cout << "|_______|_______|_________|" << endl;

    character = casillas[3];
    return character;
}
string C1()
{
    cout << " _________________________" << endl;
    cout << "|       |       |         |" << endl;
    cout << "|_______|_______|____A____|" << endl;
    cout << "|       |       |         |" << endl;
    cout << "|_______|_______|_________|" << endl;
    cout << "|       |       |         |" << endl;
    cout << "|_______|_______|_________|" << endl;


    character = casillas[6];
    return character;

}
string A2()
{
    cout << " _________________________" << endl;
    cout << "|       |       |         |" << endl;
    cout << "|_______|_______|_________|" << endl;
    cout << "|       |       |         |" << endl;
    cout << "|___A___|_______|_________|" << endl;
    cout << "|       |       |         |" << endl;
    cout << "|_______|_______|_________|" << endl;


    character = casillas[1];
    return character;

}
string B2()
{
    cout << " _________________________" << endl;
    cout << "|       |       |         |" << endl;
    cout << "|_______|_______|_________|" << endl;
    cout << "|       |       |         |" << endl;
    cout << "|_______|___A___|_________|" << endl;
    cout << "|       |       |         |" << endl;
    cout << "|_______|_______|_________|" << endl;


    character = casillas[4];
    return character;

}
string C2()
{
    cout << " _________________________" << endl;
    cout << "|       |       |         |" << endl;
    cout << "|_______|_______|_________|" << endl;
    cout << "|       |       |         |" << endl;
    cout << "|_______|_______|____A____|" << endl;
    cout << "|       |       |         |" << endl;
    cout << "|_______|_______|_________|" << endl;


    character = casillas[7];
    return character;

}
string A3()
{
    cout << " _________________________" << endl;
    cout << "|       |       |         |" << endl;
    cout << "|_______|_______|_________|" << endl;
    cout << "|       |       |         |" << endl;
    cout << "|_______|_______|_________|" << endl;
    cout << "|       |       |         |" << endl;
    cout << "|___A___|_______|_________|" << endl;


    character = casillas[2];
    return character;

}
string B3()
{
    cout << " _________________________" << endl;
    cout << "|       |       |         |" << endl;
    cout << "|_______|_______|_________|" << endl;
    cout << "|       |       |         |" << endl;
    cout << "|_______|_______|_________|" << endl;
    cout << "|       |       |         |" << endl;
    cout << "|_______|___A___|_________|" << endl;

    character = casillas[5];
    return character;

}
string C3()
{
    cout << " _________________________" << endl;
    cout << "|       |       |         |" << endl;
    cout << "|_______|_______|_________|" << endl;
    cout << "|       |       |         |" << endl;
    cout << "|_______|_______|_________|" << endl;
    cout << "|       |       |         |" << endl;
    cout << "|_______|_______|____A____|" << endl;


    character = casillas[8];
    return character;

}

void Up()
{
        if (character == casillas[0])
            {
                A1();
            }
            if (character == casillas[1])
            {
                A1();
            }
            if (character == casillas[2])
            {
                A2();
            }
            if (character == casillas[3])
            {
                B1();
            }
            if (character == casillas[4])
            {
                B1();
            }
            if (character == casillas[5])
            {
                B2();
            }
            if (character == casillas[6])
            {
                C1();
            }
            if (character == casillas[7])
            {
                C1();
            }
            if (character == casillas[8])
            {
                C2();
            }
}

void Down()
{
        if (character == casillas[0] && input =='s')
            {
                A2();
                input = '0';
            }
            if (character == casillas[1] && input =='s')
            {
                A3();
                input = '0';
            }
            if (character == casillas[2] && input =='s')
            {
                A3();
                input = '0';
            }
            if (character == casillas[3] && input =='s')
            {
                B2();
                input = '0';
            }
            if (character == casillas[4] && input =='s')
            {
                B3();
                input = '0';
            }
            if (character == casillas[5] && input =='s')
            {
                B3();
                input = '0';
            }
            if (character == casillas[6] && input =='s')
            {
                C2();
                input = '0';
            }
            if (character == casillas[7] && input =='s')
            {
                C3();
                input = '0';
            }
            if (character == casillas[8] && input =='s')
            {
                C3();
                input = '0';
            }
}

void Right()
{
        if (character == casillas[0] && input =='d')
            {
                B1();
                input = '0';
            }
            if (character == casillas[1] && input =='d')
            {
                B2();
                input = '0';
            }
            if (character == casillas[2] && input =='d')
            {
                B3();
                input = '0';
            }
            if (character == casillas[3] && input =='d')
            {
                C1();
                input = '0';
            }
            if (character == casillas[4] && input =='d')
            {
                C2();
                input = '0';
            }
            if (character == casillas[5] && input =='d')
            {
                C3();
                input = '0';
            }
            if (character == casillas[6] && input =='d')
            {
                C1();
                input = '0';
            }
            if (character == casillas[7] && input =='d')
            {
                C2();
                input = '0';
            }
            if (character == casillas[8] && input =='d')
            {
                C3();
                input = '0';
            }
        }

void Left()
{
        if (character == casillas[0])
            {
                A1();
            }
            if (character == casillas[1])
            {
                A2();
            }
            if (character == casillas[2])
            {
                A3();
            }
            if (character == casillas[3])
            {
                A1();
            }
            if (character == casillas[4])
            {
                A2();
            }
            if (character == casillas[5])
            {
                A3();
            }
            if (character == casillas[6])
            {
                B1();
            }
            if (character == casillas[7])
            {
                B2();
            }
            if (character == casillas[8])
            {
                B3();
            }
}

void Controles()
{
    cout << "w to go up" << endl;
    cout << "a to go the left" << endl;
    cout << "s to go down" << endl;
    cout << "d to go right" << endl;
    cout << "x to exit" << endl;

}




int main()
{
    Controles();
    B2();

    while (stay)
    {
        cin >> input;
        if (input == 'w'){
            Up();
        }
        if (input == 's'){
            Down();
        }
        if (input == 'd'){
            Right();
        }
        if (input == 'a'){
            Left();
        }
        if (input == 'x')
        {
            cout << "Script creater by Jesus Neri" << endl;
            cout << "@neripinata";
            stay = false;
        }


    }


    return 0;
}
