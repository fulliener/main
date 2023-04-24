#include "Circle.h"
#include <iostream>
using namespace std;

int main() {
    Circle mas[3];
    float radius;
    float x_center;
    float y_center;

    for (int i = 0; i < 3; i++) {
        setlocale(LC_ALL, "");
        cout << "Ââåäèòå ðàäèóñ " << i + 1 << " îêðóæíîñòè" << endl;
        cin >> radius;

        cout << "Ââåäèòå êîîðäèíàòó X äëÿ " << i + 1 << " îêðóæíîñòè" << endl;
        cin >> x_center;

        cout << "Ââåäèòå êîîðäèíàòó Y äëÿ " << i + 1 << " îêðóæíîñòè" << endl;
        cin >> y_center;

        mas[i].set_circle(radius, x_center, y_center);
    }

    for (int i = 0; i < 3; i++) {
        setlocale(LC_ALL, "");
        cout << "Ïëîùàäü êðóãà " << i + 1 << ": " << mas[i].square() << endl;
        cout << "Ìîæíî ëè îïèñàòü òðåóãîëüíèê ó " << i + 1 << " îêðóæíîñòè? " << mas[i].triangle_around(radius, x_center, y_center) << endl;
        cout << "Ìîæíî ëè âïèñàòü òðåóãîëüíèê â " << i + 1 << " îêðóæíîñòü? " << mas[i].triangle_in(radius, x_center, y_center) << endl;

    }
    float r2, x2, y2;
    cout << "Íàïèøèòå ðàäèóñ, x è y öåíòðà îêðóæíîñòè êîòîðóþ õîòèòå ïðîâåðèòü íà ïåðåñå÷åíèå: " << endl;
    cin >> r2 >> x2 >> y2;
    for (int i = 0; i < 3; i++) {
        cout << "Èìåþòñÿ ëè òî÷êè ïåðåñå÷åíèÿ? " << mas[i].check_circle(r2, x2, y2) << endl;
    }
}