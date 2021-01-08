#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <cstdlib>
#include <fstream>
using namespace std;

int main(){
    int num=0;
    float m,sd,sum=0,sum2=0;
    string textline;
    ifstream source("score.txt");
    while(getline(source,textline))
    {
        sum = sum + atof(textline.c_str());
        sum2 = sum2+ pow(atof(textline.c_str()),2);
        num++;
    }
    m = sum/num;
    sd = sqrt((sum2/num)-pow(m,2));
    
    cout << "Number of data = " << num;
    cout << setprecision(3);
    cout << "\nMean = " << m;
    cout << "\nStandard deviation = " << sd;
}
