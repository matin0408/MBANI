#include <iostream>



using namespace std ;


int bmm(int x, int y) {
    if (y != 0) {
        return bmm(y, x % y);
    } else {
        return x;
    }
}

main() {
	
	int x,y ;
	cin >> x >> y ; 
	cout<< bmm(x, y);
		
}