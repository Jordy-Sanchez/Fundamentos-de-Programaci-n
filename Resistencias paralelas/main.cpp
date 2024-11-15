#include <iostream>

using namespace std;

int main()
{

    float  Rt, R1, R2, R3;

    cout <<"INGRESE R1" << endl;
    cin >> R1 ;
    if (R1 > 0 ){
        cout << "INGRESE R2" << endl;
        cin >> R2;
          if(R2 > 0){
           cout<< "ingrese R3" << endl;
           cin >> R3;
             if (R3>0){
               Rt= 1/(1/R1 + 1/R2 + 1/R3);
               cout<< "Rt es" << Rt <<endl;

    }
    else
    {
    cout<< "error en R3"<<endl;
    }
    }
    else
    {
    cout << "error en R2 " << endl;
    }
    }
    else
    {
    cout << "ERROR EN R1" << endl;
    }




    return 0;
}
