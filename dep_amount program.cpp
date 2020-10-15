#include <iostream>
 
 using namespace std;

 int main()
 {
      setlocale(LC_ALL, "Russian");

     int days, income, dep_amount, percent, percent_amount;

     cout << "Введите сумму вклада ";
     cin >>dep_amount; 

    while (dep_amount < 1000)
    {   
        cout << "Минимальная сумма вклада состовляет 1000 рублей \n";
        cout << "Введите сумму вклада ";
        cin >>dep_amount;     

    }

     cout << "Введите срок вклада ";
     cin >>days;

     if (days > 365)
     {
        cout << "Срок вклада не может быть более 365 дней";
     }

     if (days <= 30){

         percent = 10;

         percent_amount = dep_amount * percent / 100;

         income = dep_amount - percent_amount;

         
     } 

    if (days > 30 && days <= 120 ){

         percent = 2;

         percent_amount = dep_amount * percent / 100;

         income = dep_amount + percent_amount;
    }

     if (days > 120 && days <= 240 ){

         percent = 6;

         percent_amount = dep_amount * percent / 100;

         income = dep_amount + percent_amount;
    }

    
     

     cout <<"Cумма вклада на окончание срока: "<< income << " руб.";

 }
 
 

