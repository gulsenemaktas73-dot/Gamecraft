#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    // Koordinat bazlı dünya (X, Y, Z koordinatları gibi düşün)
    map<string, string> dunya;

    // Dünyaya blok yerleştirelim
    dunya["0,0,0"] = "Tas";
    dunya["0,1,0"] = "Toprak";
    dunya["1,0,0"] = "Cimen";

    cout << "--- C++ Dunya Verisi ---" << endl;
    for (auto const& [koordinat, blok] : dunya) {
        cout << "Konum: " << koordinat << " | Blok Türü: " << blok << endl;
    }

    return 0;
}
