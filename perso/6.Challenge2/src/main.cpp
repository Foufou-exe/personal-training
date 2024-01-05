
// Section 6
// Challenge

/* 
    Frank's Carpet Cleaning Service
    Rates :
        25 per small room
        35 per large piece
    The sales tax rate is 6%.
    Quotes are valid for 30 days

    Ask the user how many small and large rooms they would like cleaned
    and provide an estimate such as :
     
    Quote for a carpet cleaning service
    Number of small rooms: 3
    Number of large rooms: 1
    Price per small room: 25
    Price per large room : 35
    cost : 110
    Tax: 6.6
    ===============================
    Total estimate : 116,6
    This quote is valid for 30 days
*/

#include <iostream>

using namespace std;

int main() {
    
    int small_rooms {0};
    int large_rooms {0};
    const double small_room_price {25};
    const double large_room_price {35};
    const double tax_rate {0.06};
    const int estimate_validity {30};

    cout << "Devis pour un service de nettoyage de tapis" << endl;
    cout << "Nombre de petites pièces : ";
    cin >> small_rooms;
    cout << "Nombre de grandes pièces : ";
    cin >> large_rooms;
    cout << "Prix par petite pièce : " << small_room_price << "$" << endl;
    cout << "Prix par grande pièce : " << large_room_price << "$"  << endl;
    cout << "Coût : " << small_rooms * small_room_price + large_rooms * large_room_price << "$" << endl;
    cout << "Taxe : " << (small_rooms * small_room_price + large_rooms * large_room_price) * tax_rate << "$" << endl;
    cout << "===============================" << endl;
    cout << "Estimation totale : " << (small_rooms * small_room_price + large_rooms * large_room_price) * (1 + tax_rate) << "$" << endl;
    cout << "Ce devis est valable " << estimate_validity << " jours" << endl;
    cout << endl;

    return 0;
}

