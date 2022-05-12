#include<Windows.h>
#include <iostream>
#include <iomanip>
using namespace std;
/*int a, b;
void func5(int a, int b) {
    cout << "Введите два числа: ";
    cin >> a >> b;
    if (a > b) {
        cout << a << endl; cout << a + b;
    }
    else if (a < b) {
        cout << b << endl;
        cout << b - a;
    }
}
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    func5(a, b);
}
*/
//1 задача
/*int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int a, b;
    cout << "Введите пожалуйста стоимость покупки!";
    cin >> a;
    if (a > 1000) {
        cout << "Ваш товар со скидкой" << endl;
        cout << a - (a * 0.1);
       
    }
    else
        cout << "Сумма недостаточна для скидки" << endl <<  a;
}
*/
//задача 2
/*int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int x, y, vopros;
    srand(time(0));
    x = rand() % 10;
    y = rand() % 10;
    cout << "Сосчитайте сколько будет " << x << "*" << y << "?" << endl;
    cout << "Введите посчитанный ответ и нажмите ДАЛЕЕ" << endl;
    cin >> vopros;
    int res = x * y;
    if (res == vopros) {
        cout << "правильно!!!!";
    }
    else
        cout << "Вы ошиблись";


}
*/
//задача 3
/*void main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "ДЛЯ НАЧААЛ ВЫБЕРИТЕ РАЗМЕР ФОТОГРАФИИ"
        << "[1] - 9×12\n"
        << "[2] - 10×15\n"
        << "[3] - 18×24\n";
    int size = 0;
    cin >> size;
    cout << "Введите количество фотографий пожалуйста:";
    int counter;
    cin >> counter;
    int price = 0;
    switch (size) {
    case 1:
        price = 20;
    case 2:
        price = 16;
    case 3:
        price = 40;
        break;
    }
    if (size < 1 || size > 3 || counter < 1) 
        cout << "данное желание не исполнимо";
    else{
        cout << "Твоя цена за товар:" << price << endl;
        cout << "Твоё количество:\n" << counter << endl;
        cout << "ТВоя сумма в целом\n" << price * counter << endl;
        cout << "Твоя скидка 10 % если больше 10 фото:" << ((counter > 10) ? price * counter * 0.1 : 0) << endl;
        cout << "В итоге заплатитьь тебе надобно старче:" << (counter * price) - ((counter > 10) ? price * counter * 0.1 : 0) << endl;
    }
}
*/
//задача 4
/*int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int tsena, cod, min;
    cout << " Город          	      Код           Цена минуты (руб.)\n"
                "Владивосток          423                 2, 2\n"
                "Москва         	  495                 1, 0\n"
                "Мурманск      	      815                 1, 2\n"
                "Самара        	      846                 1, 4" << endl;
    
    
    cout << " ВВедите код города: \n";
    cin >> cod;
    cout << " Введите количество минут : \n";
    cin >> min;
    switch (cod) {
    case 423:
    tsena = 2.2 * min;
    cout << "Цена звонка в этот город (в рублях)\n :" << tsena << endl;
    break;
    case 495:
        tsena = 1.0 * min;
        cout << "Цена звонка в этот (в рублях)\n :" << tsena << endl;
        break;
    case 815:
        tsena = 1.2 * min;
        cout << "Цена звонка в этот город (в рублях)\n :" << tsena << endl;
        break;
    case 846:
        tsena = 1.4 * min;
        cout << "Цена звонка в этот город (в рублях)\n :" << tsena << endl;
        break;
    }     
}
*/
//задача 5
/*int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    const double g = 9.8;
    double v = 0;
    cout << " Введите Время:\n";
    cin >> v;
    double t = 0;
    for (double i = 0; i < v * 2; i++) {
        cout << setprecision(1) << t << ' ' << setprecision(2) << g * t << endl; // setprecision для уточнения плавающей точки от дабла
        t += 0.5;
    }
    return 0;
}
*/
//задача 6
/*int main() {
    int a, b = 0;
    cout << "Введите сколько вы хотите чисел было сложено:\n";
    cin >> a;
    for (int i = 0; i <= a; i++) {
        b += i;
    }
    cout << "Вот ваша сумма данного количества цифр \n";
    cout << b;
}
*/
//задача 7
/*int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int a, b, n = 0, c;
    cout << " Угадайте число всего за 5 попыток\n";
    srand(time(0));
    c = rand() % 11;
    do
    {
        n++;
        cout << n << "  Ваша попытка :" << endl;
        cin >> b;
        if (b == c)
            cout <<"вы угадали" << endl;
        else
            cout << "не угадали\n";
    } while (b != c && n != 5);
    system("pause");
    return 0;
}
*/
//задача 8 ------ утеряно 
// задача 9
int main() {
    int arr[10];

}