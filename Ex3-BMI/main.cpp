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


    cout << "�g��(cm)����͂��ĉ������B";
    cin >> height;

    cout << "�̏d(kg)����͂��ĉ������B";
    cin >> weight;

    stdWeight = stdBMI * height * height;

    bmi = getBMI(height, weight);

	cout << "���Ȃ���BMI��" << fixed << setprecision(1) << bmi << "�ɂȂ�܂��B" << endl;

    Obsity = getObsity(bmi);

    if (Obsity==4)
    {
        DecisionObsity = "�얞�x�S";
    }
    else if(Obsity==3)
    {
        DecisionObsity = "�얞�x�R";
    }
    else if (Obsity == 2)
    {
        DecisionObsity = "�얞�x�Q";
    }
    else if (Obsity == 1)
    {
        DecisionObsity = "�얞�x�P";
    }
    else if (Obsity == 0)
    {
        DecisionObsity = "�W���̏d";
    }
    else
    {
        DecisionObsity = "��̏d";
    }

    cout << "���Ȃ���" << DecisionObsity << "�ł��B";

    return 0;
}