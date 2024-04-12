#include <iostream>

using namespace std;

string rub(int ending) {
    if (ending % 10 == 0 || ending % 10 >= 5 || (ending / 10) % 10 == 1) {
        return " рублей";
    }
    else if (ending % 10 == 1) {
        return " рубль";
    }
    else {
        return " рубля";
    }
}

int main()
{
    string name;
    cout << "Как Вас зовут? ";
    cin >> name;

    int account;    
    int credit;
    credit:
    cout << name << ", введите сумму долга: ";
    cin >> credit;
    if (credit < 0) {
        cout << "Ошибка!!! " << name << ", введите НЕ отрицательное значение!";
        goto credit;
    }
    account = -credit;    

    while (account < 0) {
        cout << name << ", Вы должны " << -account << rub(-account) << endl;
        int debit;
        cout << name << " погасите долг!!!\nПополните счёт: ";
        cin >> debit;
        account += debit;
    }

    cout << name << ", Вы погасили долг!!!\nНа Вашем счёте осталось: " << account << rub(account) << endl;

    return 0;
}