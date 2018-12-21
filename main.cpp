#include <iostream>
#include<math.h>

using namespace std;

float calc(float hsh, float lvl, float dps, float maxhp, float hpgen, float ilvl, float hs, float reflect, float mindps, float minKhp) {
    float divider = dps > 50000 ? 25 : 20;
    float mindpsdiv = mindps > 50000 ? 25 : 20;
    float minhpdiv = minKhp > 50000 ? 25 : 20;
    float rating = (hsh + lvl + (dps / divider) + (maxhp / 10) + (hpgen * 5) + ilvl + (hs * 5) + (reflect / 25) + (mindps / mindpsdiv) + (minKhp / minhpdiv)) / 16;
    return round(rating);
}

int main()
{
    while (1 != 2)
    {
        float hsh;
        float lvl;
        float dps;
        float maxhp;
        float hpgen;
        float ilvl;
        float hs;
        float reflect;
        float mindps;
        float minKhp;

        cout << "\n\nHighest server hacked: ";
        cin >> hsh;
        cout << "Current level: ";
        cin >> lvl;
        cout << "Lasgun active weapon DPS: ";
        cin >> dps;
        if (dps > 0) {
            dps *= 0.8;
        } else {
           cout << "Active weapon DPS: ";
           cin >> dps;
        }
        cout << "Max HP: ";
        cin >> maxhp;
        cout << "HP generation: ";
        cin >> hpgen;
        cout << "Item level: ";
        cin >> ilvl;
        cout << "Hack speed: ";
        cin >> hs;
        cout << "Damage reflect: ";
        cin >> reflect;
        cout << "Minion Active DPS: ";
        cin >> mindps;
        if (mindps > 0) {
            cout << "Minion k_Health: ";
            cin >> minKhp;
        } else {
            minKhp = 0;
        }
        cout << "\nStars: " << calc(hsh, lvl, dps, maxhp, hpgen, ilvl, hs, reflect, mindps, minKhp);
    }
}
