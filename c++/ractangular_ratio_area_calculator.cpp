#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double diagonal_line;
    double width_ratio;
    double height_ratio;
    
    cout << "Hello, World!" << endl;
    cout << "대각선 길이를 입력하세요";
    cin >> diagonal_line;
    cout << endl;
    cout << "가로 비율을 입력하세요";
    cin >> width_ratio;
    cout << endl;
    cout << "세로 비율을 입력하세요";
    cin >> height_ratio;
    cout << endl;
    
    double width = diagonal_line * sqrt(width_ratio * width_ratio / (width_ratio * width_ratio + height_ratio * height_ratio));
    double height = diagonal_line * sqrt(height_ratio * height_ratio / (width_ratio * width_ratio + height_ratio * height_ratio));
    
    cout << "가로는" << endl << width << endl << "세로는" << endl << height << endl << "넓이는" << width*height << endl;
    
    
    return 0;
}