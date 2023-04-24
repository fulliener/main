#include "Figure.h"
#include <iostream>
using namespace std;

int main() {
    Figure mas[8];

    float x1, x2, x3, x4;
    float y1, y2, y3, y4;

    for (int i = 0; i < 3; i++) {
        setlocale(LC_ALL, "");
        cout << "Ââåäèòå êîîðäèíàòû äëÿ 1 òî÷êè " << i + 1 << " ÷åòûðåõóãîëüíèêà:" << endl;
        cin >> x1 >> y1;

        cout << "Ââåäèòå êîîðäèíàòû äëÿ 2 òî÷êè " << i + 1 << " ÷åòûðåõóãîëüíèêà:" << endl;
        cin >> x2 >> y2;

        cout << "Ââåäèòå êîîðäèíàòû äëÿ 3 òî÷êè " << i + 1 << " ÷åòûðåõóãîëüíèêà:" << endl;
        cin >> x3 >> y3;

        cout << "Ââåäèòå êîîðäèíàòû äëÿ 4 òî÷êè " << i + 1 << " ÷åòûðåõóãîëüíèêà:" << endl;
        cin >> x4 >> y4;

        mas[i].figure(x1, x2, x3, x4, y1, y2, y3, y4);

    }

    for (int i = 0; i < 3; i++) {
        cout << "Ñòîðîíû ÷åòûðåõóãîëüíèêà, ïåðèìåòð è ïëîùàäü " << 1 << ": ";
        mas[i].show();

        cout << "×åòûðåõóãîëüíèê ïðÿìîóãîëüíèê? " << mas[i].is_prug() << endl;
        cout << "×åòûðåõóãîëüíèê êâàäðàò? " << mas[i].is_square() << endl;
        cout << "×åòûðåõóãîëüíèê ðîìá? " << mas[i].is_romb() << endl;

        cout << "Ìîæíî ëè âïèñàòü â ÷åòûðåõóãîëüíèê îêðóæíîñòü? " << mas[i].is_out_circle() << endl;
        cout << "Ìîæíî ëè îïèñàòü îêîëî ÷åòûðåõóãîëüíèêà îêðóæíîñòü? " << mas[i].is_in_circle() << endl;

    }

}
