#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    double loan,rate,pay;
    int i=1;
    cout << "Enter initial loan : ";
    cin >> loan;
    cout << "Enter interest rate per year (%) : ";
    cin >> rate;
    cout << "Enter amount you can pay per year : ";
    cin >> pay;

    cout << setw(13) << left << "EndOfYear#";
    cout << setw(13) << left << "PrevBalance";
    cout << setw(13) << left << "Interest";
    cout << setw(13) << left << "Total";
    cout << setw(13) << left << "Payment";
    cout << setw(13) << left << "NewBalance";
    cout << "\n";
    
    for(;;i++)
    {
        double interest = rate/100*loan;
        double total = interest+loan;
        if (pay>total)
        {
            pay=total;
            
        }
        double newb = total-pay;
        cout << fixed << setprecision(2);
        cout << setw(13) << left << i;
        cout << setw(13) << left << loan;
        cout << setw(13) << left << interest;
        cout << setw(13) << left << total;
        cout << setw(13) << left << pay;
        cout << setw(13) << left << newb;
        loan=newb;
        cout << "\n";
    if (newb==0)
        {
            break;
        }
        
    }

    return 0;
}
