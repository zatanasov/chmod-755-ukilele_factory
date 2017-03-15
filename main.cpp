#include <iostream>
#include <string>
#include "ukulele.cpp"

int main()
{

    Material wood(123, 12.5, "wood", 0.650, 0.901, 0.101);
    Material iron(71, 40.3, "iron", 0.101, 0.800, 0.051);
    Material copper(27, 101.5, "copper", 0.775, 0.841, 0.058);

    UkuleleBody body(12, 200.5, wood);
    Fret fret(75, 120.1, iron);
    Fretboard fretboard(76, 260.6, fret, wood);
    TuningHead head(120, 130.3, copper);
    UkuleleString str(123, 62.3, copper);
    Bridge bridge(11, 39.5, copper);
    Saddle saddle(17.5, 5.6, iron);
    UkuleleType honowuwian("honowuwian", 0.45, 0.35, 7, "A5-A6", "C3-C5", "C2-C7");

    Ukulele ukulele(751, 800.23, honowuwian, body, fretboard, head, str, bridge, saddle);

    cout << "Ukulele ID: " << ukulele.getUkulele_ID() << ";" << endl;
    cout << "Price: " << ukulele.getPrice() << ";" << endl;
    cout << "Type: " << ukulele.getUkuleleType().getName() << ";" << endl;
    cout << "Tuning head ID " << ukulele.getTuningHead().getHead_ID() << ";" << endl;
    

    return 0;
}

