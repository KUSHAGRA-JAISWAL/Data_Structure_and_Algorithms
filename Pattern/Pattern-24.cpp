// 24.    *        *
//        **      **
//        * *    * *
//        *  *  *  *
//        *   **   *
//        *   **   *
//        *  *  *  *
//        * *    * *
//        **      **

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

       ios_base::sync_with_stdio(false);
       cin.tie(NULL);

       int n;
       cin >> n;

       for (int row = 1; row <= n; row += 1) {

              for (int col = 1; col <= row; col += 1) {
                     if (col == row || col == 1) {
                            cout << "*";
                     } else {
                            cout << " ";
                     }
              }

              int totalSpaces = 2 * n - 2 * row;

              for (int space = 1; space <= totalSpaces; space += 1) {
                     cout << " ";
              }

              for (int col = 1; col <= row; col += 1) {
                     if (col == row || col == 1) {
                            cout << "*";
                     } else {
                            cout << " ";
                     }
              }
              cout << endl;
       }


       for (int row = n; row >= 1; row -= 1) {

              for (int col = 1; col <= row; col += 1) {
                     if (col == row || col == 1) {
                            cout << "*";
                     } else {
                            cout << " ";
                     }
              }

              int totalSpaces = 2 * n - 2 * row;

              for (int space = 1; space <= totalSpaces; space += 1) {
                     cout << " ";
              }

              for (int col = 1; col <= row; col += 1) {
                     if (col == row || col == 1) {
                            cout << "*";
                     } else {
                            cout << " ";
                     }
              }
              cout << endl;
       }

       return 0;
}