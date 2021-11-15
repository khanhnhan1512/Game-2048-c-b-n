#include <iostream>
using namespace std;

int main() {
    /* --------------------------------
        DO NOT CHANGE THIS PART
        board 3x3 (9 variables)
    */
    int b0, b1, b2, b3, b4, b5, b6, b7, b8;
   // cout << "enter 9 int number:\n";
    cin >> b0 >> b1 >> b2 >> b3 >> b4 >> b5 >> b6 >> b7 >> b8;
    // --------------------------------
    cout << "Grid: " << endl;
    // TODO: print board 3x3, all 0 number must be placed by '_'
    b0 == 0 ? cout << "_ " : cout << b0 << " ";
    b1 == 0 ? cout << "_ " : cout << b1 << " ";
    b2 == 0 ? cout << "_\n" : cout << b2 << endl;
    b3 == 0 ? cout << "_ " : cout << b3 << " ";
    b4 == 0 ? cout << "_ " : cout << b4 << " ";
    b5 == 0 ? cout << "_\n" : cout << b5 << endl;
    b6 == 0 ? cout << "_ " : cout << b6 << " ";
    b7 == 0 ? cout << "_ " : cout << b7 << " ";
    b8 == 0 ? cout << "_\n" : cout << b8 << endl;


    char letter;
    khanhnhan:
    //cout << "nhap vao huong di" << endl;
    cin >> letter;
    if (letter == 'a')
    {
        if (b0 == b1)
        {
            b0 += b1;
            b1 = b2;
            b2 = 0;
        }
        if (b3 == b4)
        {
            b3 += b4;
            b4 = b5;
            b5 = 0;
        }
        if (b6 == b7)
        {
            b6 += b7;
            b7 = b8;
            b8 = 0;
        }
        if (b1 == 0 && b0==b2)
        {
            b0 += b2;
            b2 = 0;
            b1 = 0;
        }
        if (b4 == 0 && b3 == b5)
        {
            b3 += b5;
            b5 = 0;
            b4 = 0;
        }
        if (b7 == 0 && b6 == b8)
        {
            b6 += b8;
            b8 = 0;
            b7 = 0;
        }
        if (b1 == b2 && b0!=b1)
        {
            b1 += b2;
            b2 = 0;
        }
        if (b4 == b5 && b3 != b4)
        {
            b4 += b5;
            b5 = 0;
        }
        if (b7 == b8 && b6 != b7)
        {
            b7 += b8;
            b8 = 0;
        }
        if (b0 == 0)
        {
            b0 = b1;
            b1 = b2;
            b2 = 0;
        }
        if (b3 == 0)
        {
            b3 = b4;
            b4 = b5;
            b5 = 0;
        }
        if (b6 == 0)
        {
            b6 = b7;
            b7 = b8;
            b8 = 0;
        }
        if (b1 == 0)
        {
            b1 = b2;
            b2 = 0;
        }
        if (b4 == 0)
        {
            b4 = b5;
            b5 = 0;
        }
        if (b7 == 0)
        {
            b7 = b8;
            b8 = 0;
        }
        cout << "Next Move: " << endl;
        b0 == 0 ? cout << "_ " : cout << b0 << " ";
        b1 == 0 ? cout << "_ " : cout << b1 << " ";
        b2 == 0 ? cout << "_\n" : cout << b2 << endl;
        b3 == 0 ? cout << "_ " : cout << b3 << " ";
        b4 == 0 ? cout << "_ " : cout << b4 << " ";
        b5 == 0 ? cout << "_\n" : cout << b5 << endl;
        b6 == 0 ? cout << "_ " : cout << b6 << " ";
        b7 == 0 ? cout << "_ " : cout << b7 << " ";
        b8 == 0 ? cout << "_\n" : cout << b8 << endl;
      //  goto khanhnhan;
    }
    else if (letter == 'd')
    {
        if (b1 == b2)
        {
            b2 += b1;
            b1 = b0;
            b0 = 0;
        }
        if (b4 == b5)
        {
            b5 += b4;
            b4 = b3;
            b3 = 0;
        }
        if (b7 == b8)
        {
            b8 += b7;
            b7 = b6;
            b6 = 0;
        }
        if (b1 == 0 && b0 == b2)
        {
            b2 += b0;
            b0 = 0;
            b1 = 0;
        }
        if (b4 == 0 && b3 == b5)
        {
            b5 += b3;
            b3 = 0;
            b4 = 0;
        }
        if (b0 == b1 && b1 != b2)
        {
            b1 += b0;
            b0 = 0;
        }
        if (b7 == 0 && b6 == b8)
        {
            b8 += b6;
            b6 = 0;
            b7 = 0;
        }
        if (b3 == b4 && b4 != b5)
        {
            b4 += b3;
            b3 = 0;
        }
        if (b6 == b7 && b7 != b8)
        {
            b7 += b6;
            b6 = 0;
        }
        if (b1 == 0)
        {
            b1 = b0;
            b0 = 0;
        }
        if (b4 == 0)
        {
            b4 = b3;
            b3 = 0;
        }
        if (b7 == 0)
        {
            b7 = b6;
            b6 = 0;
        }
        if (b2 == 0)
        {
            b2 = b1;
            b1 = b0;
            b0 = 0;
        }
        if (b5 == 0)
        {
            b5 = b4;
            b4 = b3;
            b3 = 0;
        }
        if (b8 == 0)
        {
            b8 = b7;
            b7 = b6;
            b6 = 0;
        }
        cout << "Next Move: " << endl;
        b0 == 0 ? cout << "_ " : cout << b0 << " ";
        b1 == 0 ? cout << "_ " : cout << b1 << " ";
        b2 == 0 ? cout << "_\n" : cout << b2 << endl;
        b3 == 0 ? cout << "_ " : cout << b3 << " ";
        b4 == 0 ? cout << "_ " : cout << b4 << " ";
        b5 == 0 ? cout << "_\n" : cout << b5 << endl;
        b6 == 0 ? cout << "_ " : cout << b6 << " ";
        b7 == 0 ? cout << "_ " : cout << b7 << " ";
        b8 == 0 ? cout << "_\n" : cout << b8 << endl;
       // goto khanhnhan;
    }
  /*  else if (letter == 'e')
   {
   cout << "hen gap lai" << endl;
   return 0;
 }
    else if (letter != 'a' && letter != 'd')
     {
     cout << "moi ban nhap lai" << endl;
     goto khanhnhan;
    }*/
    return 0;
}
