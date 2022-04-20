#include<iostream>
#include<iomanip>
#include"getBMI.h"
#include"getObsity.h"

using namespace std;

int main()
{
    const int stdBMI = 22;

    double height;
    double weight;
    double bmi;
    double stdWeight;
    float Obsity;
    string DecisionObsity;


    cout << "身長(cm)を入力して下さい。";
    cin >> height;

    cout << "体重(kg)を入力して下さい。";
    cin >> weight;

    stdWeight = stdBMI * height * height;

    bmi = getBMI(height, weight);

	cout << "あなたのBMIは" << fixed << setprecision(1) << bmi << "になります。" << endl;

    Obsity = getObsity(bmi);

    if (Obsity==4)
    {
        DecisionObsity = "肥満度４";
    }
    else if(Obsity==3)
    {
        DecisionObsity = "肥満度３";
    }
    else if (Obsity == 2)
    {
        DecisionObsity = "肥満度２";
    }
    else if (Obsity == 1)
    {
        DecisionObsity = "肥満度１";
    }
    else if (Obsity == 0)
    {
        DecisionObsity = "標準体重";
    }
    else
    {
        DecisionObsity = "低体重";
    }

    cout << "あなたは" << DecisionObsity << "です。";

    return 0;
}