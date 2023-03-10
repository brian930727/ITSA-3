#include <iostream>  
#include <cmath>  
using namespace std;  
  
int main() {  
    int x, y;  
    double distance;  
    cin >> x >> y;  
    distance = sqrt(x*x + y*y);  
    if (distance <= 100){  
        cout << "inside" << endl;  
    } 
	else{  
        cout << "outside" << endl;  
    }  
    return 0;  
}  
