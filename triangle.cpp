
//Finding area of triangle code
#include <iostream>
using namespace std;

double calc(int l, int w){
    double triangle;
    triangle = 0.5 * l * w;
    return triangle;
}

int main(){
    int length, width, area;
    cout << "Length: " << endl;
    cin >> length;
    cout << "Width: " << endl;
    cin >> width;
    
    area = calc(length, width);
    cout << "Area of triangle: " << area << endl;
    return 0;

}
