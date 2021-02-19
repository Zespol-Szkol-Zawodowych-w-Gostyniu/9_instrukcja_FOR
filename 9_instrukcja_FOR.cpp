// Pętla FOR
//

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    //int j = 1;
    //for (;;) {
    //    j++;
    //    if (j == 10) break;
    //    cout << j << endl;
    //}

    //for (int i = 1; i <= 10; i++) {
    //    cout << i << endl;
    //}
    //cout << i << endl; //Błąd! zmienna i jest poza zasiegiem
    
    //for (int i = 5, j = 10; i + j < 20; i++, j++) {
    //    cout << "i + j = " << (i + j) << '\n';
    //}


	//int i = 19;
	//bool p = true;
	//if (i < 2) p = false;
	//if ((i != 2) && (i % 2 == 0)) p = false;
	//if (i != 2) {//wszystkie i>2
	//	for (int dzielnik=3; dzielnik< ceil(sqrt(i)); dzielnik+=2){
	//		if (i % dzielnik == 0) {
	//			p = false;
	//			break;
	//		}
	//	}
	//}
	//if (p) cout << "liczba jest pierwsza!" << endl;
	//else cout << "liczba nie jest pierwsza!" << endl;

	/*
	**************
	            *
			   *
			  *
			 *
			*
		   *
		  *
		 *
		*
	   *
	  *
	 *
	***************
	*/
	//14x14
	int w = 14;
	for (int i = 1; i <= w; i++) cout << "*"; //1 wiersz
	cout << endl;
	for (int i = 1; i <= w-2; i++) {//wiersze
		for (int j = 1; j < w-i; j++) {
			cout << " ";
		}
		cout << "*";
		for (int j = w-1; j <w-i ; j--) {
			cout << " ";
		}
		cout << endl;
	}
	for (int i = 1; i <= w; i++) cout << "*";//ostatni wiersz
	cout << endl;

	//zad dom.
	/*15x15
	***************
	 *		   	 *
      *	        *
	   *	   *
	    *	  *
		 *	 *
		  * *
		   *
		  * *
		 *   *
	    *     *
	   *       *
	  *         *
	 *           *
	***************
	*/
}

